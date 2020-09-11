<?php

class mathematics{
	
private $num;

		public function setNum($num)
		{
		$this->num = $num;
		}

		public function addTwo()
		{
		return $this->num+2;
		}

}

$math = new mathematics;

$math->setNum(2);

echo $math->addTwo();

?>
