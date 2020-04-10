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
        
        lli k, d0, d1;
        cin >> k >> d0 >> d1;
        lli temp = d0 + d1;
        
        
        lli ans = ((2 * temp) % 10) + ((4 * temp) % 10) + ((8 * temp) % 10) + ((6 * temp) % 10);
        k -= 2;

        lli sum = temp;
        if(k > 0){
            sum += ((temp) % 10);
            k--;
        }
        sum += ((k / 4) * ans);
        k %= 4;
        int p = 2;
        
        while(k--) {
            sum += (p * temp) % 10;
            p = (2 * p) % 10;
        }
        
        if(sum % 3 == 0) cout << "YES\n";
        else cout << "NO\n";
}
}
    