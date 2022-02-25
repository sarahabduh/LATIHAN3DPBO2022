<?php

class PC{
    private $p;
    private $d;
    private $r;
    private $totalPrice;

    public function __construct(){
        $this->p = new Processor();
        $this->d = new Disk();
        $this->r = new RAM();
        $this->totalPrice = 0;
    }

    // Get-set Processor
    public function setProcessor($p){
        $this->p = $p;
    }

    public function getProcessor(){
        return $this->p;
    }

    // Get-set Disk
    public function setDisk($d){
        $this->d = $d;
    }

    public function getDisk(){
        return $this->d;
    }

    // Get-set RAM
    public function setRAM($r){
        $this->r = $r;
    }

    public function getRAM(){
        return $this->r;
    }

    // Get-set totalPrice
    public function setTotalPrice($p1, $p2, $p3){
        $this->totalPrice = $p1 + $p2 + $p3;
    }

    public function getTotalPrice(){
        return $this->totalPrice;
    }
}
?>