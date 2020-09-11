<!DOCTYPE html>
<html>
<body>
<h1>PHP task 3</h1>
<?php
$x = 10;
$y = 12;
echo "1st Variable is ".$x."<br>";
echo "2nd Variable is ".$y."<br>";

$z = $y;
$y = $x;
$x = $z;

echo "After Swap<br>";
echo "1st Variable is ".$x."<br>";
echo "2nd Variable is ".$y."<br>";
?> 
</body>
</html>