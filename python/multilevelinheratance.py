class Person:
    def name(self):
        print("Name: Karthi")

class Teacher(Person):
    def dept(self):
        print("Department: Mathematics")

class HOD(Teacher):
    def exp(self):
        print("Experience: 12 years")

h = HOD()
h.name()
h.dept()
h.exp()
