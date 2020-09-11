<?php
class MyClass 
{
    // Declare a public constructor
    public function __construct() { echo "myclass constructor"."<br/>"; }

    // Declare a public method
    public function MyPublic() {echo "function MyPublic() call"."<br/>"; }

    // Declare a protected method
    protected function MyProtected() { echo "function MyProtected() call"."<br/>";  }

    // Declare a private method
    private function MyPrivate() { echo "function MyPrivate() call"."<br/>"; }

    // This is public
    function Foo()
    {
        $this->MyPublic();
        $this->MyProtected();
        $this->MyPrivate();
    }
}
 //OUTSIDE THE CLASS DEFINITION...

$myclass = new MyClass;
$myclass->MyPublic(); // Works
$myclass->Foo(); // Public, Protected and Private work
$myclass->MyProtected(); // Fatal Error
$myclass->MyPrivate(); // Fatal Error

//...

?>