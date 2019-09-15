import  numpy as np
x = np.asarray([[0,0,0],[0,0,0],[255,255,255]])
np.where(x == [0,128,128],[64,64,64],x)
