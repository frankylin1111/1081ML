## 2018/1/20:
## os Module
## 系統模組
## 最後修訂日期:2019/2/1
import os

curDir = os.getcwd()  ##系統指定的位址
print(curDir)

os.mkdir('newDir')  ## 新建一個檔案

import time

time.sleep(2)  ## wait 2 second

os.rename('newDir','newDir2')  ## 重新命名檔案
time.sleep(2)  ## wait 2 second
