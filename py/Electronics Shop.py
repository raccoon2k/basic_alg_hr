total, usb, keybroad = map(int, input().split())
goods = [list(map(int, input().split())) for _ in range(2)]
result = -1
for i in goods[0]:
    for j in goods[1]:
        sum = i + j
        if sum > result and sum <= total:
            result = sum
print(result)
