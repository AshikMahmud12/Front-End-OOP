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
echo "<dl>";
echo "<dt>Username:</dt><dd>$this->username</dd>";
echo "<dt>Location:</dt><dd>$this->location</dd>";

echo "<dt>Homepage:</dt><dd><a href= $this->homepage> $this->homepage </a></dd>";
echo "</dl>";
}
}

$aMember = new Member( "Bijan", "Sylhet", "http://tinyurl.com/h4jce49" );
$aMember->showProfile();

?>