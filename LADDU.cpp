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
        lli activities;
        string origin;
        int final = 0;
        cin >> activities >> origin;
        while(activities--){
            string s;
            int n = 0;
            cin >> s;
            if(s == "CONTEST_WON"){
                int rank; 
                cin >> rank;
                if(rank < 20) n = 20 - rank;
                final += (300 + n);
            }
            else if(s == "TOP_CONTRIBUTOR"){
                final += 300;
            }
            else if(s == "BUG_FOUND"){
                cin >> n;
                final += n;
            }
            else{
                final += 50;
            }
            
        }
        if(origin == "INDIAN") cout << final / 200 << endl;
        else cout << final / 400 << endl;
        
    }
    
}
    