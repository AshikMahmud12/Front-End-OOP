<?php
 /* __CLASS__ returns name of class in which it is called; 
 this is what is known as a magic constant*/
class ParentClass
{
  public $prop1 = "I'm a class property!";
 
  public function __construct()
  {
      echo 'The class "', __CLASS__, '" was initiated!<br />';
  }
 
  public function __destruct()
  {
      echo 'The class "', __CLASS__, '" was destroyed.<br />';
  }
 
  public function __toString()
  {
      echo "Using the toString method: ";
      return $this->getProperty();
  }
 
  public function setProperty($newval)
  {
      $this->prop1 = $newval;
  }
 
  public function getProperty()
  {
      return $this->prop1 . "<br />";
  }
}
 
class ChildClass extends ParentClass
{
  public function newMethod()
  {
      echo "From a new method in " . __CLASS__ . ".<br />";
  }
}
 
// Create a new object
$newobj = new ChildClass;
 
// Output the object as a string
echo $newobj->newMethod();
 
// Use a method from the parent class
echo $newobj->getProperty();
 
?>