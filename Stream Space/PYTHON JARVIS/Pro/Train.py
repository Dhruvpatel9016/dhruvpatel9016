from random import randint

class Train:
    def __init__(self, trainNo):
        self.trainNo = trainNo
    
    def book(self, fro, to):
        print(f"Ticket is booked in Train no :- {self.trainNo} from {fro} to {to}")
    
    def getStatus(self):
        print(f"Train no :- {self.trainNo} is running on time.")

    def getFare(self, fro, to):
        print(f"Ticket fare in tarin no :- {self.trainNo} from {fro} to {to} is {randint(222,5555)}")
    
t = Train(12399)
t.book("Rampur","gujrat")
t.getStatus()
t.getFare("Rampur","gujrat")