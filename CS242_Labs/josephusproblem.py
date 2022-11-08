import string

n=int(input("The number of people standing in the circle:"))
k=int(input("the skip number of people:"))
if(k<0):
    print("Invalid Input,Skip Number cannot be negative")
    exit()

if(n<0):
    print("Invalid Input,Number of People cannot be negative")
    exit()
testlist=[]
for i in range(0, n):
    testlist.append(i)
killer=0 
if(k!=0):
    while(len(testlist)!=1):
        tempvalue=killer
        killer=(killer + k)%(len(testlist))
        print(chr(testlist[tempvalue]+65)," kills ",chr(testlist[killer]+65)) 
        testlist.pop(killer)
        killer=killer%(len(testlist))

if(k==0):
    while(len(testlist)!=0):
        tempvalue=killer
        killer=(killer + k)%(len(testlist))
        print(chr(testlist[tempvalue]+65)," kills ",chr(testlist[killer]+65)) 
        testlist.pop(killer)
        killer=killer%(len(testlist))
if(k!=0):
    print("survivor: ",chr(testlist[0]+65))