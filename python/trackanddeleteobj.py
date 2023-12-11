class myclass:
    temp = 0
    def __init__(self):
        myclass.temp = myclass.temp + 1
    def display(self):
        print(myclass.temp)
    def __del__(self):
        myclass.temp = myclass.temp - 1
obj1 = myclass()
obj2 = myclass()
obj3 = myclass()
obj4 = myclass()
obj5 = myclass()
obj6 = myclass()
obj7 = myclass()

obj1.display()
obj2.display()
obj3.display()

del obj1