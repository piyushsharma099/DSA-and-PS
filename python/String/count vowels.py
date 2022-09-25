s=input("enter the string :- ")
c=0
for i in s:
    if i in ("a","i","o","u","e","A","I","O","U","E"):
        c=c+1
print(c)