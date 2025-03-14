#include <bits/stdc++.h>
using namespace std;
int interpolationSearch(int a[], int n, int k) {
    int low = 0, high = n - 1;
    while (low <= high && k >= a[low] && k <= a[high]) {
        if (low == high) {
            if (a[low] == k) {
                return low;
            }
            return -1;
        }
        int pos = low + ((double)(high - low) / (a[high] - a[low]) * (k - a[low]));
        if (a[pos] == k) {
            return pos;
        }
        if (a[pos] < k) {
            low = pos + 1;
        }
        else {
            high = pos - 1;
        }
    }
    return -1; 
}

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++){
    	cin >> a[i];
	}
    int result = interpolationSearch(a, n, k);

    if (result != -1) {
        cout << "FOUND" << endl;
    } else {
        cout << "NOT FOUND" << endl;
    }

    return 0;
}
