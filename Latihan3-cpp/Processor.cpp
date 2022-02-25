#include <string>

using namespace std;

class Processor{

    private:

    string name;
    int price;

    public:

    // Constructor
    Processor(){
    }

    Processor(string name, int price){
        this->name = name;
        this->price = price;
    }

    // Get-set Name
    void setName(string name){
        this->name = name;
    }

    string getName(){
        return this->name;
    }

    // Get-set Price
    void setPrice(int price){
        this->price = price;
    }

    int getPrice(){
        return this->price;
    }

    // Deconstructor
    ~Processor(){
    }

};