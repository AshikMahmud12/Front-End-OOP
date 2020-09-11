<!DOCTYPE html>
<html>
<body>
<h1>PHP task 2</h1>
<table style="border-collapse: collapse;">
<?php
for ($x = 0; $x <= 9; $x++) {
	echo "<tr>";
    for ($y = 0; $y <= 9; $y++) {
		$z = $x + $y; 
		if($z%2==0)
			echo "<td height=40px width=40px bgcolor=#FFFFFF></td>";
		else
			echo "<td height=40px width=40px bgcolor=#000000></td>";
	}
	echo "</tr>";
}
?> 
</table>
</body>
</html>