class Disk:
    # Constructor
    def __init__(self):
        self.__type = ""
        self.__capacity = 0
        self.__price = 0
    
    # Get-set Type
    def setType(self, type):
        self.__type = type

    def getType(self):
        return self.__type

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