## 2019/1/28
## basic python -using urllib module first
## urllib module — URL handling modules
## urllib module - basic tools
## 最後修訂日期:2019/2/1
import urllib.request
import urllib.parse

#x = urllib.request.urlopen('https://www.google.com')
#print(x.read())

'''
url = 'https://pythonprogramming.net'
values = {'s':'basic',
          'sumbit':'search'}

data = urllib.parse.urlencode(values)
data = data.encode('utf-8')
req = urllib.request.Request(url,data)
resp = urllib.request.urlopen(req)
respData = resp.read()

print(respData)
'''


## 檢查錯誤
try:
    x = urllib.request.urlopen('https://www.google.com/search?q=test')
    print(x.read())
except Exception as e:
    print(str(e))   ##列印錯誤訊息

## 檢查錯誤
try:
    url = 'https://www.google.com/search?q=test'
    headers = {}
    headers['User-Agent'] = 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/71.0.3578.98 Safari/537.36'
    req = urllib.request.Request(url,headers=headers)
    resp = urllib.request.urlopen(req)
    respData = resp.read()


    saveFile = open('withHeaders.txt','w')
    saveFile.write(str(respData))  ##  將網頁中擷取的訊息儲存至檔案中
    saveFile.close()

except Exception as e:
    print(str(e))    ##列印錯誤訊息
