<?php

class ComedyTroupe implements Performer
{

    private $performers = [];

    public function add(Performer $performer) {
        $this->performers[] = $performer;
    }
    public function perform()
    {
        $performance = "Comedy Troupe starts performing:<br/>";
        foreach ($this->performers as $performer) {
            $performance .= $performer->perform();
        }
        return $performance;
    }
}