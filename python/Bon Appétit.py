n, k = map(int, input().split())
prices = list(map(int, input().split()))
balance = int(input())
total = int((sum(prices) - prices[k]) / 2)
if balance == total:
    print('Bon Appetit')
else:
    print(balance - total)
