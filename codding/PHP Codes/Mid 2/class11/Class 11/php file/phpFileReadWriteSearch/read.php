<?php
$myfile = fopen("newfile.txt", "r") or die("Unable to open file!");

while(!feof($myfile)) {                     // feof full meaning is for "end-of-file"
	    echo fgets($myfile) . "<br />";
	}

// echo fread($myfile,filesize("newfile.txt"));
fclose($myfile);
?>