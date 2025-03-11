#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool binary_search(int a[], int n, int x){
    int l = 0, r = n - 1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m] == x){
            return true;
        }
        else if(a[m] < x){
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }
    return false;
}
int main(){
    int n, x;
    cin >> n >> x;
    int a[i];
    for(int i = 0; i < n; i++){
    	cin >> a[i];
	}
	sort(a, a + n);
    if(binary_search(a, n, x)){
        cout << "FOUND\n";
    }
    else cout << "NOT FOUND\n";

    return 0;
}
