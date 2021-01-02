<?php


namespace TheRayCode\ChainOfResponsibility;


class MonkeyHandler extends AbstractHandler
{
    public function handle(string $request): ?string
    {
        if ($request === "Banana") {
            return "Monkey: I'll eat the " . $request . ".<br/>";
        } else {
            return parent::handle($request);
        }
    }
}