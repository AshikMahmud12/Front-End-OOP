<?php
class MyClass {
    public $public = 'Public';
    protected $protected = 'Protected'; //protected for public use, but accessible in a derived class
    private $private = 'Private';

    function printHello() {
        echo $this->public;
        echo $this->protected;
        echo $this->private;
    }
}

class MyClass2 extends MyClass 
{
    // We can redeclare the public and protected method, but not private
   // protected – ‘protected’ for public use, but accessible in a derived class
   protected $protected = 'Protected2';

    function printHello()
    {
        echo $this->public;
        echo $this->protected;
        echo $this->private;
    }
}
 // outside the class definition
$obj2 = new MyClass2();
echo $obj2->public."<br/>"; // Works
echo $obj2->private."<br/>"; // Undefined
$obj2->printHello()."<br/>"; // Shows Public, Protected2, Undefined
echo $obj2->protected."<br/>"; // Fatal Error




?>