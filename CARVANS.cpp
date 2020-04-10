#include<bits/stdc++.h>
#pragma gcc optimize("ofast")
using namespace std;
typedef int lli;
#define mod 1000000007
#define fLoop for(lli i = 0; i < N; i++)
main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli T;
    cin >> T;
    while(T--){
        lli N;
        cin >> N;
        vector<int> v;
        
        while(N--){
            int a;
            cin >> a;
            v.push_back(a);
        }
        lli count = 1, last = v[0];
        for(int i = 1; i < v.size(); i++){
            if(v[i] < last){
                count++;
            last = v[i];
            }
           
        }
        cout << count << endl;
    }
    
}
    