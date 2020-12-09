import time

fseconds=time.time()
sec=int(fseconds)

min=(sec//60)%60
hour=((sec//60)//60)%24


print("현재시간(영국 그리니치 시각): "+str(hour+9) +"시"+str(min)+"분")
