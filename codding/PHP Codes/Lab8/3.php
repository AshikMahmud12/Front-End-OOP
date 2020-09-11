<?php
class Student{
private $name;
private $id;
private $CGPA;
	public function __construct($n,$i,$c){
		$this->name = $n;
		$this->id = $i;
		$this->CGPA = $c;
	}
	public function getCGPA(){
		return $this->CGPA;
	}
}

function Average($ob1,$ob2){
	$l = $ob1->getCGPA();
	$r = $ob2->getCGPA();
	$result = ($l+$r)/2;
	echo "Average CGPA is ".$result."<br>";
}

$s1 = new Student("A",1,3.1);
$s2 = new Student("B",2,3.5);

Average($s1,$s2);
?>
