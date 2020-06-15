#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, ans;
    for (int i = 1; i <= 5; i++)
    {
        cin >> x;
        if (x == 0)
        {
            ans = i;
        }
    }
    cout << ans;
    return 0;
}
