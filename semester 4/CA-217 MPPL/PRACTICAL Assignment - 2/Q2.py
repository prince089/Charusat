def alternet(list1):
    if list1[0] > list1[1]:
        for i in range(1, len(list1)-1):
            if (i + 1) % 2:
                if (listi[i+l] < list[i] and list1[i-1] < list1[i]):
                    pass
                else:
                    print("False")
                    return
            else:
                    if (list1[i+1] > list1[i] and list1[i-1] >listl[i]):
                              pass
                    else:
                        print("False")
                        return
                    if list1[0] < list1[1]:
                        for i in range (1, len(list1)-1):
                            if (i + 1) % 2:
                                if (list1[i+1] > list1[i] and list1[i-1] > list1[i]):
                                    pass
                                else:
                                    print("False")
                                    return
                            else:
                                if (list1[i+1] < list1[i] and list1[i-1] < list1[i]):
                                    pass
                                else:
                                    print("False")
                                    return
                    if(list1[0] ==list1[1]):
                        print("False")
                        return
                    print("True")

list1=[-33,-10,-55,-41,-14]
alternet(list1)
