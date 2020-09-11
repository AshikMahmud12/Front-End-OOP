<?php
class Account{
private $accountID;
private $accountBalance;
private static $count = 0;
	public function __construct($ai,$ab){
		$this->accountID = $ai;
		$this->accountBalance = $ab;
		Account::$count++;
		$this->showCount();
	}
	public function showCount(){
		echo "There are ".Account::$count." Accounts so far<br>";
	}
	public function showInformation(){
		echo "Account ID : ".$this->accountID."<br>";
	}
	public function showAccountInfo(){
		echo "Account ID : ".$this->accountID."<br>Account Balance : ".$this->accountBalance."<br>";
	}
	public function transferMoney($ob,$a){
		$this->accountBalance=$this->accountBalance-$a;
		$ob->accountBalance=$ob->accountBalance+$a;
		echo "Transfer Money Completed<br>";
	}
	public function deposit($a){
		$this->accountBalance = $this->accountBalance + $a;
		echo "Deposit Completed<br>";
	}
	public function withdraw($a){
		$this->accountBalance = $this->accountBalance - $a;
		echo "Withdraw Completed<br>";
	}
}

$ob1 = new Account(1,1000);
$ob1->showInformation();
$ob2 = new Account(2,1500);
$ob2->showInformation();

$ob1->deposit(100);
$ob1->showAccountInfo();
$ob2->withdraw(200);
$ob2->showAccountInfo();

$ob1->transferMoney($ob2,150);
$ob1->showAccountInfo();
$ob2->showAccountInfo();
?>
