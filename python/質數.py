import math
x=int (input("請輸入1個整數:"))
total=0
s1=[]

for i in range(int (math.sqrt(x))+1,x+1):
    s1.append(i)

for a  in range(2,int (math.sqrt(x))+1):
    q=2
    find= 1
    while(a>q):
        if (a%q==0):
            find=0
            break
        else:
            if (q==2):
                q=q+1
            else:
                    q=q+2
    if (find==1):
        total=total+1
        print (a)
        for j in s1:
            if (j%a==0):
                s1.remove(j)
                

for k in s1:
    total=total+1
    print (k)

print ("共有:%d個"%(total))



