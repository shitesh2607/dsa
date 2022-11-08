class Python:

    def __init__(self):
        self.pin = ""
        self.balance = 1
        self.menu()
    
    def menu(self):
        user_input = input("""
        1. Enter 1 to create pin
        2. Enter 2 to deposite
        3. Enter 3 to withdraw
        4. Enter 4 to check balance
        5. Enter 5 to exit
        """)
        # switch case
        match user_input:
            case 1:
                self.create_pin()
            case 2:
                self.deposite()
            case 3:
                pass
            case 4:
                pass
            case 5:
                pass
            # Default
            # case _:
            #     pass
    
    def create_pin(self):
        self.pin = input("Enter you pin")
        print("Your pin hasbeen created succesfully!")

    def deposite(self):
        temp = input("Enter your pin")
        if temp == self.pin:
            amount = int(input("Enter the amount!"))
            self.balance = self.balance + amount
            print(f"Your account hasbenn credited by {amount}")
        else:
            print("invalid pin")
    
    def withdraw(self):
        temp = input("Enter your pin")
        if temp==self.pin:
            amount = int(input("Enter amount!!"))
            if amount<self.balance:
                self.balance = self.balance
