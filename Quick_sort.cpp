#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int a[1000];

void QuickSort(int left, int right){
	int i = left, j = right;
	int pivot = (left + right)/2;
	do{
		while(a[i] < a[pivot] && i < right) i++;
		while(a[j] > a[pivot] && j > left) j--;
		if(i <= j){
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}while(i <= j);
	if(left < j) QuickSort(left,j);
	if(i < right) QuickSort(i,right);
}

int main(){	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i = 0; i < n; i++)cin >> a[i];
		QuickSort(0, n-1);
		for(int i = 0; i < n; i++) cout << a[i] << " ";
		cout << endl;
	}
	return 0;
}
