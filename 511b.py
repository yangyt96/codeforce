L = int(input())


max_L = 0
for l in range(L):
    
    xy = list(map(int, input().split()))
    z = sum(xy)
    if z > max_L:
        max_L = z

print(max_L)