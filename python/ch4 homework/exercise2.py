#2018/9/23
#ch4.流程語言語函式
#遞迴:費氏數列
def feb(x):
    if (x==0):
        return x
    elif (x==1):
        return x
    else:
        return feb(x-1)+feb(x-2)
want = int(input("求幾個費式數列?"))

for i in range(0,want):
    print(feb(i),end=" ")
