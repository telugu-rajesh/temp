class Animal:
    def __init__(self, name):
        self.name = name

    def make_sound(self):
        pass

class Mammal(Animal):
    def give_birth(self):
        print(f"{self.name} is giving birth to live young")

class Bird(Animal):
    def lay_eggs(self):
        print(f"{self.name} is laying eggs")

class Platypus(Mammal, Bird):
    def __init__(self, name):
        super().__init__(name)

    def make_sound(self):
        print(f"{self.name} says 'Quack'")

# Creating an instance of Platypus
perry = Platypus("Perry")

# Using methods from different classes through multiple inheritance
perry.make_sound()    # Output: Perry says 'Quack'
perry.give_birth()    # Output: Perry is giving birth to live young
perry.lay_eggs()      # Output: Perry is laying eggs
