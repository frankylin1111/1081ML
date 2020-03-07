# 2019/1/28
#! python 3
# matIt.py - Launches a map in the browser using a address from the
# command line or clipboard
## 目標:  從google Map 搜尋地址
## 最後修訂日期:2019/2/1

import webbrowser,sys ,pyperclip
if len(sys.argv)>1:
    #Get address from the command line 
    address = ' '.join(sys.argv[1:])

else:
    #Get address from clipboard.
    address = pyperclip.paste()

webbrowser.open('https://www.google.com/maps/place/'+address)

