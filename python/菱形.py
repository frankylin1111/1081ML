p = int(input("請輸入奇數(最高上限為21):"))

for i in range(0,p):
    n = i
    if i>((p-1)/2):
        n=((p-1))-n
    for j in range(1,p+1,1):
        if abs(j-((p+1)/2)) == n:
            print("*",end="") #endl="" 不換行
        else:
            print(". ",end="")
    print('\n') # '\n' 換行


print ("這是一個%dX%d的菱形!"%(p,p))
