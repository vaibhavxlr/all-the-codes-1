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
        lli G;
        cin >> G;
        while(G--){
            lli I, N ,Q;
            cin >> I >> N >> Q;
            if(N % 2 == 0){
                cout << N / 2 << endl;
                continue;
            }
            if((I == 2 && Q == 1) || (I == 1 && Q == 2)){
                cout << (N / 2) + 1 << endl;
            }
            else{
                cout << N / 2 << endl;
            }
        }
    }
    
}
    