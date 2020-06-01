#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int k = n;
    long long int ans = 0;
    for (int i = 2; i <= 1000010; i++)
    {
        int curr = 0;
        while (n % i == 0)
        {
            curr++;
            n /= i;
        }
        for (int j = 1; j < 10000; j++)
        {
            if (curr < j)
                break;
            ans++;
            curr -= j;
        }
    }
    if (n > 1)
        ans++;
    cout << ans << endl;
    return 0;
}