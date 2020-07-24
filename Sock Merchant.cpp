#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, total = 0;
    vector<int> count(101, 0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        cin >> temp;
        count[temp]++;
    }
    for (int i = 0; i < 101; i++)
    {
        total += (count[i] / 2);
    }
    cout << total;
    return 0;
}
