n=int(input())
for i in range(n):
    s=input()
    a=s[0]
    b=s[1:]
    for j in range(1,len(s)):
        if ord(s[j])<ord(a):
            a=s[j]
            b=s[:j]+s[j+1:]
    print(a,b)
    