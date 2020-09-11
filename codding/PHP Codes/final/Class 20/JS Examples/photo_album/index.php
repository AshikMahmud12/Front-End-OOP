<html>
<head>
<title>This is my album portal</title>
<script type="text/javascript">
    function next( id ) {
        var myClasses = document.querySelectorAll('.imgDiv');

        for ( i = 0; i < myClasses.length; i++ ) {
            myClasses[i].style.display = 'none';
        }

        document.getElementById("imgDiv_" + id).style.display = "block";
    }

    function prev( id ) {
        var myClasses = document.querySelectorAll('.imgDiv');

        for ( i = 0; i < myClasses.length; i++ ) {
            myClasses[i].style.display = 'none';
        }

        document.getElementById("imgDiv_" + id).style.display = "block";
    }
</script>
<head>

<body>
My Very Simple Album<br><br>

<?php

    // Directory
    $directory = "images/";
    $files = scandir($directory);
    if( ($key = array_search('.', $files)) !== false ) {
        unset($files[$key]);
    }
    if( ($key = array_search('..', $files)) !== false ) {
        unset($files[$key]);
    }
    $num_files = count($files);

    $i = 1;
    foreach($files as $file) {
        $style = ( $i == 1 ) ? ' block' : 'none';
?>
        <div id="imgDiv_<?php echo $i; ?>" style="display: <?php echo $style; ?>" class="imgDiv">
            <img src="images/<?php echo $file; ?>" width="200px" height="200px">
            <input type="button" value="previous" onclick="prev('<?php echo $i - 1; ?>')" <?php echo ( $i - 1 == 0) ? 'disabled="disabled"' : ''; ?>>
            <input type="button" value="next" onclick="next('<?php echo $i + 1; ?>')" <?php echo ( $i == $num_files) ? 'disabled="disabled"' : ''; ?>>
        </div>
<?php
        $i++;
    }
?>

</body>

</html>