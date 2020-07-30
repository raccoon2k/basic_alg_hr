ori_arr = [[[0]*3]*3] * 8

ori_arr[0] = [[8, 1, 6], [3, 5, 7], [4, 9, 2]]
ori_arr[1] = [[6, 1, 8], [7, 5, 3], [2, 9, 4]]
ori_arr[2] = [[4, 9, 2], [3, 5, 7], [8, 1, 6]]
ori_arr[3] = [[2, 9, 4], [7, 5, 3], [6, 1, 8]]
ori_arr[4] = [[8, 3, 4], [1, 5, 9], [6, 7, 2]]
ori_arr[5] = [[4, 3, 8], [9, 5, 1], [2, 7, 6]]
ori_arr[6] = [[6, 7, 2], [1, 5, 9], [8, 3, 4]]
ori_arr[7] = [[2, 7, 6], [9, 5, 1], [4, 3, 8]]

arr = [list(map(int, input().split())) for _ in range(3)]
check = []
fee  = 0
for _ in ori_arr:
    for i in range(3):
        for j in range(3):
            if _[i][j] != arr[i][j]:
                fee += abs(_[i][j] - arr[i][j])
    check.append(fee)
    fee = 0
print(min(check))
