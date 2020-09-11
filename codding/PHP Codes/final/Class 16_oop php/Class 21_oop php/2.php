<?php
class Person {
	private $strFirstname = "Napoleon";
	private $strSurname = "Reyes";

	function getFirstname() {
        return $this->strFirstname;
	}
	function getSurname() {
        return $this->strSurname;
	}
}
// outside the class definition
$obj = new Person; // an object of type Person
echo "<p>Firstname: " . $obj->getFirstname() . "</p>";
echo "<p>Surname: " . $obj->getSurname() . "</p>";
?> 
