#include <bits/stdc++.h>
using namespace std;

void Sqrt(int n)
{
    int low = 0;
    int high = n;
    int ans = 0;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (mid * mid <= n)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << ans << endl;
}

int main()
{
    int n;
    cin >> n;

    Sqrt(n);

    return 0;
}