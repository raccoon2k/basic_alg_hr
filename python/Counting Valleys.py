n = int(input())
line = input()
hight, valley = 0, 0
for i in line:
    if i == 'U':
        hight += 1
        if hight == 0:
            valley += 1
    else:
        hight -= 1
print(valley)
