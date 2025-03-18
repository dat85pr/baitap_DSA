#include <bits/stdc++.h>

using namespace std;
int n, a[100];
bool ok = true;
void ktao(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
}
void result(){
	for(int i = 1; i <= n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
void sinh(){
	int i = n;
	while(i > 0 && a[i]){
		a[i] = 0;
		i--;
	} 
	if(i > 0){
		a[i] = 1;
	}
	else ok = false;
}
void testcase(){
	ktao();
	while(ok){
		result();
		sinh();
	}
}
int main() {
	testcase();
	return 0;
}
