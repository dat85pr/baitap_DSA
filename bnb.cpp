#include <bits/stdc++.h>

using namespace std;

const int maxn = 21;
int n, S, cnt, cnt_best, sum, a[maxn], mark[maxn], mark_best[maxn], maxmoney[maxn];

void enter()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> S;
    for (int i = 1; i <= n; ++i)
        cin >> t[i];
}

void create_data()
{
    best_cnt = n + 1;
    t_max[n] = t[n];
    for (int i = n - 1; i >= 0; --i)
        t_max[i] = max(t_max[i + 1], t[i]);
}

void update_best_solution()
{
    if (sum == S && cnt < cnt_best)
    {
        cnt_best = cnt;
		
        for (int i = 1; i <= n; ++i)
            mark_best[i] = mark[i];
    }
}

void printf_result()
{

    if (cnt_best == n + 1)
        cout << -1;
    else
    {
        cout << cnt_best << endl;
		
        for (int i = 1; i <= n; ++i)
            if (mark_best[i])
                cout << t[i] << ' ';
    }
}

void branch_and_bound(int i)
{
    if (cnt + (S - sum) / t_max[i + 1] >= cnt_best)
        return;
		
    for (int j = 0; j <= 1; ++j)
    {
        sum = sum + a[i] * j; 
        mark[i] = j;
        cnt += j;
		
        if (i == n) 
            update_best_solution();
        else if (sum <= S) 
            branch_and_bound(i + 1);
        sum -= t[i] * j; 
        cnt -= j;
    }
}

int main()
{
    enter();
    create_data();
    branch_and_bound(1);
    printf_result();
    return 0;
}
