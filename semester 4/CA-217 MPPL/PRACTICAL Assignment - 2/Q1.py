def descending(l1):
    for i in range(0,len(l1)-1):
        if l1[i] < l1[i+1]:
            c=0
            break
        else:
            c=1
    if c:
        print("True")
    else:
        print("False")

l1=[9,8,7,6,5,4]

descending(l1)
