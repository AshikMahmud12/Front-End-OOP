<?php
session_start();
?>
<!DOCTYPE html>
<html>
<body>
<h1>Change session variables fav_color & fav_animal values.</h1>

<?php
$_SESSION["fav_color"] = 'red';
$_SESSION["fav_animal"] = 'dog';
echo "Now the value of session variable fav_color is " . $_SESSION["fav_color"] . "<br />";
echo "Now the value of session variable fav_animal is " . $_SESSION["fav_animal"];
?>

</body>
</html>