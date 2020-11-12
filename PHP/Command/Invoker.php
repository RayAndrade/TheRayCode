<?php
class Invoker
{
    /**
     * @var Command
     */
    private $onStart;

    /**
     * @var Command
     */
    private $onFinish;

    /**
     * Initialize commands.
     */
    public function setOnStart(Command $command): void
    {
        $this->onStart = $command;
    }

    public function setOnFinish(Command $command): void
    {
        $this->onFinish = $command;
    }

    /**
     * The Invoker does not depend on concrete command or receiver classes. The
     * Invoker passes a request to a receiver indirectly, by executing a
     * command.
     */
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
