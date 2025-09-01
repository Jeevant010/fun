#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--){
        ll n, W;
        cin >> n >> W;
        vector<pair<ll, ll>> weights(n);
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            weights[i].first = x;
            weights[i].second = i+1;
        }

        ll sum = 0;
        ll minReq = ceil((double)W/(double)2);
        sort(weights.begin(), weights.end());
        vector<ll> ans;
        for(ll i=0; i<n; i++){
            ll currEle = weights[i].first;
            ll index = weights[i].second;
            ll test = sum+currEle;

            if(2*test<W){
                sum+=currEle;
                ans.push_back(index);
            } else if(W<= 2*test && test<=W){
                sum+= currEle;
                ans.push_back(index);
                break;
            } else if(currEle<=W){
                sum = currEle;
                ans = vector<ll>(1, index);
                break;
            } else {
                ans = vector<ll>(0);
                break;
            }
        }

        if(W<= 2*sum && sum<=W && ans.size()>0){
            cout << ans.size() << endl;
            for(ll p=0; p<ans.size(); p++){
                cout << ans[p] << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
        
    }
}    
    




// from itertools import permutations

// def solution(crypt):
//     words = crypt
//     n = max(len(word) for word in words)
//     leading_letters = set()
//     for word in words:
//         if len(word) > 1:
//             leading_letters.add(word[0])
    
//     all_letters = set(''.join(words))
//     if len(all_letters) > 10:
//         return 0
    
//     used_digits = [False] * 10
//     mapping = {}
//     count = 0

//     def char_at(word, i):
//         idx = len(word) - 1 - i
//         if idx < 0:
//             return None
//         return word[idx]

//     def dfs(i, carry):
//         nonlocal count, used_digits, mapping
//         if i == n:
//             if carry == 0:
//                 count += 1
//             return
        
//         a = char_at(words[0], i)
//         b = char_at(words[1], i)
//         c = char_at(words[2], i)
        
//         unassigned_letters = set()
//         for char in [a, b, c]:
//             if char is not None and char not in mapping:
//                 unassigned_letters.add(char)
//         unassigned_letters = list(unassigned_letters)
        
//         available_digits = [d for d in range(10) if not used_digits[d]]
//         k = len(unassigned_letters)
        
//         for perm in permutations(available_digits, k):
//             skip_perm = False
//             for idx, letter in enumerate(unassigned_letters):
//                 if perm[idx] == 0 and letter in leading_letters:
//                     skip_perm = True
//                     break
//             if skip_perm:
//                 continue
                
//             for idx, letter in enumerate(unassigned_letters):
//                 mapping[letter] = perm[idx]
//                 used_digits[perm[idx]] = True
            
//             a_val = mapping[a] if a is not None and a in mapping else 0
//             b_val = mapping[b] if b is not None and b in mapping else 0
//             c_val = mapping[c] if c is not None and c in mapping else 0
            
//             total = a_val + b_val + carry
//             if c is not None:
//                 if total % 10 != c_val:
//                     for idx, letter in enumerate(unassigned_letters):
//                         del mapping[letter]
//                         used_digits[perm[idx]] = False
//                     continue
//                 new_carry = total // 10
//             else:
//                 if total % 10 != 0:
//                     for idx, letter in enumerate(unassigned_letters):
//                         del mapping[letter]
//                         used_digits[perm[idx]] = False
//                     continue
//                 new_carry = total // 10
                
//             dfs(i+1, new_carry)
            
//             for idx, letter in enumerate(unassigned_letters):
//                 del mapping[letter]
//                 used_digits[perm[idx]] = False
                
//     dfs(0, 0)
//     return count



// import heapq

// def solution(balances, requests):
//     heap = []
//     n = len(balances)
//     current_balances = balances[:]
    
//     for idx, req in enumerate(requests):
//         parts = req.split()
//         if len(parts) < 4:
//             return [-(idx+1)]
//         req_type = parts[0]
//         timestamp = int(parts[1])
//         account_id = int(parts[2])
//         amount_val = int(parts[3])
//         account_index = account_id - 1
        
//         while heap and heap[0][0] <= timestamp:
//             ts, acc_idx, cash_amt = heapq.heappop(heap)
//             current_balances[acc_idx] += cash_amt
        
//         if account_index < 0 or account_index >= n:
//             return [-(idx+1)]
        
//         if req_type == 'deposit':
//             current_balances[account_index] += amount_val
//         elif req_type == 'withdraw':
//             if current_balances[account_index] < amount_val:
//                 return [-(idx+1)]
//             current_balances[account_index] -= amount_val
//             cashback_amt = amount_val // 50
//             if cashback_amt > 0:
//                 heapq.heappush(heap, (timestamp + 86400, account_index, cashback_amt))
//         else:
//             return [-(idx+1)]
    
//     return current_balances

// import math

// def solution(fractions):
//     results = []
//     for expr in fractions:
//         parts = expr.split('+')
//         frac1 = parts[0].split('/')
//         frac2 = parts[1].split('/')
        
//         X = int(frac1[0])
//         Y = int(frac1[1])
//         U = int(frac2[0])
//         V = int(frac2[1])
        
//         numerator = X * V + U * Y
//         denominator = Y * V
        
//         g = math.gcd(numerator, denominator)
//         A = numerator // g
//         B = denominator // g
        
//         results.append(f"{A}/{B}")
//     return results