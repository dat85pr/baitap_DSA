#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
	ll n;
	cin >> n;
	int dem = 0;
	if(n % 2 == 0){
		while(n % 2 == 0){
			dem++;
			n /= 2;
		}
	}
	cout << dem << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		testcase();
	}
	return 0;
}
