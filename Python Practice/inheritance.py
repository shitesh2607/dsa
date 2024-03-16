# Agregation realation ship (has-a raltionship)

class Customer:
    def __init__(self, name, gender, address):
        self.name = name
        self.address = address
        self.gender = gender
    
    def edit_profile(self, new_name, new_city, new_pincode, new_state):
        self.name = new_name
        self.address.change_address(new_city, new_pincode, new_state)

class Address:
    def __init__(self, city, pincode, state):
        self.city = city
        self.pincode = pincode
        self.state = state
    
    def change_address(self, new_city, new_pincode, new_state):
        self.city = new_city
        self.pincode = new_pincode
        self.state = new_state

add = Address("Mumbai", 400058, "Maharashtra")
cust = Customer("Hitesh", "Male", add)
cust.edit_profile("MOJO", "Mumbra", 400058, "Asam")
print(cust.address.city)

# Inheritance
