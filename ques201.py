# this is question no 201 from srm elab pyhton
#level 3 of input and output

l = list(map(int , input().split(',')))
d = l[1]-l[0]
wt = int(input())
t = l[0]+ (wt-1)*d
print(t)
