<?php
class Member {
private $username;
private $location;
private $homepage;

public function __construct( $username, $location, $homepage ) {
$this->username = $username;
$this->location = $location;
$this->homepage = $homepage;
}

public function showProfile() {
echo "";
echo "Username:$this->username". "</br>";
echo "Location:$this->location". "</br>";
echo "Homepage:<a href= $this->homepage> $this->homepage </a>". "</br>";
echo "";
}
}

$aMember = new Member( "Bijan", "Sylhet", "http://tinyurl.com/h4jce49" );
$aMember->showProfile();

?>


