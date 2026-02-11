password = input("enter the your password").lower()
length = len(password)

if length < 6:
    print("Your password is weak")

elif length in range(6,10):
    print("your password is medium")

elif length > 10 :
    print("your password is strong")