#include <bits/stdc++.h>
using namespace std;
#define MxN 1000000

int fac[MxN] = {0};

int main()
{
    int n;
    cin >> n;
    int a[n];
    map<int, int> m;
    int ma = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
        ma = max(ma, a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 2 * a[i]; j < ma + 1; j += a[i])
        {
            fac[j] = 1;
        }
    }
    int ans = n;
    for (int i = 0; i < n; i++)
    {
        if (fac[a[i]] == 1 || m[a[i]] > 1)
        {
            ans--;
        }
    }
    cout << ans;
    return 0;
}
