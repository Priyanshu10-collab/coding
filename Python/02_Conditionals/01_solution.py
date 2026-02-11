age = int(input("Enter your age"))

if age < 13 :
    print("You are a child")

elif age in range(13 ,19):
    print("You are a Teenager")

elif age in range(20,59):
    print("You are a Adult")

else:
    print("Your are a senior")

