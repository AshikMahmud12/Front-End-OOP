<!DOCTYPE html>
<html>
<body>
<h1>PHP task 5</h1>
<?php
for ($x = 0; $x <= 5; $x++) {
	for ($y = 1; $y <= $x; $y++) {
		echo "* ";
	}
	echo "<br>";
}
for ($x = 5; $x >= 0; $x--) {
	//if($x!=1)
	for ($y = $x-1; $y >= 0; $y--) {
		echo "* ";
	}
	echo "<br>";
}
?> 
</body>
</html>