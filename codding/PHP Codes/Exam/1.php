<?php
$nameErr=$passwordErr=$emailErr="";
if ($_POST) {
	if(strlen($_POST['name'])<8){
		$nameErr="Minimum 8 characters long";
	}else{
		$nameErr="";
	}
	if(strlen($_POST['password'])>15){
		$passwrodErr="Maximum 15 characters long";
	}else{
		$passwordErr="";
	}
	if(strlen($_POST['email'])>30){
		$emailErr="Maximum length of the local part is 30 characters";
	}else{
		$emailErr="";
	}
	if(empty($nameErr)&& empty($passwordErr)&& empty($emailErr)){

		$dbc = mysqli_connect("localhost","root","","exam");
		if (!$dbc)
  		{
  		echo "Failed to connect to MySQL: " . mysqli_connect_error();
  		}
  		$name = $_POST['name'];
  		$password = $_POST['password'];
  		$email = $_POST['email'];
  		$gender = $_POST['gender'];
  		$interest = $_POST['interest'];

  		$sql = "INSERT INTO Person_Interest(Name, Password, Email, Gender, Interest) VALUES ('$name','$password','$email','$gender','$interest')";
  		if (mysqli_query($dbc, $sql)) {
    	echo "New record created successfully";
		} else {
    	echo "Error: " . $sql . "<br>" . mysqli_error($dbc);
		}
        mysqli_close($dbc);
        header("Location: 1_1.php");
	}
}
?>
<!DOCTYPE html>
<html>
<head>
	<title>1</title>
</head>
<body>
<h1>Registration Form</h1>
<form method="post" action="">
	<table>
		<tr>
			<td>Name</td>
			<td><input type="text" name="name" required><?php echo $nameErr;?></td>
		</tr>
		<tr>
			<td>Password</td>
			<td><input type="password" name="password" required><?php echo $passwordErr;?></td>
		</tr>
		<tr>
			<td>Email</td>
			<td><input type="email" name="email" required><?php echo $emailErr;?></td>
		</tr>
		<tr>
			<td>Gender</td>
			<td><input type="radio" name="gender" value="male" required> Male<br>
  	<input type="radio" name="gender" value="female" required> Female</td>
		</tr>
		<tr>
			<td>Interested In</td>
			<td><select name="interest" size="3" required>
    <option value="Designing">Designing</option>
    <option value="Coding">Coding</option>
    <option value="Analysis">Analysis</option>
    <option value="Art">Art</option>
  	</select></td>
		</tr>
		<tr>
			<td>Agree Terms & Conditions</td>
			<td><input type="checkbox" name="agree" required></td>
		</tr>
		<tr>
			<td></td>
			<td><input type="submit" name="submit" value = "Submit"></td>
		</tr>
	</table>
</form>
</body>
</html>