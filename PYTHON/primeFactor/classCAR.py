"""CLASS FOR GASS AND ELECTRIC CARS"""


class Car:
    """MAIN CAR CLASS FOR CAR MODALLING"""
    def __init__(self, name, company, year):
        """Assign details of new car"""
        self.name = name
        self.company = company
        self.launched  = year
        self.odometer = 10

    def odometer_update(self, moved):
        if moved > 0:
            self.odometer += moved     

    def show_details(self):
        print(f"Car : {self.name}")
        print(f"Company : {self.company}")
        print(f"Launched : {self.launched}")
        print(f"Distance car has covered: {self.odometer }")



class Battery:
    """CLASS BATTERY FOR EVS"""
    def __init__(self, battery):
       batter_raw = battery.split()     
       self.capacity = batter_raw[0]
       self.technology = batter_raw[1]
       self.cell_count = batter_raw[2]

    def describe_battery(self):
        print("Battery details are as follows:" )
        print(f"Technology: {self.technology}")
        print(f"Capacity: {self.capacity}")
        print(f"Cell Count: {self.cell_count}")



class Electric_car(Car):
    """CHILD CLASS OF CARS THE ELCTRIC CAR CLASS"""
    def __init__(self, name, company, year, battry):
        super().__init__(name,  company, year)
        self.battry = Battery(battry)




car1 = Car("Coupe 4-Matics", "Mercedes", "2019")
car1.odometer_update(456)

ec1 = Electric_car("S5", "TESLA", "2018", "100000-AH Lion 1000-cell")
car1.show_details()
print("\n\n_________EC_________")

ec1.show_details()
print("\nBattery details")
ec1.battry.describe_battery()