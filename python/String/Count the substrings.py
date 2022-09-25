s1=input("enter the string :- ")
s2=input("enter the substring :- ")
x=s1.split()
c=0
for i in x:
    if(i==s2):
        c+=1
if(c>0):
    print(s2," appears ",c," times")
else:
    print("substring do not found")