<?php
class Circle{
private $radius;
	public function setRadius($r){
		$this->radius = $r;
	}
	public function getcircumference(){
		return $this->radius * $this->radius * 3.1416;
	}
	public function getarea(){
		return $this->radius * 2 * 3.1416;
	}
}

$ob = new Circle;
$ob->setRadius(4);
echo "Circumference is ".$ob->getcircumference()."<br>Area is ".$ob->getarea();

?>
