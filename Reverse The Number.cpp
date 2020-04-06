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
        reverse(s.begin(), s.end());
        int flag = 1;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0' && flag == 0)
               cout << s[i];
            else if(s[i] != '0')
               {
                cout << s[i];
                flag = 0;
               }
        }
        cout << endl;
    }
    
}
    