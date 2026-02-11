pet_species = input("Enter the pet species \n").lower()
pet_age = int(input("Enter the pet age \n"))

if pet_species == "dog":
    if pet_age < 2:
        print("You have to give puppy food")
    else:
        print("You have to give adult dog food")

elif pet_species == "cat":
    if pet_age < 5:
        print("You have to give kitten food")
    else:
        print("You have to give adult cat food")
