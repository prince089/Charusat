class str1:
    def __init__(self,s1):
        self.s1=s1
    def lower(self):
        if ((self.s1).islower()):
            print((self.s1).upper())
        else:
            print("This String is Upper")
    def upper(self):
        if ((self.s1).isupper()):
            print((self.s1).lower())
        else:
            print("This String is lower")
    def title(self):
        print((self.s1).title())
    def reverse(self):
        print((self.s1)[::-1])
             




print("1.If string is in lower case then write a decorator to convert it into upper case.")
print("2.If string is in upper case then write a decorator to convert it into lower case.")
print("3.Write a decorator to convert a string into title case.")
print("4.Write a decorator to convert a reverse string.")
ch=0
while(ch<5):
    s1=input("Enter the String:")
    ob=str1(s1)
    ch=int(input("Enter the number of What you want:"))
    if(ch==1):
        ob.lower()
    elif(ch==2):
        ob.upper()
    elif(ch==3):
        ob.title()
    elif(ch==4):
        ob.reverse()
    else:
        exit
    
        








