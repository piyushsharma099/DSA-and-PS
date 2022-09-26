s1=input("enter the string :- ")
x=s1.split()
max_l=0
max=" "
for i in x:
    if(len(i)>max_l):
        max=i
print("Longest Substring is '",i,"' with length '",len(i),"' ")