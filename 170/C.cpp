#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;
    int a[n];
    int ans = INT_MAX;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }
    int i = 0;
    while (1)
    {
        if (m[x - i] == 0)
        {
            ans = x - i;
            break;
        }
        else if (m[x + i] == 0)
        {
            ans = x + i;
            break;
        }
        i++;
    }
    cout << ans;
    return 0;
}
