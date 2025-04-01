#include <bits/stdc++.h>
using namespace std;
int n, i, a[100];
void ktao(){
	cin >> n;
}
void result(){
	for(int i = 0; i < n; i++){
		cout << a[i];
	}
	cout << endl;
}
void Try(int i){
	for(int j = 0; j <= 1; j++){
		a[i] = j;
		if(i == n - 1){
			result();
		}
		else Try(i + 1);
		}
}

int main(){
	ktao();
	Try(0);
	return 0;
}
