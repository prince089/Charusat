def in_range (max,min,number):
    if (number > min and number < max):
        print("In Range :-")
    else:
        print("Not in Range :-")

max=int(input("Enter Max No. :-"))
min= int(input("Enter Min No. :- "))
number = int(input("Enter No. to find :- "))

in_range (max,min,number)
