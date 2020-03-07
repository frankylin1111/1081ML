#2018/9/23
#CH3.型態與運算子
#set()集合內的元素必須是 hashable  且 不重複
#set()是無排序集合
import sys

s=set(sys.argv[1:])
q=0
for i in s:
    q=q+1


print("有%d個不重複字串:" % (q),s)




