#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool squentialsearch(int a[], int n){
	for(int k = 0; k < n; k++){
		if(x == a[k]) return true;
	}
	return false;
}
int main(){
	int n, x;
	cin >> n >> x;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	bool check = sequentialsearch(a, n);
	if(check){
		cout << "FOUND" << endl;
	}
	else cout << "NOT FOUND" << endl;
	return 0;
}
