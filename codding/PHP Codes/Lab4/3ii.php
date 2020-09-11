<!DOCTYPE HTML>  
<html>
<head>
<title>3ii</title>
</head>
<body>  

<?php
	for ($x = 1; $x <= 5; $x++) {
		for ($y = 1; $y <= $x; $y++) {
			echo $y;
   	}
   	echo "<br>";
  }
  for ($x = 5; $x >= 1; $x--) {
		for ($y = 1; $y <= $x; $y++) {
			echo $y;
   	}
   	echo "<br>";
  }
?>
</body>
</html>