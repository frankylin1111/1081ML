import math

##def is_sqr(x):
##  return math.sqrt(x) % 1 == 0 

tmplist = filter(lambda x:math.sqrt(x) % 1 == 0,range(101))

newlist = list (tmplist)
print(newlist)
print (13.45 % 1)  #小數點取餘數
print(1345 %1)  #整數取餘數
print(1345.0 %1)  #浮點數取餘數

