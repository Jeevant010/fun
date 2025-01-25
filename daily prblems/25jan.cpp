#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include <unordered_map>

using namespace std;

// Function to classify tokens
string tokens(const string& token) {
    const unordered_map<string, string> keywords = {
        {"auto", "Keyword"}, {"break", "Keyword"}, {"case", "Keyword"}, {"char", "Keyword"},
        {"const", "Keyword"}, {"continue", "Keyword"}, {"default", "Keyword"}, {"do", "Keyword"},
        {"double", "Keyword"}, {"else", "Keyword"}, {"enum", "Keyword"}, {"extern", "Keyword"},
        {"float", "Keyword"}, {"for", "Keyword"}, {"goto", "Keyword"}, {"if", "Keyword"},
        {"int", "Keyword"}, {"long", "Keyword"}, {"register", "Keyword"}, {"return", "Keyword"},
        {"short", "Keyword"}, {"signed", "Keyword"}, {"sizeof", "Keyword"}, {"static", "Keyword"},
        {"struct", "Keyword"}, {"switch", "Keyword"}, {"typedef", "Keyword"}, {"union", "Keyword"},
        {"unsigned", "Keyword"}, {"void", "Keyword"}, {"volatile", "Keyword"}, {"while", "Keyword"}
    };

    // Check if the token is a keyword
    if (keywords.find(token) != keywords.end()) {
        return "Keyword";
    }

    // Check if the token is a function (e.g., matches "word(")
    if (regex_match(token, regex(R"(\w+\()"))) {
        return "Function";
    }

    // Check if the token is a string literal (anything in quotes)
    if (regex_match(token, regex(R"(\"[^\"]*\")"))) {
        return "String Literal";
    }

    // Check if the token is punctuation
    if (token == ";" || token == "," || token == "(" || token == ")" || token == "{" || token == "}") {
        return "Punctuation";
    }

    // Otherwise, treat as an identifier
    return "Identifier";
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cerr << "Usage: " << argv[0] << " <input_filename> <output_filename>" << endl;
        return 1;
    }

    ifstream file(argv[1]);
    if (!file.is_open()) {
        cerr << "Error: Could not open file " << argv[1] << endl;
        return 1;
    }

    ofstream outfile(argv[2]);
    if (!outfile.is_open()) {
        cerr << "Error: Could not open output file " << argv[2] << endl;
        return 1;
    }

    string line;
    unordered_map<string, pair<string, int>> tokenMap;
    regex tokenRegex(R"([\w]+|\"[^\"]*\"|[{};,()])");  // Tokenizes words, punctuation, and string literals

    while (getline(file, line)) {
        sregex_iterator begin(line.begin(), line.end(), tokenRegex), end;

        for (sregex_iterator it = begin; it != end; ++it) {
            string token = it->str();
            string classification = tokens(token);

            // Add or update token in the map
            if (tokenMap.find(token) != tokenMap.end()) {
                tokenMap[token].second++;
            } else {
                tokenMap[token] = {classification, 1};
            }
        }
    }

    file.close();

    // Write the classified tokens and counts to the output file
    for (const auto& entry : tokenMap) {
        outfile << entry.first << "\t" << entry.second.first << "\t" << entry.second.second << endl;
    }

    outfile.close();
    return 0;
}
