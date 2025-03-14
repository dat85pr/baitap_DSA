#include <bits/stdc++.h>
using namespace std;
int ternarySearch(int a[], int left, int right, int k) {
    if (left > right) {
        return -1;
    }
    int mid1 = left + (right - left) / 3;
    int mid2 = right - (right - left) / 3;
    if (a[mid1] == k) {
        return mid1;
    }
    if (a[mid2] == k) {
        return mid2;
    }
    if (k < a[mid1]) {
        return ternarySearch(a, left, mid1 - 1, k);
    }
    else if (k > a[mid2]) {
        return ternarySearch(a, mid2 + 1, right, k);
    }
    else {
        return ternarySearch(a, mid1 + 1, mid2 - 1, k);
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
    	cin >> a[i];
	}
    int result = ternarySearch(a, 0, n - 1, k);

    if (result != -1) {
        cout << "FOUND"<< endl;
    } else {
        cout << "NOT FOUND" << endl;
    }

    return 0;
}
