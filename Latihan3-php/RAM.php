<?php

class RAM{
    private $capacity;
    private $price;

    public function __construct(){
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