marks = int(input("Enter your marks"))

if marks >= 101:
    print("Invalid Marks")

elif marks <= 0:
    print("Invalid Marks")

elif marks in range(90,100):
    print("A")

elif marks in range(81,90):
    print("B")

elif marks in range(71, 80):
    print("C")

elif marks in range(60, 70):
    print("D")

else:
    print("F")