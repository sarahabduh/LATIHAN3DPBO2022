from Processor import Processor
from Disk import Disk
from RAM import RAM
from PC import PC

processor = Processor()
disk = Disk()
ram = RAM()
pc = PC()

# set atribut Processor
processor.setName("AMD Ryzen 5")
processor.setPrice(4000000)

# set atribut Disk
disk.setType("SSD")
disk.setCapacity(512)
disk.setPrice(1500000)

# set atribut RAM
ram.setCapacity(8)
ram.setPrice(800000)
    
# set atribut PC
pc.setProcessor(processor)
pc.setDisk(disk)
pc.setRAM(ram)
pc.setTotalPrice(processor.getPrice(), disk.getPrice(), ram.getPrice())

# menampilkan isi PC
print("+--------------------------------------+")
print("| PC Specification                     |")
print("+--------------------------------------+")
print("[Processor]")
print("- Name        : " + str(pc.getProcessor().getName()))
print("- Price       : " + str(pc.getProcessor().getPrice()), '\n')
print("[Disk]")
print("- Type        : " + str(pc.getDisk().getType()))
print("- Capacity    : " + str(pc.getDisk().getCapacity()))
print("- Price       : " + str(pc.getDisk().getPrice()), '\n')
print("[RAM]")
print("- Capacity    : " + str(pc.getRAM().getCapacity()))
print("- Price       : " + str(pc.getRAM().getPrice()), '\n')
print("======== Total Price : " + str(pc.getTotalPrice()), "========")

