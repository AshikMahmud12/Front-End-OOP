<?php
class Box{
private $length;
private $width;
private $height;
	public function __construct($l,$w,$h){
		$this->length = $l;
		$this->width = $w;
		$this->height = $h;
	}
	public function getarea(){
		$result = (2*$this->height*$this->width)+(2*$this->height*$this->length)+(2*$this->width*$this->length);
		return $result;
	}
}

$ob = new Box(4,5,6);
echo "Area is ".$ob->getarea();

?>
