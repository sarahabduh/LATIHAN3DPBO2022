class RAM:
    # Constructor
    def __init__(self):
        self.__capacity = 0
        self.__price = 0
    
    # Get-set Capacity
    def setCapacity(self, capacity):
        self.__capacity = capacity

    def getCapacity(self):
        return self.__capacity

    # Get-set Price
    def setPrice(self, price):
        self.__price = price

    def getPrice(self):
        return self.__price