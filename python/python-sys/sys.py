## 2018/1/20
## system Module
## 最後修訂日期:2019/2/1

import sys
##sys.stderr.write('This is a stderr text\n')
##sys.stderr.flush()
##sys.stdout.write('This is a stdout text\n')
##
##print(sys.argv)


##if len(sys.argv) > 1:
##    print(float(sys.argv[1])+5)

def main(arg):
    print(arg)

## 必須在cmd裡執行
## python sys.py Hello  或  sys.py Hello
## 印出 Hello 字串
main(sys.argv[1])
