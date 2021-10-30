
s=input()
a=0
pal=lambda x:x==x[::-1]
if (pal(s) and len(s)%2==0): print("NO");exit()
for i in range(len(s)):
    x=s[::-1]
    if pal(s[:i]+x[i]+s[i+1:])==1:
        a=i
        break
    if (i==len(s)-1): a=len(s)

print("YES" if a<len(s) else "NO")
