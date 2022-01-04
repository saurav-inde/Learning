class Resturant:
    def __init__(self, name, cusine):
        """give the instances name and a cusine"""
        self.name = name
        self.cusine = cusine

    def isopen():
        "tells the customer whenever resturant is open"
        open_message = "the Resturant is open right now"
        print(open_message)

    def  describe_resturant(self):
        """describes the resturant in one line"""
        print(f"Name of resturant is {self.name} and is famous for {self.cusine} food" )


resturant = Resturant("Baba Ka Dhaba", "South Indian")
res2 = Resturant("Chai DI Tapri", "Indian")
res3 = Resturant("TasteFood", "Korean")

resturant.describe_resturant()
res2.describe_resturant()
res3.describe_resturant()