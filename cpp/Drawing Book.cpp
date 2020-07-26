#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, m, t = 1, s = 0, c1 = 0, c2 = 0;
    cin >> n >> m;
    s = n;
    //1
    for (int i = 0; i < n; i++)
    {
        if (t >= m)
        {
            c1 = i;
            break;
        }
        t += 2;
    }
    //2
    if (n % 2 != 0)
        s -= 1;
    for (int i = 0; i < n; i++)
    {
        if (s <= m)
        {
            c2 = i;
            break;
        }
        s -= 2;
    }
    int min = (c1 <= c2) ? c1 : c2;
    cout << min;
    return 0;
}
