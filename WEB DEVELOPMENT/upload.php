<html>

<body>

    <?php
    $filename = $_FILES['file']['name'];


    $location = "music/" . $filename;

    if (move_uploaded_file($_FILES['file']['tmp_name'], $location)) {
        echo '<p> File Uploaded Successfully</p>';
    } else {
        echo '<b>Error Uploading.</b>';
    }

    ?>
</body>

</html>