#include "Processor.cpp"
#include "Disk.cpp"
#include "RAM.cpp"

class PC{

    private:

    Processor p;
    Disk d;
    RAM r;
    int totalPrice;

    public:

    // Constructor
    PC(){
    }

    PC(Processor p, Disk d, RAM r, int totalPrice){
        this->p = p;
        this->d = d;
        this->r = r;
        this->totalPrice = p.getPrice() + d.getPrice() + r.getPrice();
    }

    // Get-set Processor
    void setProcessor(Processor p){
        this->p = p;
    }

    Processor getProcessor(){
        return this->p;
    }

    // Get-set Disk
    void setDisk(Disk d){
        this->d = d;
    }

    Disk getDisk(){
        return this->d;
    }

    // Get-set RAM
    void setRAM(RAM r){
        this->r = r;
    }

    RAM getRAM(){
        return this->r;
    }

    // Get-set totalPrice
    void setTotalPrice(int p1, int p2, int p3){
        this->totalPrice = p1 + p2 + p3;
    }

    int getTotalPrice(){
        return this->totalPrice;
    }


    // Deconstructor
    ~PC(){
    }

};