<?php

interface AirplaneBuilder
{
    public function buildWings();
    public function buildEngine();
    public function buildCockpit();
    public function getAirplane();
}