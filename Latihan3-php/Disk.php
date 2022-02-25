<?php

class Disk{
    private $type;
    private $capacity;
    private $price;

    public function __construct(){
    }

    // Get-set Type
    public function setType($type){
        $this->type = $type;
    }

    public function getType(){
        return $this->type;
    }

    // Get-set Capacity
    public function setCapacity($capacity){
        $this->capacity = $capacity;
    }

    public function getCapacity(){
        return $this->capacity;
    }

    // Get-set Price
    public function setPrice($price){
        $this->price = $price;
    }

    public function getPrice(){
        return $this->price;
    }
}
?>