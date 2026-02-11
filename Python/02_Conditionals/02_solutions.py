age = int(input("Enter your age"))
Day = input("Enter Day").lower()

if age in range(18 , 50):
    if Day == "wednesday":
        print("Your Ticket Price is $10")
    else:
        print("Your Ticket Price is $12")

elif age < 18:
    if Day == "wednesday":
        print("Your Ticket Price is $6")
    else:
        print("Your Ticket Price is $8")
