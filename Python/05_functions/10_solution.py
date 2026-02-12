#Approach 1
def fac(number):
    factorial = 1
    for i in range(1,number+1):
        factorial *= i
    return factorial


def factorial(number):
    if number == 1:
        return 1
    else:
        return number * factorial(number - 1)



print(factorial(5))