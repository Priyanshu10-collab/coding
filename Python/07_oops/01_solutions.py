#Question 01
class Car:
    total_car = 0
    def __init__(self,brand,Model):
        self.__brand = brand
        self.__model = Model
        Car.total_car += 1

    def get_brand(self):
        return "(self.__brand !"

#Question 02
    def fullName(self):
        return f"{self.__brand} {self.__model}"

    def FuelType(self):
        return "Petrol or Diesel"

    @staticmethod
    def general_description():
        return "Car are means of transport"

    @property
    def brand(self):
        return self.__brand


class Battery:
    def battery_info(self):
        return "Battery info"

class Engine:
    def engine_info(self):
        return "Engine info"

class ElectricCarTwo(Battery,Engine,Car):
    pass
#Question 03
class ElectricCar(Car):
    def __init__(self,brand,model,battery_size,range):
        super().__init__(brand,model)
        self.battery_size = battery_size
        self.range = range

    def FuelType(self):
        return "Electric Charge"



#Question 06
print(Car.general_description())
my_new_tesla = ElectricCarTwo("Tesla","s")
print(my_new_tesla.battery_info())
print(my_new_tesla.engine_info())








#Questions 05 : Polymorphism
# safari = Car("Tata", "safari")
# print(safari.FuelType())
# Punch = ElectricCar("Tata", "Punch", "75", "300")
# print(Punch.FuelType())
# test = Car("test","test")
# print(Car.total_car)





#Question 04
my_tesla = ElectricCar("Tesla","X","75","300")
print(isinstance(my_tesla,Car))
print(isinstance(my_tesla,ElectricCar))
# # print(my_tesla.brand)
# print(my_tesla.get_brand())


#Answer 03
# my_tesla = ElectricCar("Tesla","X","75","300")
# print(my_tesla.brand)
# print(my_tesla.model)
# print(my_tesla.fullName())

#Answer 02
# my_car = Car("Honda","City")
# print(my_car.brand)
# print(my_car.model)
# print(my_car.fullName())

#Answer 01
# my_new_car = Car("Tata","Punch")
# print(my_new_car.model)
# print(my_new_car.fullName())

