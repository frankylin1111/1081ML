## 2019/1/20:
## Excel CSV的檔案輸出
## 最後修訂日期:2019/2/1
## 目標: 從excel檔裡面抓資料,輸出某個人擁有的蘋果.
import csv

with open('example.csv') as csvfile:
    readCSV = csv.reader(csvfile,delimiter=',')
    ##print(readCSV)

    number=[]
    name=[]
    name1 = "Hello World"
    for row in readCSV:
        ##print(row)
        ##print(row[0])
        ##print(row[0],row[1],sep="\n")
        number.append(row[1])
        name.append(row[2])

    print(number)
    print(name)
    print(name1[1:])



    
    ## 是一個可以檢測"程式區塊"裡面是否有錯誤的行,若有錯誤則丟出 except Exception
    ## as e:  print(e)
    ## 可以是各種錯誤:
    
    ## 例如:
    ## which people do you want to ask? David
    ## name 'thenumex' is not defined
    try:
        
        thename = input("which people do you want to ask? ")
        if thename in name:
            thenumex = name.index(thename[0].upper()+thename[1:].lower())
            thenum = number[thenumex]
            print(thename,"have ",thenum,"apples")
        else:
            print('Name is not found,or is not a name!')
    except Exception as e:
        print (e)

    print('continuing')

