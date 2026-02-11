number = int(input("Enter the number \n"))

for i in range (1,11):
    if i == 5 :
        continue
    print(number, "X" , i , "=" , number*i)

