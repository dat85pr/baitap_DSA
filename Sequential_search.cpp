#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool sequentialsearch(int a[], int n, int x){
    for(int i = 0; i < n; i++){
        if(a[i] == x)
            return true;
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
	bool check = sequentialsearch(a, n, x);
	if(check){
		cout << "FOUND" << endl;
	}
	else cout << "NOT FOUND" << endl;
	return 0;
}
