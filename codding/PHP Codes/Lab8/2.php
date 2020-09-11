<?php
class Calculator {
private $myValue;
	public function __construct($d){
		$this->myValue = $d;
	}
	public function setValue($d){
		$this->myValue = $d;
	}
	public function square(){
		$result = $this->myValue * $this->myValue;
		echo "Qube is ".$result."<br>";	}
	public function qube(){
		$result = $this->myValue * $this->myValue * $this->myValue;
		echo "Qube is ".$result."<br>";
	}
}

$ob = new Calculator(0);
$ob->setValue(5);
echo "Value is 5<br>";
$ob->square();
$ob->qube();

$ob2 = new Calculator(6);
echo "Value is 6<br>";
$ob2->square();
$ob2->qube();
?>
