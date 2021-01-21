<?php


namespace TheRayCode\ChainOfResponsibility;


class RabbitHandler extends AbstractHandler
{
    public function handle(string $request): ?string
    {
        if ($request === "Carrot") {
            return "Rabbit: I'll eat the " . $request . ".\n";
        } else {
            return parent::handle($request);
        }
    }

}