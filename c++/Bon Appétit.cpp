#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n = 0;
    cin >> n;
    int k = 0;
    cin >> k; // Anna will not eat it
    unsigned int bill = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        cin >> temp;
        if (i == k)
        {
            continue;
        }
        else bill += temp;
    }
    unsigned int charged = 0;
    cin >> charged;
    if (charged == (bill / 2))
        printf("Bon Appetit");
    else
        printf("%d",charged - (bill / 2));
}
