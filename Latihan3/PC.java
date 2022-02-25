package Latihan3;

class PC {
    private Processor p;
    private Disk d;
    private RAM r;
    private int totalPrice;

    // Constructor
    public PC(){
    }

    // Get-set Processor
    public Processor getProcessor() {
        return p;
    }

    public void setProcessor(Processor p) {
        this.p = p;
    }
    
    // Get-set Disk
    public Disk getDisk() {
        return d;
    }

    public void setDisk(Disk d) {
        this.d = d;
    }
    
    // Get-set RAM
    public RAM getRAM() {
        return r;
    }

    public void setRAM(RAM r) {
        this.r = r;
    }
    
    // Get-set Price
    public int getTotalPrice() {
        return totalPrice;
    }

    public void setTotalPrice(int p1, int p2, int p3) {
        this.totalPrice = p1 + p2 + p3;
    }
}