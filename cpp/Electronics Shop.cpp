#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int balance = 0;
    int n, m = 0;
    int max = -1;
    cin >> balance >> n >> m;
    int keybroad[n];
    int usb[m];
    for (int i = 0; i < n; i++)
        cin >> keybroad[i];
    for (int i = 0; i < m; i++)
        cin >> usb[i];
    for (int i : keybroad)
        for (int j : usb)
        {
            int temp = i + j;
            if (temp > balance)
                continue;
            if (max <= temp)
                max = temp;
        }
    cout << max;
    return 0;
}
