<?php
$input = "MADAM"
echo '<br> Input String '. $input

$reverse = strrev($input)
echo '<br> Ouput String '. $reverse

if($input == $reverse) {
    echo '<br> '.$input.'  is a palindrome'
}
else {
    echo '<br>'.$input.' is not a palindrome'
}
?>
