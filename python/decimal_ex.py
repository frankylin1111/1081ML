## 最後修訂日期:2019/2/1
import sys
import decimal
from decimal import *


n1 = float(sys.argv[1])  # sys.argv[0]
n2 = float(sys.argv[2])  # sys.argv[1]
d1 = decimal.Decimal(sys.argv[1])
d2 = decimal.Decimal(sys.argv[2])


print('#不使用 decimal')
print('{0} + {1} ={2}'.format(n1,n2,n1+n2))
print('{0} - {1} ={2}'.format(n1,n2,n1-n2))
print('{0} * {1} ={2}'.format(n1,n2,n1*n2))
print('{0} / {1} ={2}'.format(n1,n2,n1/n2))

print('\n#使用 decimal')
print('{0} + {1} ={2}'.format(d1,d2,d1+d2))
print('{0} - {1} ={2}'.format(d1,d2,d1-d2))
print('{0} * {1} ={2}'.format(d1,d2,d1*d2))
print('{0} / {1} ={2}'.format(d1,d2,d1/d2))
