<?php


namespace TheRayCode\ChainOfResponsibility;


class CatHandler extends AbstractHandler
{
    public function handle(string $request): ?string
    {
        if ($request === "Catnip") {
            return "Cat: I'll eat the " . $request . ".<br/>";
        } else {
            return parent::handle($request);
        }
    }
}