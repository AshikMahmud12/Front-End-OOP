<?php

abstract class Shape {
    
   public abstract function area();
}

class Rectangle extends Shape {

    function __construct($x, $y) {
        
        $this->x = $x;
        $this->y = $y;
    }

    function area() {
        
        return $this->x * $this->y;
    }
}

class Square extends Shape {

    function __construct($x) {
        
        $this->x = $x;
    }

    function area() {
        
        return $this->x * $this->x;
    }
}

class Circle extends Shape {

    function __construct($x) {
        
        $this->x = $x;
    }

    function area() {
        
        return 3.1416 * $this->x * $this->x;
    }
}


$shapes = new Square(5);
echo "Square Area: " . $shapes->area() . "</br>";

$shapes = new Rectangle(12, 4);
echo "Rectangle Area: " .  $shapes->area() . "</br>";

$shapes = new Circle(2);
echo "Circle Area: " .  $shapes->area() . "</br>";


?>