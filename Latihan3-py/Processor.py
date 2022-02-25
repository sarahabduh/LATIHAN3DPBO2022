class Processor:
    # Constructor
    def __init__(self):
        self.__name = ""
        self.__price = 0
    
    # Get-set Name
    def setName(self, name):
        self.__name = name

    def getName(self):
        return self.__name

    # Get-set Price
    def setPrice(self, price):
        self.__price = price

    def getPrice(self):
        return self.__price