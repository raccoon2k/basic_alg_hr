n = int(input())
queries = [list(map(int, input().split())) for i in range(n)]
for i in queries:
    comp = abs(i[0]-i[2]) - abs(i[1]-i[2])
    if comp == 0:
        print("Mouse C")
    elif comp > 0:
        print("Cat B")
    else:
        print("Cat A")
