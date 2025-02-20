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
	for(auto x : v){
		cout << x << " ";
	}
	cout << endl;
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
