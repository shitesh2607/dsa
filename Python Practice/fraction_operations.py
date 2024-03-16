class Fraction:
    def __init__(self, n, d):
        self.num = n
        self.den = d
    # run automaticly when you print object of this class
    def __str__(self):
        return "{}/{}".format(self.num, self.den)
    
    # run automaticly you add object of this class
    def __add__(self, other):
        temp_num = self.num * other.den + other.num * self.den
        temp_den = self.den * other.den
        return "{}/{}".format(temp_num, temp_den)

    # run automaticly you substract object of this class
    def __sub__(self, other):
        temp_num = self.num * other.den - other.num * self.den
        temp_den = self.den * other.den
        return "{}/{}".format(temp_num, temp_den)

    # run automaticly you multiply object of this class
    def __mul__(self, other):
        temp_num = self.num * other.num
        temp_den = self.den * other.den
        return "{}/{}".format(temp_num, temp_den)
    
    # run automaticly you divide object of this class
    def __truediv__(self, other):
        temp_num = self.num * other.den
        temp_den = self.den * other.num
        return "{}/{}".format(temp_num, temp_den)