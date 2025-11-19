#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;

    int cnt = (n % 2 == 0) ? (n - 1) : n;

    for (int i = 1; i <= cnt; i++)
    {
        cout << (2 * i - 1);
        if (i < cnt)
            cout << ", ";
    }

    return 0;
}