#×を全て消すゲーム
import sys
import numpy as np
import time


#n = int(input())
#a = np.zeros((n,n))
#s = [input() for i in range(n)]
#print(n,s)
#
#import sys

def main(lines):
    # このコードは標準入力と標準出力を用いたサンプルコードです。
    # このコードは好きなように編集・削除してもらって構いません。
    # ---
    # This is a sample code to use stdin and stdout.
    # Edit and remove this code as you like.
    start = time.time()
    num = int(lines[0])
    if num==2:
        print(0)
        return 0
    ban = np.zeros((num,num))
    arr = np.zeros((num,num))
    retu = np.eye(num)
    a = np.zeros((num,num))
    b = np.zeros((num,num))
    a[1:,:-1] = np.eye(num-1)
    b[:-1,1:] = np.eye(num-1)
    retu = retu+a+b


    for i in range(num):
        a = list(lines[i+1])
        ban[i,[k for k, x in enumerate(a) if x == 'x']] = 1

    plist = []
    count = 0
    while (time.time()-start < 1.7):
        x = np.dot(ban,retu)
        print(x)
        if np.max(x)==3:
            amax = np.argmax(x)
            lst = ban[amax//num,:]
            i = 1
            while (amax%5-i)>=0:
                if lst[amax%5-i] == 1:
                    i +=1
                else:
                    break
            j = 1
            while (amax%5+j)<=(num-1):
                if lst[amax%5+j+1] ==1:
                    j+=1
                else:
                    break
            count +=2
            lst.append([amax//5,amax%5-i])
            lst.append([amax//5,amax%5+j])
            break
        y = np.dot(ban.T,retu)
#        if np.max(y)==3:







#    for i, v in enumerate(lines):
#        print("line[{0}]: {1}".format(i, v))

if __name__ == '__main__':
    lines = []
    for l in sys.stdin:
        lines.append(l.rstrip('\r\n'))
    main(lines)