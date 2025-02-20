#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//          1 + 1 = 2;
int main(){
	string a[8];
	for(int i = 0; i < 5; i++){
		cin >> a[i];
	}
	int h = stoi(a[0]);
	int k = stoi(a[2]);
	int j = stoi(a[4]);
	if(a[1] == "+"){
		if(h + k == j){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	else if(a[1] == "-"){
		if(h - k == j){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	else if(a[1] == "*"){
		if(h * k == j){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	else{
		if(h / k == j){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}
