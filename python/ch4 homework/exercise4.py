#2018/9/23
#ch4.流程語法和函式

import math

for i in range(1,11):
    for j in range(1,11):
        k=math.sqrt(i**2+j**2)
        if ((i+j+k)==24):
            print (i,"  ",j,"  ",int(k))
            break
    if ((i+j+k)==24):
            break    
    
    

    

    
    
    
    
    
