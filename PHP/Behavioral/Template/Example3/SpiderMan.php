<?php
include_once 'AbstractSuperHero.php';
class SpiderMan extends AbstractSuperHero
{

    protected function origin()
    {
        echo "<p>Origin: Bitten by a radioactive spider.</p>";
    }

    protected function powers()
    {
        echo "<p>Powers: Wall-crawling, enhanced strength, web-shooting.</p>";
    }

    protected function mission()
    {
        echo "<p>Mission: Protect New York City from villains.</p>";
    }
}