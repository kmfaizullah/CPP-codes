import queue
start =2
end=11

li=[]
li1=[]
result=[]
chk=[]
result1=[]
found=None
f=0
exit=0
en=str(end)
l1 = queue.Queue(maxsize=100)
l2 = queue.Queue(maxsize=100)
for val in range(int(start), int(end) + 1):
    if val > 1: 
        for n in range(2, val): 
            if (val % n) == 0: 
                break
        else:
            l1.put(val)
            l2.put(val)
            chk.append(val)
while((found!=end)):
    if (l2.empty()==False):
        srt=l2.get()
        l2.get(srt)
        while((found!=end) and (l1.empty()==False)):
            if(l1.empty()==False):
                value=l1.get()
                #print('result value{} '.format(value))
                result.append(value)
                #print(srt)
                res=value+srt
                if((res<=end) and (res not in li)):
                    l1.put(res)
                    li1.append(str(res)+str(0)+str(srt)+str(0)+str(value))
                    li.append(res)
                    print('value{} has come from {}+{}'.format(res,value,srt))
                found=res
    else:
        print("not possible")
        found=end
z=len(li1)
while((z!=f) and (exit!=1)):
    r=li1.pop()
    r=r.split("0")
    value=r[0]
    parent=r[1]
    come=r[2]
    if((value==en)):
        en=come
        if(parent not in result1):
            result1.append(parent)
        if (int(en) in chk):
            result1.append(come)
            result1.append(parent)
            exit=1 
        en=come
    f=f+1
print('result {}'.format(result1))  