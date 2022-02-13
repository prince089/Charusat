class Student:
    def __init__(self,name,city):
        self.name=name
        self.city=city
    def viewDetails(self):
        print("Name is :-",self.name)
        print("Name is :-",self.city)
        
class Result(Student):
    def __init__(self,nm,c,mar1,mar2,mar3):
        Student. __init__(self,nm,c)
        self.mar1=mar1
        self.mar2=mar2
        self.mar3=mar3
    def getResult(self):
        total=mar1+mar2+mar3
        percentage=(total/3)
        if(percentage>=70 and percentage<=100):
            print("A Grade")
        elif(percentage>=60 and percentage<=70):
            print("B Grade")
        elif(percentage>=50 and percentage<=60):
            print("C Grade")
        else:
            print("Improvement Needed")
    def viewDetails(self):
        print("Name is :-",self.name)
        print("Name is :-",self.city)
        print("Name is :-",self.mar1)
        print("Name is :-",self.mar2)
        print("Name is :-",self.mar3)
nm=input("Enter Student Name :- ")
c=input("Enter City :-")
mar1=int(input("Enter Marks 1 :- "))
mar2=int(input("Enter Marks 2 :- "))
mar3=int(input("Enter Marks 3 :- "))
stud1=Result(nm,c,mar1,mar2,mar3)
stud1.getResult()
stud1.viewDetails()

        
    
