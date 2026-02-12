def summ_all(*args):
    print(args)
    for i in args:
        print(i*2)
    return sum(args)

print(summ_all(1,2,3,4,5,6,7,8,9,10))
#print(summ_all(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20))
#print(summ_all(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30))


# *ARGS IT TAKES MULTIPLE ARGUMENTS OR A PARAMERTER IN INPUTS