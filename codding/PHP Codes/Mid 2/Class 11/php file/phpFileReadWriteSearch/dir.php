<?php

$handle = opendir('./');
		
	while(false !== ($file=readdir($handle)))
		{
		echo "$file<br />";
		}

	closedir($handle);
?>