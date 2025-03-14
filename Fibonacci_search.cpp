#include <bits/stdc++.h>
using namespace std;
int fibonacciSearch(int a[], int n, int k) {
    int fibMMm2 = 0; 
    int fibMMm1 = 1; 
    int fibM = fibMMm2 + fibMMm1; 
    while (fibM < n) {
        fibMMm2 = fibMMm1;
        fibMMm1 = fibM;
        fibM = fibMMm2 + fibMMm1;
    }
    int offset = -1;
    while (fibM > 1) {
        int i = min(offset + fibMMm2, n - 1);
        if (a[i] < k) {
            fibM = fibMMm1;
            fibMMm1 = fibMMm2;
            fibMMm2 = fibM - fibMMm1;
            offset = i;
        }
        else if (a[i] > k) {
            fibM = fibMMm2;
            fibMMm1 = fibMMm1 - fibMMm2;
            fibMMm2 = fibM - fibMMm1;
        }
        else {
            return i;
        }
    }
    if (fibMMm1 && a[offset + 1] == k) {
        return offset + 1;
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
    int result = fibonacciSearch(a, n, k);

    if (result != -1) {
        cout << "FOUND" << endl;
    } else {
        cout << "NOT FOUND" << endl;
    }

    return 0;
}
