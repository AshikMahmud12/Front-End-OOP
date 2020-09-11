<!DOCTYPE HTML>  
<html>
<head>
<style>
.error {color: #FF0000;}
</style>
</head>
<body>  

<?php
// define variables and set to empty values
$username = $password = $confirmpassword = $country = $city = $address = $mobile = $accept = "";
$usernameErr = $passwordErr = $confirmpasswordErr = $countryErr = $cityErr = $addressErr = $mobileErr = $acceptErr = "";

if ($_POST) {
  if (empty($_POST["username"])) {
    $usernameErr = "Please Enter Email Address";
  } else {
    $username = test_input($_POST["username"]);
  }
  if (empty($_POST["password"])) {
    $passwordErr = "Please Enter Password";
  } else {
    $password = test_input($_POST["password"]);
  }
  if (empty($_POST["confirmpassword"])) {
    $confirmpasswordErr = "Please Enter Confirm Password";
  } else {
  	if($_POST["password"]!=$_POST["confirmpassword"]){
  		$confirmpasswordErr = "Passwords don't Match, Please Enter Correct Password";
  	}
    $confirmpassword = test_input($_POST["confirmpassword"]);
  }
  if (empty($_POST["country"])) {
    $countryErr = "Please Select Country";
  } else {
    $country = test_input($_POST["country"]);
  }
  if (empty($_POST["city"])) {
    $cityErr = "Please Select City";
  } else {
    $city = test_input($_POST["city"]);
  }
  if (empty($_POST["address"])) {
    $addressErr = "Please Enter Address";
  } else {
    $address = test_input($_POST["address"]);
  }
  if (empty($_POST["mobile"])) {
    $mobileErr = "Please Enter Mobile No";
  } else {
    $mobile = test_input($_POST["mobile"]);
  }
  if (empty($_POST["accept"])) {
    $acceptErr = "Please Accept the Terms & Conditions";
  } else {
    $accept = test_input($_POST["accept"]);
  }
  // redirect to another page
  if(!empty($_POST["username"]) && !empty($_POST["password"])&& !empty($_POST["confirmpassword"])&& !empty($_POST["country"])&& !empty($_POST["city"])&& !empty($_POST["address"])&& !empty($_POST["mobile"])&& !empty($_POST["accept"]))
  {
  $file = fopen("file.txt", "a+") or die("Unable to open file!");
  $txt = $username."\t".$password."\t".$country."\t".$city."\t".$mobile."\t".$address.PHP_EOL;
  fwrite($file, $txt);
	fclose($file);
	  
  header("Location: success.php");
  exit();
  }
}

function test_input($data) {
  $data = trim($data);
  $data = stripslashes($data);
  $data = htmlspecialchars($data);
  return $data;
}
?>

<h2>Write</h2>
<p><span class="error">* required field.</span></p>
<form method="post" action="">
  UserName<br><input type="email" name="username" value="<?php if(isset($_POST['username'])) echo $_POST['username']; ?>" /> 
  <span class="error">* <?php echo $usernameErr;?></span>
  <br><br>
  Password<br><input type="password" name="password" value="<?php if(isset($_POST['password'])) echo $_POST['password']; ?>" /> 
  <span class="error">* <?php echo $passwordErr;?></span>
  <br><br>
  Confirm Password<br><input type="password" name="confirmpassword" value="<?php if(isset($_POST['confirmpassword'])) echo $_POST['confirmpassword']; ?>" /> 
  <span class="error">* <?php echo $confirmpasswordErr;?></span>
  <br><br>
  Country<br><select name="country" value="<?php if(isset($_POST['country'])) echo $_POST['country']; ?>">
  <option value="Bangladesh">Bangladesh</option>
  <option value="USA">USA</option>
  </select>
  <span class="error">* <?php echo $countryErr;?></span>
  <br><br>
  City<br><select name="city" value="<?php if(isset($_POST['city'])) echo $_POST['city']; ?>">
  <option value="Dhaka">Dhaka</option>
  <option value="Texus">Texus</option>
  </select>
  <span class="error">* <?php echo $cityErr;?></span>
  <br><br>
  Address<br><textarea name="address" rows="4" cols="44" value="<?php if(isset($_POST['address'])) echo $_POST['address']; ?>"></textarea>
  <span class="error">* <?php echo $addressErr;?></span>
  <br><br>
  Mobile<br><input type="text" name="mobile" value="<?php if(isset($_POST['mobile'])) echo $_POST['mobile']; ?>" /> 
  <span class="error">* <?php echo $mobileErr;?></span>
  <br><br>
  <input type="checkbox" name="accept" value="1"> I accept the terms & conditions<span class="error">* <?php echo $acceptErr;?></span>
  <br><br>
  <input type="submit" name="submit" value="Submit">  
</form>

</body>
</html>


