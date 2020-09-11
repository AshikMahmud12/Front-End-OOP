<!DOCTYPE html5>
<html>
<head>
<title>Login</title>
</head>
<body>
<?php

if(isset($_POST['submit'])){
    
    $data_missing = array();
    
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
        
        $query = "SELECT username, password from students";
        $flag=0;
        $response = @mysqli_query($dbc, $query);
        while($row = mysqli_fetch_array($response)){
            if($row['username']==$username && $row['password']==$password)
                $flag=1;
        }
        if($flag==1){
            echo "Login Successfull for User ".$username."<br>";
        }
        else{
            echo "Login Unuccessfull";
        }
        
    } else {
        
        echo 'Invalid Username or Password<br />';
        
        foreach($data_missing as $missing){
            
            echo "$missing<br />";
            
        }
        
    }
    
}

?>
<form action="login.php" method="post">
<p><a href="home.php">home</a></p>
<h1>Login</h1>
<table>
	<tr>
		<td>User Name:</td>
		<td><input type="text" name="username" size="30" value="" /></td>
		<td></td>
	</tr>
    <tr>
        <td>Password:</td>
        <td><input type="password" name="password" size="30" value="" /></td>
        <td><input type="submit" name="submit" value="Send" /></td>
    </tr>
</table>
</form>
</body>
</html>