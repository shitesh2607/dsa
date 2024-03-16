class ATM:
    # static variable
    counter =1
    def __init__(self):
        self.__pin = ''
        self.__balance = 10
        print(id(self))
        self.__menu()

    def get_pin(self):
        return self.__pin
    
    def set_pin(self, new_pin):
        self.__pin = new_pin
        print("Pin changed")

    def __menu(self):
        user_input = input("""
        1. Enter 1 to create pin
        2. Enter 2 to deposite
        3. Enter 3 to withdraw
        4. Enter 4 to check balance
        5. Enter 5 to exit""")
        if user_input=="1":
            self.create_pin()
        elif user_input=="2":
            self.deposite()
        elif user_input=="3":
            self.withdraw()
        elif user_input=="4":
            pass
        elif user_input=="5":
            return 0
        # switch case
        # match user_input:
        #     case "1":
        #         self.create_pin()
        #     case "2":
        #         self.deposite()
        #     case "3":
        #         pass
        #     case "4":
        #         pass
        #     case "5":
        #         pass
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
            print(f"Your account hasbenn credited by {amount}.")
        else:
            print("invalid pin")
    
    def withdraw(self):
        temp = input("Enter your pin")
        if temp==self.pin:
            amount = int(input("Enter amount!!"))
            if amount<self.balance:
                self.balance = self.balance - amount
                print(f"Your account hasbeen debited by {amount}.")
            else:
                print("insufficient amount!!")
    
    def check_balance(self):
        temp = input("Enter your pin")
        if temp==self.pin:
            print(self.balance)
        else:
            print("invalid pin")


# creating own datatype for fraction operations

