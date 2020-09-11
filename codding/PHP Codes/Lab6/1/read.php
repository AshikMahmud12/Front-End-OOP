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
$file = fopen("file.txt", "r") or die("Unable to open file!");

while(!feof($file)) {                     // feof full meaning is for "end-of-file"
	    echo fgets($file) . "<br />";
	}

// echo fread($myfile,filesize("newfile.txt"));
fclose($file);
?>
</body>
</html>