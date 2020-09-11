<!DOCTYPE html5>
<html>
<head>
<title>Registration Form</title>
</head>
<body>
<?php

if(isset($_POST['submit'])){
    
    $data_missing = array();
    
    if(empty($_POST['name'])){

        $data_missing[] = 'Name';

    } else {

        $name = trim($_POST['name']);
    }
    if(empty($_POST['email'])){

        $data_missing[] = 'Email';

    } else {

        $email = trim($_POST['email']);
    }
    if(empty($_POST['phone'])){

        $data_missing[] = 'Phone';

    } else {

        $phone = trim($_POST['phone']);
    }
    if(empty($_POST['preaddress'])){

        $data_missing[] = 'Present Address';

    } else {

        $preaddress = trim($_POST['peraddress']);
    }
    if(empty($_POST['peraddress'])){

        $data_missing[] = 'Permanent Address';

    } else {

        $peraddress = trim($_POST['peraddress']);
    }
    if(empty($_POST['password'])){

        $data_missing[] = 'Password';

    } else {

        $password = trim($_POST['password']);
    }
    if(empty($_POST['username'])){

        $data_missing[] = 'User Name';

    } else {

        $username = trim($_POST['username']);
    }

    if(empty($data_missing)){
        
        $dbc = mysqli_connect("localhost","root","","student");

		// Check connection
		if (mysqli_connect_errno())
  		{
  		echo "Failed to connect to MySQL: " . mysqli_connect_error();
  		}
        
        $query = "INSERT INTO students (name, email,
        phone, preaddress, peraddress, password, username) VALUES (?, ?, ?,
        ?, ?, ?, ?)";
        
        $stmt = mysqli_prepare($dbc, $query);
        
        mysqli_stmt_bind_param($stmt,"sssssss", $name, $email,
        $phone, $preaddress, $peraddress, $password, $username);
        
        mysqli_stmt_execute($stmt);
        
        $affected_rows = mysqli_stmt_affected_rows($stmt);
        
        if($affected_rows == 1){
            
            echo 'Student Entered';
            
            mysqli_stmt_close($stmt);
            
            mysqli_close($dbc);
            
        } else {
            
            echo 'Error Occurred<br />';
            echo mysqli_error();
            
            mysqli_stmt_close($stmt);
            
            mysqli_close($dbc);
            
        }
        
    } else {
        
        echo 'You need to enter the following data<br />';
        
        foreach($data_missing as $missing){
            
            echo "$missing<br />";
            
        }
        
    }
    
}

?>
<form action="Registration.php" method="post">
<p><a href="home.php">home</a></p>
<h1>Registration Form</h1>
<table>
	<tr>
		<td>Name:</td>
		<td><input type="text" name="name" size="30" value="" /></td>
		<td></td>
	</tr>
	<tr>
		<td>Email:</td>
		<td><input type="email" name="email" size="30" value="" /></td>
		<td></td>
	</tr>
	<tr>
		<td>Phone:</td>
		<td><input type="text" name="phone" size="30" value="" /></td>
		<td></td>
	</tr>
	<tr>
		<td>Present Address:</td>
		<td><textarea name="preaddress" rows="4" cols="35" value=""></textarea></td>
		<td></td>
	</tr>
	<tr>
		<td>Permanent Address:</td>
		<td><textarea name="peraddress" rows="4" cols="35" value=""></textarea></td>
		<td></td>
	</tr>
	<tr>
		<td>Password:</td>
		<td><input type="password" name="password" size="30" value="" /></td>
		<td></td>
	</tr>
	<tr>
		<td>User Name:</td>
		<td><input type="text" name="username" size="30" value="" /></td>
		<td><input type="submit" name="submit" value="Send" /></td>
	</tr>
</table>
</form>
</body>
</html>