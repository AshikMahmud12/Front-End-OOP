<?php
// Start the session
session_start();
?>
<!DOCTYPE html>
<html>
<body>
<h1>This is home page. Where set two session variables fav_color & fav_animal.</h1>
<?php
    // Set session variables
    $_SESSION["fav_color"] = "green";
    $_SESSION["fav_animal"] = "cat";
    echo "Session variables are set.";
?>

</body>
</html>