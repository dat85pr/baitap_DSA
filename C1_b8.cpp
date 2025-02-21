#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
	string s;
	getline(cin, s);
	for(int i = 0; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
	stringstream ss(s);
	string word;
	vector<string> v;
	while(ss >> word){
		v.push_back(word);
	}
	for(auto &x : v){
		x[0] = toupper(x[0]);
	}
	string ho = v[0];
	for(int i = 0; i < ho.size(); i++){
		ho[i] = toupper(ho[i]);
	}
	for(int i = 1; i < v.size(); i++){
		if(i != v.size() - 1){
			cout << v[i] << " ";
		}
		else{
			cout << v[i] << ", ";
		}
	}
	cout << ho << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		cin.ignore();
		testcase();
	}
	return 0;
}
