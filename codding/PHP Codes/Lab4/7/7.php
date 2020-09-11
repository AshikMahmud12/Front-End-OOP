
<?php 
		$name = "";
		$email = "";
		$comment = "";
		$gender = "";
		$name_Err = "";
		$email_Err = "";
		$gender_Err = "";

		$number_of_error = 0;
		if(empty($_POST["Name"])){
			$name_Err = "please input your name";
			$number_of_error++;
		}
		elseif (strlen($_POST["Name"])<=2) {
			$name_Err = "Name must be more than two characters";
			$number_of_error++;
		}
		if(empty($_POST["Email"])){
			$email_Err = "please enter an email";
			$number_of_error++;
		} 
		if(empty($_POST["Gender"])){
			$gender_Err = "Select a gender";
			$number_of_error++;
		}
		if($number_of_error==0){
			header("Location: success.php");
			exit();
		}

?>

<!DOCTYPE HTML>  
<html>
<head>
<style>
.error {color: #FF0000;}
</style>
</head>
<body>  
<form method="post">
		<p>Contact form Validation</p>
		<h1>Contact for Query</h1>
		<p><span class="error">* required field.</span></p>
		<LABEL>Name: </LABEL><input type="text" name="Name"> <span class="error">*<?php echo "$name_Err"; ?></span>
		<br>
		<LABEL>Email: </LABEL><input type="email" name="Email"> <span class="error">*<?php echo "$email_Err"; ?></span>
		<br>
		<LABEL>Website: </LABEL><input type="text" name="Website">
		<br>
		<LABEL>Comment: </LABEL><textarea name="Comment" rows="4" cols="44"></textarea>
		<br>
		<LABEL>Gender: </LABEL>
		<input type="radio" name="Gender" value="female">Female
 		<input type="radio" name="Gender" value="male">Male <span class="error">*<?php echo "$gender_Err"; ?></span>
  		<br>
		<input type="submit" name="submit" value="Submit">
	</form>

</body>
</html>