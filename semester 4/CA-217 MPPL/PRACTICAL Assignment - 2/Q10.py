def cal_num(x1):
    upper = 0
    lower = 0
    for i in x1:
        if i >='A' and i <= 'Z':
            upper += 1
        elif i >= 'a' and i <= 'z':
            lower += 1

    print("Upper case: ",upper)
    print("Lower case: ",lower)





x1=input("Enter the upper and lower case:")

cal_num(x1)
