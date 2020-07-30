#include <bits/stdc++.h>
using namespace std;

const int orr_arr[8][3][3] = {
    {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
    {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
    {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
    {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
    {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
    {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
    {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
    {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},
};

int main(int argc, char const *argv[])
{
    int arr[3][3];
    int fee = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> arr[i][j];

    int min = INT_MAX;
    for (int i = 0; i < 8; i++)
    {
        fee = 0;
        for (int j = 0; j < 3; j++)
            for (int k = 0; k < 3; k++)
                if (arr[j][k] != orr_arr[i][j][k])
                    fee += abs(arr[j][k] - orr_arr[i][j][k]);

        if (min > fee)
            min = fee;
        fee = 0;
    }
}
