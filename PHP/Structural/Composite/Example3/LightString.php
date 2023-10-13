<?php
include_once 'Light.php';
class LightString
{
    private array $lights = [];

    public function addLight($light): void {
        $this->lights[] = $light;
    }

    public function shine(): string {
        $output = '';
        foreach ($this->lights as $light) {
            $output .= $light->shine();
        }
        return $output;
    }
}