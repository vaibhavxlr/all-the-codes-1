#include<bits/stdc++.h>
#pragma gcc optimize("ofast")
using namespace std;
typedef long long int lli;
#define mod 1000000007
#define fLoop for(lli i = 0; i < N; i++)
main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli T;
    cin >> T;
    while(T--){
     string s;
     cin >> s;
     unordered_map<char, int> u;
     for(int i = 0; i < s.size()/2; i++){
         u[s[i]]++;
     }
     int n = s.size() / 2;
     if(s.size() % 2 != 0) n++;
     int flag = 0;
     for(int i = n; i < s.size(); i++){
        //u.count(s[i]) counts the number of values(int) with key(char)
       // cout << u.count('b') << endl;
         if(u[s[i]] == 0)
            {
                 flag = 1;
                 break;
            }
           // cout << s[i] << endl;
         u[s[i]]--;
         //cout << u[s[i]] << endl;
     }
     if(flag) cout << "NO" << endl;
     else cout << "YES" << endl;
    }
    
}
    