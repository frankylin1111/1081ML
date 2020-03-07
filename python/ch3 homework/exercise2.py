

#CH3.型態與運算子
import sys

s=sys.argv[1]

a=sys.argv[2:]
q=1
for i in a:
    if (s==i):
        q=q+1

print (s," 出現了%d次"%(q))
