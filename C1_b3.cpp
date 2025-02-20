#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
	int n;
	cin >> n;
	int a[101];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n ; i++){
		if(a[i] != a[n - 1 - i]){
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		testcase();
	}
	return 0;
}
