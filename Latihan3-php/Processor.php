<?php

class Processor{
    private $name;
    private $price;

    public function __construct(){
    }

    // Get-set Name
    public function setName($name){
        $this->name = $name;
    }

    public function getName(){
        return $this->name;
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