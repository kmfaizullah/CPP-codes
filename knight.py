import queue 

print("enter start and destination point: \n")
number = input()


row =['1','2','3','4','5','6','7','8']
col=['a','b','c','d','e','f','g','h']

start=number[0]+number[1]#get the startting node
final=number[3]+number[4]#get end node
found=None#global variable for condition check
L1 = queue.Queue(maxsize=100) # queue for bredth fast search

L1.put(start) # starting point putting into queue
li=[] # list for getting shortest path
result=[]#list for storing result
while(found!=final):
    if(L1.empty()==False):
        s= L1.get() #dequeue element from ques
        f_idx=col.index(s[0]) #getting index of column element
        l_idx=row.index(s[1]) #getting index of row element
        #knight can have eight possible move for this we have eight condition for each position
        move_1= (f_idx+2,l_idx+1) #first move
        if((move_1[0]>=0 and move_1[0]<8)and (move_1[1]>=0 and move_1[1]<8) and (found!=final) ):
            r1=col[move_1[0]]+row[move_1[1]] # concateining both row and col for further operation
            found=r1
            if ((r1 not in L1.queue)):
                L1.put(r1)
                li.append(r1+s)
        move_2= (f_idx+2,l_idx-1)#second move
        if((move_2[0]>=0 and move_2[0]<8)and (move_2[1]>=0 and move_2[1]<8)and (found!=final) ):
            r2=col[move_2[0]]+row[move_2[1]]
            found=r2
            if ((r2 not in L1.queue)):
                L1.put(r2)
                li.append(r2+s)
        move_3= (f_idx-2,l_idx+1)#third move
        if((move_3[0]>=0 and move_3[0]<8)and (move_3[1]>=0 and move_3[1]<8)and (found!=final) ):
            r3=col[move_3[0]]+row[move_3[1]]
            found=r3
            if ((r3 not in L1.queue)):
                li.append(r3+s)
                L1.put(r3)
        move_4= (f_idx-2,l_idx-1)#fourth move
        if((move_4[0]>=0 and move_4[0]<8)and (move_4[1]>=0 and move_4[1]<8)and (found!=final) ):
            r4=col[move_4[0]]+row[move_4[1]]
            found=r4
            if ((r4 not in L1.queue)):
                li.append(r4+s)
                L1.put(r4)
        move_5= (f_idx+1,l_idx+2)#five move
        if((move_5[0]>=0 and move_5[0]<8)and (move_5[1]>=0 and move_5[1]<8)and (found!=final) ):
            r5=col[move_5[0]]+row[move_5[1]]
            found=r5
            if ((r5 not in L1.queue)):
                L1.put(r5)
                li.append(r5+s)
        move_6= (f_idx+1,l_idx-2)#six move
        if((move_6[0]>=0 and move_6[0]<8)and (move_6[1]>=0 and move_6[1]<8)and (found!=final) ):
            r6=col[move_6[0]]+row[move_6[1]]
            found = r6
            if ((r6 not in L1.queue)):
                L1.put(r6)
                li.append(r6+s)
        move_7= (f_idx-1,l_idx+2)#seven move
        if((move_7[0]>=0 and move_7[0]<8)and (move_7[1]>=0 and move_7[1]<8)and (found!=final) ):
            r7=col[move_7[0]]+row[move_7[1]]
            found=r7
            if ((r7 not in L1.queue)):
                L1.put(r7)
                li.append(r7+s)
        move_8= (f_idx-1,l_idx-2)#eight move
        if((move_8[0]>=0 and move_8[0]<8)and (move_8[1]>=0 and move_8[1]<8)and (found!=final) ):
            r8=col[move_8[0]]+row[move_8[1]]
            found=r8
            if ((r8 not in L1.queue)):
                L1.put(r8)
                li.append(r8+s)
#finding shortest way from all possible path
p=0
k=len(li)#we have this number path
result.append(final)
while(p!=k):
    z=li[k-1]
    k=k-1
    child= z[0]+z[1]
    parent= z[2]+z[3]
    if(child==final):
        ancestor=parent
        if ancestor not in result:
            result.append(ancestor)
        final=parent
result.reverse()
print('shortest path is {} '.format(result))