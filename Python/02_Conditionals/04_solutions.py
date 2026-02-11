fruit = input("Enter the fruit name").lower()
fruitColor = input("Enter the color of the fruit").lower()

if(fruit == "banana"):
    if(fruitColor == "green"):
        print("You have unriped banana")
    elif(fruitColor == "yellow"):
        print("You have ripe banana")
    elif(fruitColor == "brown"):
        print("You have overripe banana")
