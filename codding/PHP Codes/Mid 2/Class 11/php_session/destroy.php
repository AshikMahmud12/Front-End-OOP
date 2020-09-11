<?php
session_start();
?>
<!DOCTYPE html>
<html>
<body>
<h1>Destroy session variables fav_color & fav_animal values.</h1>

<?php
session_destroy();
echo "Now session variables fav_color & fav_animal are empty.";
?>

</body>
</html>