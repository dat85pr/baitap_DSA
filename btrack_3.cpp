#include <bits/stdc++.h>
using namespace std;
int n, x[100];
bool cot[100], xuoi[100], nguoc[100];
void ktao(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cot[i] = true;
	}
	for(int i = 1; i <= 2 * n; i++){
		xuoi[i] = true;
		nguoc[i] = true;
	}
}
void result(){
	for(int i = 1; i <= n; i++){
		cout << "(" << i << "," << x[i] << ")" << " ";
	}
	cout << endl;
}
void Try(int i){
	for(int j = 1; j <= n; j++){
		if(cot[j] && xuoi[i - j + n] && nguoc[i + j - 1]){
			x[i] = j;
			cot[j] = false;
			xuoi[i - j + n] = false;
			nguoc[i + j - 1] = false;
			if(i == n){
			result();
			} 
			else{
				Try(i + 1);
			}
			cot[j] = true;
			xuoi[i - j + n] = true;
			nguoc[i + j - 1] = true;
		}
	}
}
int main(){
	ktao();
	Try(1);
	return 0;
}
