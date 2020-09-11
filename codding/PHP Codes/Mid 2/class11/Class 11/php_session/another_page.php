<?php
session_start();
?>
<!DOCTYPE html>
<html>
<body>
<h1>This is another page. Where show set session variables fav_color & fav_animal values.</h1>

<?php
echo "Value of session variable fav_color is " . $_SESSION["fav_color"] . "<br />";
echo "Value of session variable fav_animal is " . $_SESSION["fav_animal"];
?>

</body>
</html>