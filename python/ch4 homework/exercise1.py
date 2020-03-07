#2018/9/23
#ch4.流程語法和函式
#找出所有三位數的阿姆斯壯數
def three(x):
    q1=int(x/100)
    x=x%100
    q2=int(x/10)
    x=x%10
    q3=int(x)
    return q1**3+q2**3+q3**3

for i in range(100,1000):
    if (i==three(i)):
        print(i)

