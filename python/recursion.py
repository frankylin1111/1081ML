#2018/9/23
#遞迴:輾轉相除法
#心得:  使用兩種不同的函數 , 內容不相同
#gcd 在數學上是用來取最大公因數

def gcd1(x1,x2):
	s=0
	while (x1!=0):
		if (x2==0):
			break
		s=x1%x2
		x1=x2
		x2=s
	return x1

def gcd2(x1,x2):
	if (x2==0):
		return x1
	else:
		return gcd2(x2,x1%x2)


print(gcd1(12,45))
print(gcd2(8,78))
