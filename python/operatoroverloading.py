class GridPoint:
    def __init__(self, x, y):  
        self.x = x  
        self.y = y  
  
    def __add__(self, other):  	# Overloading + operator
        return GridPoint(self.x + other.x, self.y + other.y)
  
    def __str__(self):  		# Overloading "to string" (for printing)
        string = str(self.x)  
        string = string + ", " + str(self.y)  
        return string  
   	def __gt__(self, other):  	# Overloading > operator (Greater Than)
       	return self.x > other.x    
point1 = GridPoint(3, 5) 
point2 = GridPoint(-1, 4)
point3 = point1 + point2  	# Add two points using __add__() method
print(point3)  				# Print the attributes using __str__() method
if point1 > point2:  		# Compares using __gt__() method
   print('point1 is greater than point2')  
