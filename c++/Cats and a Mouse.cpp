#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 0;
    cin >> n;
    while (n > 0)
    {
        int cata, catb, mouse;
        cin >> cata >> catb >> mouse;
        string s = (abs(cata - mouse) < abs(catb - mouse)) ? "Cat A" : (abs(cata - mouse) == abs(catb - mouse)) ? "Mouse C" : "Cat B";
        cout << s << endl;
        n--;
    }

    return 0;
}
