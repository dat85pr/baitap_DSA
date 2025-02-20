#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;
	cin >> t;
	while(t--){
		ll a, b;
		cin >> a >> b;
		ll k = __gcd(a, b);
		ll h = a * b / k;
		cout << k << " " << h << endl;
	}
	return 0;
}
