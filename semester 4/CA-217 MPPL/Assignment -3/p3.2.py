class oddplaincheck:
    def __init(self,a):
        self.a=a
    def oddeven(self):
        if(self.a%2==0):
            print("It is even :-",self.a)
        else:
            print("It is odd :- ",self.a)
    def palindrome(self):
        t=self.a
        r=0

        while(self.a>0):
            d=self.a%10
            r=r*10+d
            self.a=self.a //10
        if(t==r):
            print("It is palindrome no. :-")
        else:
            print("It is not a palindrome no. :-")
obj1.oddplaincheck(121)
obj1.oddeven()
obj1.palindrome()
                  







