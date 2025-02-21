#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void testcase(){
	string s;
	cin >> s;
	int dem = 0;
	for(int i = 0; i < s.size() - 3; i++){
		for(int j = i + 2; j < s.size() - 1; j++){
			if(s[i] == s[j] && s[i + 1] == s[j + 1]){
				dem++;
			}
		}
	}
	cout << dem;
}
int main(){
	testcase();
	return 0;
}
