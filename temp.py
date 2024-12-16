t=int(input())
results=[]    
for _ in range(t):
    count=0
    n=int(input())
    A=list(map(int,input().split()))
    i=n
    half_sum=(sum(A)-(A[n-1]+A[n-2]))
    count=count+(A[n-1]-(A[n-2]-(half_sum)))
    results.append(count)
for result in results:
    print(result)