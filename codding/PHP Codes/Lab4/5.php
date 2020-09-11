<!DOCTYPE HTML>  
<html>
<head>
<title>5</title>
</head>
<body>  

<?php
	$arrayName = array(78, 60, 62, 68, 71, 68, 73, 85, 66, 64, 76, 63, 75, 76, 73, 68, 62, 73, 72, 65, 74, 62, 62, 65, 64, 68, 73, 75, 79, 73);
	$arraylength = count($arrayName);
	for($x = 0; $x < ($arraylength -1); $x++) {
		for($y = $x+1; $y < $arraylength; $y++) {
   			if($arrayName[$x] > $arrayName[$y]){
   				$temp = $arrayName[$x];
   				$arrayName[$x]=$arrayName[$y];
   				$arrayName[$y] = $temp;
   			}
   		}
   	}

	for($x = 0; $x < $arraylength; $x++) {
    echo $arrayName[$x];
    echo " ";
	}

?>
</body>
</html>