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
$nameErr = "";
$name = "";

if ($_POST) {
  if (empty($_POST["name"])) {
    $nameErr = "Name is required";
  } else {
    $name = test_input($_POST["name"]);
  }
}
function test_input($data) {
  $data = trim($data);
  $data = stripslashes($data);
  $data = htmlspecialchars($data);
  return $data;
}
?>

<h2>Search</h2>
<p><span class="error">* required field.</span></p>
<form method="post" action="">
  Name: <input type="text" name="name" value="<?php if(isset($_POST['name'])) echo $_POST['name']; ?>" /> 
  <span class="error">* <?php echo $nameErr;?></span>
  <br><br>
  <input type="submit" name="submit" value="Submit">  
</form>
<br>
<h2>Search Result</h2>
<?php
// define variables and set to empty values
if ($_POST) {
  if(!empty($_POST["name"]))
  {
  $file = fopen("file.txt", "r") or die("Unable to open file!");

// Read from file
$lines = file('file.txt');
foreach($lines as $line)
{
  // Check if the line contains the string we're looking for, and print if it does
  if(strpos($line, $name) !== false)
    echo $line. "<br />";
}

// echo fread($myfile,filesize("newfile.txt"));
fclose($file);
  }
}
?>

</body>
</html>