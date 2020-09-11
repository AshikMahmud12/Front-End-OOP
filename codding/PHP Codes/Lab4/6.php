<!DOCTYPE HTML>  
<html>
<head>
<title>6</title>
</head>
<body>  

<?php
$a=array("a","b","c","A","B","C","1","2","3",".",",","?");

for($x=0;$x<10;$x++){
	echo $a[rand(0,11)];
}

?>

</body>
</html>