#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    string s;
    int n = 0, local = 0, valley = 0;
    cin >> n;
    cin.ignore();
    getline(cin, s);
    for (char i : s)
    {
        if (i == 'U')
        {
            local++;
            if (local == 0)
                valley++;
        }
        else
            local--;
    }
    cout << valley;
    return 0;
}
