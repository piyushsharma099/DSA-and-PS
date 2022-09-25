from googletrans import Translator
t=Translator()
a=input("Enter the statement :- ")
result=t.t(a,dest='hi')
print(result.text)