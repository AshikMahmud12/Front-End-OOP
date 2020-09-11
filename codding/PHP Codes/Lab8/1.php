<?php
class Rectangle {
private $width;
private $height;
	public function __construct($w ,$h){
		$this->width = $w;
		$this->height = $h;
	}
	public function setWidth($w){
		$this->width = $w;
	}
	public function setHeight($h){
		$this->height = $h;
	}
	public function getWidth(){
		return $this->width;
	}
	public function getHeight(){
		return $this->height;
	}
	public function showArea(){
		$return = $this->height * $this->width;
		//return $return;
		echo "Area is ".$return."<br>";
	}
}

$Rectangle1 = new Rectangle(0,0);
$Rectangle2 = new Rectangle(0,0);
$Rectangle3 = new Rectangle(0,0);


$Rectangle1->setHeight(2);
$Rectangle1->setWidth(3);
echo "Height is ".$Rectangle1->getHeight()." Width is ".$Rectangle1->getWidth()." and ";
$Rectangle1->showArea();

$Rectangle2->setHeight(3);
$Rectangle2->setWidth(4);
echo "Height is ".$Rectangle2->getHeight()." Width is ".$Rectangle2->getWidth()." and ";
$Rectangle2->showArea();

$Rectangle3->setHeight(4);
$Rectangle3->setWidth(4);
echo "Height is ".$Rectangle3->getHeight()." Width is ".$Rectangle3->getWidth()." and ";
$Rectangle3->showArea();


$Rectangle4 = new Rectangle(5,6);
echo "Height is 6 Width is 5 and ";
$Rectangle4->showArea();
?>
