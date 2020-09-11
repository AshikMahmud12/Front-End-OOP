<!DOCTYPE HTML>  
<html>
<head>
<style>
.error {color: #FF0000;}
</style>
</head>
<body>  
<table>
  <tr>
    <td><a href="read.php">Read</a></td>
    <td><a href="search.php">Search</a></td>
    <td><a href="write.php">Write</a></td>
  </tr>
</table>
<?php
// define variables and set to empty values
$nameErr = $markErr = $subErr = "";
$name = $mark = $subject = "";

if ($_POST) {
  if (empty($_POST["name"])) {
    $nameErr = "Name is required";
  } else {
    $name = test_input($_POST["name"]);
  }
  
  if (empty($_POST["mark"])) {
    $markErr = "Mark is required";
  } else {
    $mark = test_input($_POST["mark"]);
  }
  
  if (empty($_POST["subject"])) {
    $subErr = "Subject is required";
  } else {
    $subject = test_input($_POST["subject"]);
  }
  
  // redirect to another page
  if(!empty($_POST["name"]) && !empty($_POST["subject"]) && !empty($_POST["mark"]))
  {
  if(file_exists(file.txt)!=1){
    $file = fopen("file.txt", "a+") or die("Unable to open file!");
    $head = "Name\tSubject\tMark".PHP_EOL;
    fwrite($file, $head);
  }else{
	 $file = fopen("file.txt", "a+") or die("Unable to open file!");
  }
  $txt = $name."\t".$subject."\t".$mark.PHP_EOL;
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
  Name: <input type="text" name="name" value="<?php if(isset($_POST['name'])) echo $_POST['name']; ?>" /> 
  <span class="error">* <?php echo $nameErr;?></span>
  <br><br>
  Subject: <input type="text" name="subject" value="<?php if(isset($_POST['subject'])) echo $_POST['subject']; ?>" /> 
  <span class="error">* <?php echo $subErr;?></span>
  <br><br>
  Mark: <input type="number" name="mark" value="<?php if(isset($_POST['mark'])) echo $_POST['mark']; ?>" /> 
  <span class="error">* <?php echo $markErr;?></span>
  <br><br>
  <input type="submit" name="submit" value="Submit">  
</form>

</body>
</html>


