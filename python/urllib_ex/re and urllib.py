##  2019/2/1
##  Parsing Websites with re and urllib
##  把 Regular Express  和  網頁擷取  結合
##  目標:  擷取指定網頁中的段落.

import urllib.request
import urllib.parse
import re


url = 'https://pythonprogramming.net'
values = {'s':'basic',
          'sumbit':'search'}

data = urllib.parse.urlencode(values)
data = data.encode('utf-8')
req = urllib.request.Request(url,data)
resp = urllib.request.urlopen(req)
respData = resp.read()

print(respData)


##  r'<p>(.*?)</p>'  必須是( ) 若沒有的話 會印出<p>.....</p>
##  若有的話 會印出內容 ....
paragraphs = re.findall(r'<p>(.*?)</p>',str(respData))

for eachP in paragraphs:
    print(eachP)
