<?php


namespace TheRayCode\ChainOfResponsibility;


class SquirrelHandler extends AbstractHandler
{
    public function handle(string $request): ?string
    {
        if ($request === "Nut") {
            return "Squirrel: I'll eat the " . $request . ".<br/>";
        } else {
            return parent::handle($request);
        }
    }
}