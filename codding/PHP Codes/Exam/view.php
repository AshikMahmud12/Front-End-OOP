<?php
		$dbc = mysqli_connect("localhost","root","","exam");
		if (!$dbc)
  		{
  		echo "Failed to connect to MySQL: " . mysqli_connect_error();
  		}
  		
  		$sql = "SELECT * FROM Person_Interest WHERE gender='male'";
  		
  		$result = mysqli_query($dbc, $sql);
  		
  		$male = mysqli_num_rows($result);
		
        $sql = "SELECT * FROM Person_Interest WHERE gender='female'";
  		$result = mysqli_query($dbc, $sql);
  		$female = mysqli_num_rows($result);

  		if (mysqli_query($dbc, $sql)) {
		} else {
    	echo "Error: " . $sql . "<br>" . mysqli_error($dbc);
		}
        mysqli_close($dbc);
?>
<!DOCTYPE html>
<html>
<head>
	<title>View</title>
</head>
<body>
<table>
	<tr>
		<th>Gender</th>
		<th>Name</th>
	</tr>
	<tr>
		<td>Male</td>
		<td><?php echo $male; ?></td>
	</tr>
	<tr>
		<td>Female</td>
		<td><?php echo $female; ?></td>
	</tr>
</table>
</body>
</html>