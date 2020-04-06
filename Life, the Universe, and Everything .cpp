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
    vector<int> v;
    while(1){
        lli T;
        cin >> T; 
        if(T == 42){
            break;
        }
        v.push_back(T);
    }
    int i = 0;
    while(i < v.size()){
        cout << v[i] << endl;
        i++;
    }
    
}
    