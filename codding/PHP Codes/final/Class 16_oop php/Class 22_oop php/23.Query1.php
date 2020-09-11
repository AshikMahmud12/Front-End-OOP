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
 // outside the class definition
$obj = new MyClass();
echo $obj->public."<br/>";  // Works
$obj->printHello()."<br/>";  // Shows Public, Protected and Private
echo $obj->protected."<br/>"; // Fatal Error
echo $obj->private."<br/>"; // Fatal Error

//...

?>