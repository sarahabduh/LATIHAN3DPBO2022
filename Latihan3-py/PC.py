from Processor import Processor
from Disk import Disk
from RAM import RAM

class PC:
    # Constructor
    def __init__(self):
        self.__p = Processor()
        self.__d = Disk()
        self.__r = RAM()
        self.__totalPrice = 0
    
    # Get-set Processor
    def setProcessor(self, p):
        self.__p = p

    def getProcessor(self):
        return self.__p

    # Get-set Disk
    def setDisk(self, d):
        self.__d = d

    def getDisk(self):
        return self.__d
    
    # Get-set RAM
    def setRAM(self, r):
        self.__r = r

    def getRAM(self):
        return self.__r

    # Get-set totalPrice
    def setTotalPrice(self, p1, p2, p3):
        self.__totalPrice = p1 + p2 + p3

    def getTotalPrice(self):
        return self.__totalPrice