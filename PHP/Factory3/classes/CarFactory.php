<?php

class CarFactory
{
    public static function build($type=''){
        if ($type==''){
            throw new Exception('Invalid Car Type');
        }
    }
}