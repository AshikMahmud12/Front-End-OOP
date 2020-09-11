<?php
class mathematics
{
public $num;

	public function addTwo()
	{
	return $this->num+2;
	}

}


$math = new mathematics;

$math->num = 2;

echo $math->addTwo();

?>
