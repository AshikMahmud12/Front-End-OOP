<?php
	function findprime($data) {
		if($data==1)
			echo "Prime";
		else{
			$c = 0;
			for ($x = 2; $x < $data; $x++)
				if($data%$x==0)
					$c++;
			if($c == 0)
				echo "Prime";
			else
				echo "Not Prime";
		}
	}
?>
<!DOCTYPE HTML>  
<html>
<head>
<title>4</title>
</head>
<body>  
<p>
<?php
	findprime($_GET["Number"]);
?>
</p>
</form>
</body>
</html>