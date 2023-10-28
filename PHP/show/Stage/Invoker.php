<?php

class Invoker
{
    private $onStart;
    private $onFinish;

    public function setOnStart(Command $command): void
    {
        $this->onStart = $command;
    }

    public function setOnFinish(Command $command): void
    {
        $this->onFinish = $command;
    }
    public function doSomethingImportant(): void
    {
        echo "Invoker:  Makes a request<br/>";
        if ($this->onStart instanceof Command) {
            $this->onStart->execute();
        }

        echo "Invoker: does the action...<br/>";
        echo "Invoker: Makes another request<br/>";
        if ($this->onFinish instanceof Command) {
            $this->onFinish->execute();
        }
    }
}