n = int(input())
sock_list = list(map(int, input().split()))
total_pair = 0
for _ in set(sock_list):
    total_pair+=(sock_list.count(_)//2)
print(total_pair)