<?php


namespace TheRayCode\ChainOfResponsibility;


class MouseHandler extends AbstractHandler
{
    public function handle(string $request): ?string
    {
        if ($request === "Cheese") {
            return "Mouse: I'll eat the " . $request . ".<br/>";
        } else {
            return parent::handle($request);
        }
    }
}