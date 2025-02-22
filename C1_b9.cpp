#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin >> s;
    unordered_map<char, vector<int>> ve;
    int n = s.size();
    for(int i = 0; i < n; ++i)
	{
		ve[s[i]].push_back(i);
	}
    int dem = 0;
    for(char c1 = 'A'; c1 <= 'Z'; ++c1)
	{
        for(char c2 = c1 + 1; c2 <= 'Z'; ++c2)
		{
            if (ve[c1][0] < ve[c2][0] && ve[c2][0] < ve[c1][1] && ve[c1][1] < ve[c2][1])	++dem;
			if (ve[c2][0] < ve[c1][0] && ve[c1][0] < ve[c2][1] && ve[c2][1] < ve[c1][1])	++dem;
        }
    }
    cout << dem;
}
