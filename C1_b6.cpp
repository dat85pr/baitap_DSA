#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool ktra(string s){
	bool tang = true;
	bool giam = true;
	for(int i = 1; i < s.size(); i++){
		if(s[i] > s[i - 1]){
			giam = false;
		}
		if(s[i] < s[i - 1]){
			tang = false;
		}
	}
	return tang || giam;
}
int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		if(ktra(s)){
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}
