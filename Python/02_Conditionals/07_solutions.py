order_size = input("Enter the order size \n").lower()
extra_shot = input("You want to add extra shot? Enter True or False \n").lower()

if order_size == "small":
    if extra_shot == "true":
        print("You have to pay $10")
    else:
        print("You have to pay $8")

elif order_size == "medium":
    if extra_shot == "true":
        print("You have to pay $12")
    else:
        print("You have to pay $10")

elif order_size == "large":
    if extra_shot == "true":
        print("You have to pay $15")
    else:
        print("You have to pay $12")
