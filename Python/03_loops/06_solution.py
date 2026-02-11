number = int(input("Enter the number \n"))
factorial = 1

#for i in range(1,number+1):
    # factorial *= i

while number > 0:
    factorial *= number
    number -= 1

print(factorial)