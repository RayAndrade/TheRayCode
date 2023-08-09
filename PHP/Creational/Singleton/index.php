<?php

namespace TheRayCode\Singleton;
// index.php

include_once 'Singleton.php';

$instance1 = Singleton::getInstance();
$instance2 = Singleton::getInstance();

if ($instance1 === $instance2) {
    echo "Both instances are the same.\n<br/>";
    echo "instance1:";
    echo $instance1->someMethod() . "<br/>"; // Output: I'm a singleton!
    echo "instance2";
    echo $instance2->someMethod() . "<br/>"; // Output: I'm a singleton!

}
?>

