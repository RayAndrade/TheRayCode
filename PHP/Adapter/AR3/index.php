<?php
class Facebook {
    public function post($msg){
        echo "made post to facebook";
    }
}

$facebook = new Facebook();

$msg = getMessageFromUser();

$facebook->post($msg);