package Latihan3;

class Main {
    public static void main(String[] args) {

        // set atribut Processor
        Processor processor = new Processor();
        processor.setName("AMD Ryzen 5");
        processor.setPrice(4000000);

        // set atribut Disk
        Disk disk = new Disk();
        disk.setType("SSD");
        disk.setCapacity(512);
        disk.setPrice(1500000);

        // set atribut RAM
        RAM ram = new RAM();
        ram.setCapacity(8);
        ram.setPrice(800000);
        
        // set atribut PC
        PC pc = new PC();
        pc.setProcessor(processor);
        pc.setDisk(disk);
        pc.setRAM(ram);
        pc.setTotalPrice(processor.getPrice(), disk.getPrice(), ram.getPrice());

        // menampilkan isi PC
        System.out.println("+--------------------------------------+");
        System.out.println("| PC Specification                     |");
        System.out.println("+--------------------------------------+");
        System.out.println("[Processor]");
        System.out.println("- Name        : " + pc.getProcessor().getName());
        System.out.println("- Price       : " + pc.getProcessor().getPrice() + "\n");
        System.out.println("[Disk]");
        System.out.println("- Type        : " + pc.getDisk().getType());
        System.out.println("- Capacity    : " + pc.getDisk().getCapacity());
        System.out.println("- Price       : " + pc.getDisk().getPrice() + "\n");
        System.out.println("[RAM]");
        System.out.println("- Capacity    : " + pc.getRAM().getCapacity());
        System.out.println("- Price       : " + pc.getRAM().getPrice() + "\n");
        System.out.println("======== Total Price : " + pc.getTotalPrice() + " ========\n");
    }
}