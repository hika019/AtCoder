n = int(input())
s = list(map(int, input().split()))
t = list(map(int, input().split()))

ans = t
start_index = t.index(min(t))
for i in range(n):

    
    next_index = (start_index+1)%n
    ans[next_index] = min(s[start_index]+t[start_index], ans[next_index])
    ans[next_index] = min(s[next_index]+t[next_index], ans[next_index])
    
    start_index = (start_index+1)%n

for i in ans:
    print(i)
