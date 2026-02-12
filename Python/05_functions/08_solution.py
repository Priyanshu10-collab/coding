def print_kwargs(**kwargs):
    for key , value in kwargs.items():
        print(f"{key}: {value}")

# def print_kwargs(name, power):
#     print("Name:-",name,"Power:-", power)

print_kwargs(name= "Superman", power=  100)
print_kwargs(power = 100, name = "Superman")
print_kwargs(name = "Superman")
print_kwargs(name = "Superman", power = 100, enemy = "Dr.Jackaal")