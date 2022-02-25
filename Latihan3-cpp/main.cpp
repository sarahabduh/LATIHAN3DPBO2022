#include <iostream>
#include "PC.cpp"

using namespace std;

int main(){

    Processor processor;
    Disk disk;
    RAM ram;
    PC pc;

    // set atribut Processor
    processor.setName("AMD Ryzen 5");
    processor.setPrice(4000000);

    // set atribut Disk
    disk.setType("SSD");
    disk.setCapacity(512);
    disk.setPrice(1500000);

    // set atribut RAM
    ram.setCapacity(8);
    ram.setPrice(800000);
    
    // set atribut PC
    pc.setProcessor(processor);
    pc.setDisk(disk);
    pc.setRAM(ram);
    pc.setTotalPrice(processor.getPrice(), disk.getPrice(), ram.getPrice());

    // menampilkan isi PC
    cout << "+--------------------------------------+" << endl;
    cout << "| PC Specification                     |" << endl;
    cout << "+--------------------------------------+" << endl;
    cout << "[Processor]" << endl; 
    cout << "- Name         : " << pc.getProcessor().getName() << endl;
    cout << "- Price        : " << pc.getProcessor().getPrice() << endl;
    cout << endl;
    cout << "[Disk]" << endl;
    cout << "- Type         : " << pc.getDisk().getType() << endl;
    cout << "- Capacity     : " << pc.getDisk().getCapacity() << endl;
    cout << "- Price        : " << pc.getDisk().getPrice() << endl;
    cout << endl;
    cout << "[RAM]" << endl;
    cout << "- Capacity     : " << pc.getRAM().getCapacity() << endl;
    cout << "- Price        : " << pc.getRAM().getPrice() << endl;
    cout << endl;
    cout << "======== Total Price : " << pc.getTotalPrice() << " ========" << endl;
    
    return 0;
}