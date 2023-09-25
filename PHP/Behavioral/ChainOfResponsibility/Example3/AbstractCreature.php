<?php
include_once "Creature.php";
class AbstractCreature implements Creature
{
    protected $name;
    protected $reason;
    protected $nextCreature;

    public function setNext(Creature $creature)
    {
        $this->nextCreature = $creature;
        return $this;
    }

    public function swallow()
    {
        echo "She swallowed the {$this->name} {$this->reason}<br>";
        if ($this->nextCreature !== null) {
            $this->nextCreature->swallow();
        }
    }
}