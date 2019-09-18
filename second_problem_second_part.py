import queue
import math
print("enter first and second number: ")
number=input()

k = number.split(" ")
end= int(k[1])

li=[2,3,5,7,11,13,17,19]
weight=[4,6,5,10,14,7,12,15]
end1=len(li)-1
#end=15
result=[]
parents=[]
val = math.inf
for i in range(len(li)):
    fi=li[0]
    p=i+1
    count=0
    while(count<=end1):
        k=p*li[count]
        v=p*weight[count]
        count=count+1
        for z,zi in enumerate(li):
            res=k+zi
            parents.append((res,k,zi))
            #print('value {} has come from parents {} + {}'.format(res,k,zi))
            value=v+weight[z]
            if(res==end) and (value<val):
                val=value
                result.append((k,zi))
                #print('result {}, parent {}, value {}'.format(res,(k,zi),val))
if(val==math.inf):
    print("Not possible")
else:
    print("result is : {} and parent is: {}".format(val,(result.pop())))
