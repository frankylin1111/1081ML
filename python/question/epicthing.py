## 最後修訂日期:2019/2/1
def epic():
    print('wow this is a great module!')

if __name__ == '__main__':       ##當__name__ == '__main__'在原本檔案直接被運行時
    print('such a good module!') ##,if 以下的code會執行,若是在其他檔案運行時,
                                 ## if 以下的code不會執行
