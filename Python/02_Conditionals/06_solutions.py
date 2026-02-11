dist = int(input("Enter the distance"))

if dist < 3 :
    print("You should walk")

elif dist in range(3,15):
    print("You should drive a bike")

elif dist > 15:
    print("You should drive a car")