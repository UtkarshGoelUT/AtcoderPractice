#include <bits/stdc++.h>
using namespace std;

const long long int inf = 1000000000000000000;

int main()
{
    int n;
    cin >> n;
    long long int ans = 1;
    long long int prev;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            cout << 0 << endl;
            return 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        prev = ans;
        if (inf / ans < a[i] || ans < 0 || ans > inf)
        {
            cout << -1 << endl;
            return 0;
        }
        ans *= a[i];
    }
    cout << ans << endl;
    return 0;
}
