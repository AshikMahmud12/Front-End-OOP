<?php 
	$destination = "images/".$_FILES['image']['name'];    
	$filename    = $_FILES['image']['tmp_name'];   // temporary directory when upload
	echo $destination;   // store file destination
	echo "<br/>";
	echo $filename;      // store file temporary location
	echo "<br/>";
	
	if (file_exists($destination))
		echo "Sorry, file already exists.";
    else
		move_uploaded_file($filename, $destination);
?>