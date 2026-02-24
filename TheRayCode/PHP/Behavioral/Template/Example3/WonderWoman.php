<?php

class WonderWoman extends AbstractSuperHero
{

    protected function origin()
    {
        echo "<p>Origin: Princess of the Amazons from Themyscira.</p>";
    }

    protected function powers()
    {
        echo "<p>Powers: Super strength, speed, and agility. Wields the Lasso of Truth.</p>";
    }

    protected function mission()
    {
        echo "<p>Mission: Bring peace to the human world.</p>";
    }
}