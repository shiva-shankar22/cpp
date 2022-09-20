class Student:
    name=str()
    roll=str()
    marks=0
    grade=0
    def __init__(self,name : str , r: str , m : int,gd :float) -> None:
        self.name=name
        self.roll=r
        self.marks=m
        self.grade=gd
    def __init__(self) -> None:
        pass
    def display(self):
        print((self.name)+ " " + self.roll+ " "+ str(self.marks))
    def incremnt(self,bonus):
        self.grade+=bonus



n= int(input())
ls=[]
for i in range(n):
    print('enter student details')
    name=input()
    roll=input()
    ob= Student(name,roll,88,8.5)
    ls.append(ob)

for i in ls:
    i.display()

print('enter name to incremenet')
name= input()

for i in ls:
    if i.name==name:
        i.grade+=5.0

for i in ls:
    i.display()