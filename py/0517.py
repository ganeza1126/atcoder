import sys
import numpy as np
import sympy



#i = list(map(int, input().split()))
#a = i[0]
#b = i[1]
#h = i[2]
#m = i[3]
a,b,h,m = 3,4,10,40
#ths = np.pi/2-(np.pi * time/(60.0*12.0))
#thl = np.pi/2-(np.pi * m/30.0)
time = float(h*60.0+m)
th = np.abs(sympy.pi.evalf(25)*(time-24.0*m)/(60.0*12)).astype('float64')
print('{:.20f}'.format(np.sqrt(a**2+b**2-2*np.cos(th)*a*b)))
#ths = np.deg2rad(90-h*30.0)
#thl = np.deg2rad(90-m*6.0)
#x1 = a*np.cos(ths)
#y1 = a*np.sin(ths)
#x2 = b*np.cos(thl)
#y2 = b*np.sin(thl)
#print(np.sqrt((x1-x2)**2+(y1-y2)**2))



#lines = sys.stdin.readlines()
#a = int(lines[0].strip())
#b = lines[1].strip()
#
#if a >= len(b):
#  print(b)
#else:
#  print(''.join(list(b)[:a])+'...')


#lines = sys.stdin.readlines()
#a = int(lines[0].strip())
#if a%10 == 3:
#  print('bon')
#elif a%10 in [0,1,6,8]:
#  print('pon')
#else:
#  print('hon')