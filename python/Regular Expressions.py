# 2019/1/31
# Regular Expressions / Regex with re
## 最後修訂日期:2019/2/1
'''

Identifiers:  
(特殊字元)

\d  找尋數字
\D  找尋非數字
\s  對應空字元
\S  對應非空字元
\w  對應任何字元 [A-Za-z0-9]
\W  對應任何非字元 [^A-Za-z0-9]
.   任何字元
\b  the whitspace around words
\B  Not the whitspace around words
\.  句號

Modifiers:
(數量詞)

{1,3}  出現次數  至少 1 次  至多 3 次
+    出現 1 次或多次
?    出現 0 次或 1 次
*    出現 0 次或多次
$    在字串的尾端必定要出現的
^    在字串的開端一定要出現的
|    或 OR   [abc|cat]  出現abc 或 cat
[] range of "Variance"   [a-z]  a-z字母都可以出現
{x}   出現 x 次

white spaces characters:
\n  new line
\s  space
\e  escape
\f  form feed
\r  return

Don't forgrt!:
. + * ? [ ] $ ^ ( ) {} | \


'''




import re

exampleString = '''
Jessica is 15 years old, and Daniel is 27 years old.
Edward is 97,and his grandfather, Oscar, is 102.
'''

ages = re.findall(r'\d{1,3}',exampleString)
names = re.findall(r'[A-Z][a-z]*' ,exampleString)

print(ages)
print(names)

ageDict={}
x = 0
for i in names:
    ageDict[i] = ages[x]
    x = x+1
for y in ageDict:
    print('{0} is {1} years old.'.format(y,ageDict[y]))
