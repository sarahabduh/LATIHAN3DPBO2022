<?php

    include "Processor.php";
    include "Disk.php";
    include "RAM.php";
    include "PC.php";

    // set atribut Processor
    $processor = new Processor();
    $processor->setName("AMD Ryzen 5");
    $processor->setPrice(4000000);
    
    // set atribut Disk
    $disk = new Disk();
    $disk->setType("SSD");
    $disk->setCapacity(512);
    $disk->setPrice(1500000);

    // set atribut RAM
    $ram = new RAM();
    $ram->setCapacity("8");
    $ram->setPrice(800000);

    // set atribut PC
    $pc = new PC();
    $pc->setProcessor($processor);
    $pc->setDisk($disk);
    $pc->setRAM($ram);
    $pc->setTotalPrice($processor->getPrice(), $disk->getPrice(), $ram->getPrice());

    // menampilkan isi PC
    echo "<b> PC Specification </b>". "<br>";
    echo "========================". "<br>";
    echo "[Processor]". "<br>";
    echo "- Name          : ". $pc->getProcessor()->getName(). "<br>";
    echo "- Price         : ". $pc->getProcessor()->getPrice(). "<br><br>";
    echo "[Disk]". "<br>";
    echo "- Type          : ". $pc->getDisk()->getType(). "<br>";
    echo "- Capacity      : ". $pc->getDisk()->getCapacity(). "<br>";
    echo "- Price         : ". $pc->getDisk()->getPrice(). "<br><br>";
    echo "[RAM]". "<br>";
    echo "- Capacity      : ". $pc->getRAM()->getCapacity(). "<br>";
    echo "- Price         : ". $pc->getRAM()->getPrice(). "<br>";
    echo "========================". "<br>";
    echo "<i>Total Price     : ". $pc->getTotalPrice(). "</i><br>";
    echo "========================". "<br><br>";
?>