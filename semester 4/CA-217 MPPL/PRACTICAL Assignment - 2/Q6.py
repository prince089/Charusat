def en(n1,n2):
    if (n1 % 2 == 0):
        print(n1, "Is Even")
    else:
        print (n1, "Is odd")
    if (n2 % 2 == 0):
        print (n2, "IS Even")
    else:
        print (n2, "Is a odd")
        print(max (n1, n2), "It is Max")
        print(min(n1, n2), "It is Min")
n1 = int(input("Enter the Number 1:"))
n2= int(input("Enter the Number 2:"))
en(n1, n2)
