class RAM{

    private:

    int capacity;
    int price;

    public:

    // Constructor
    RAM(){
    }

    RAM(int capacity, int price){
        this->capacity = capacity;
        this->price = price;
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
    ~RAM(){
    }

};