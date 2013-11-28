<?php

	// Store data
    if ($_GET["temp"]) {

      	$myFile = "temp_data.txt";
		$fh = fopen($myFile, 'w');
		fwrite($fh, $_GET["temp"]);
		fclose($fh);
		
    }

?>