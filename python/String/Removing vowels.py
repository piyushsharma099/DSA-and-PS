s1=input("enter the string :- ")
s2=" "
c=0
for i in range(len(s1)):
    if s1[i] not in ("a","i","o","u","e","A","I","O","U","E"):
        s2=s2+s1[i]
print(s2)