#include <string>

using namespace std;

class Disk{

    private:

    string type;
    int capacity;
    int price;

    public:

    // Constructor
    Disk(){
    }

    Disk(string type, int capacity, int price){
        this->type = type;
        this->capacity = capacity;
        this->price = price;
    }

    // Get-set Type
    void setType(string type){
        this->type = type;
    }

    string getType(){
        return this->type;
    }

    // Get-set Capacity
    void setCapacity(int capacity){
        this->capacity = capacity;
    }

    int getCapacity(){
        return this->capacity;
    }

    // Get-set Price
    void setPrice(int price){
        this->price = price;
    }

    int getPrice(){
        return this->price;
    }

    // Deconstructor
    ~Disk(){
    }

};