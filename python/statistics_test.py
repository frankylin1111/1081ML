## 最後修訂日期:2019/2/1
import statistics as s

example_list = [4,6,2,6,7,8,2,5,6,8,4,6,7,2,2]

x = s.mean(example_list)  ## 計算平均值
y = s.variance(example_list)  ## 計算變異數
z = s.stdev(example_list)  ## 計算標準差

print(x)
print(y)
print(z)
