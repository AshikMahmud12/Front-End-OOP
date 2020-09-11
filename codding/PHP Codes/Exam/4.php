<?php
class T20Aunction{
private $TeamId;
private $TeamName;
private $TeamBalance;
	public function __construct($TeamId, $TeamName, $TeamBalance){
		$this->TeamId = $TeamId;
		$this->TeamName = $TeamName;
		if($TeamBalance<200000){
			$this->TeamBalance = 200000;
		}else{
		$this->TeamBalance = $TeamBalance;
		}
	}
	public function BuyPlayer($PlayerValue){
		if(($this->TeamBalance-$PlayerValue)<10000){
			echo "Not Allowed<br>";
		}
		else{
			$this->TeamBalance = $this->TeamBalance - $PlayerValue;
		}
	}
	public function CheckTeamBalance(){
		echo "Current Balance".$this->TeamBalance."<br>";
	}
	public function SalePlayer($toTeam, $PlayerValue){
		$this->TeamBalance = $this->TeamBalance + $PlayerValue;
		$toTeam->TeamBalance = $toTeam->TeamBalance - $PlayerValue;
	}
}
	
$ob1 = new T20Aunction(1,"aa",1000000);
$ob2 = new T20Aunction(2,"bb",2000000);
$ob1->CheckTeamBalance();
$ob2->CheckTeamBalance();

$ob1->BuyPlayer(10000);
$ob1->CheckTeamBalance();
$ob2->CheckTeamBalance();

$ob2->SalePlayer($ob1,5000);
$ob1->CheckTeamBalance();
$ob2->CheckTeamBalance();

?>
