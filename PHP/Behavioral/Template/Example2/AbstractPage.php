<?php

abstract class AbstractPage
{
// Template method
    public final function render() {
        $this->header();
        $this->body();
        $this->footer();
    }

    // Common methods
    protected function header() {
        echo "<h1>Welcome to our site!</h1>";
    }

    protected function footer() {
        echo "<p>Footer information</p>";
    }

    // Abstract methods to be implemented by concrete classes
    abstract protected function body();
}