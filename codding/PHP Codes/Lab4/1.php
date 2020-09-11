<!DOCTYPE HTML>  
<html>
<head>
<title>1</title>
</head>
<body>  

<?php
	$arrayName = array(78, 60, 62, 68, 71, 68, 73, 85, 66, 64, 76, 63, 75, 76, 73, 68, 62, 73, 72, 65, 74, 62, 62, 65, 64, 68, 73, 75, 79, 73);
	$arraylength = count($arrayName);
	$total = 0;
	sort($arrayName);
	foreach ($arrayName as $value) {
		$total = $total + $value;
	}
	$average = $total/$arraylength;
	echo "Average Temperature is: ".$average."<br>";
	echo "lowest temperature: ".$arrayName[0]."<br>";
	echo "highest temperature: ".$arrayName[$arraylength-1];


?>
</body>
</html>