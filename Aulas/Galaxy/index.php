<?php

require "Carro.php";

$carro1 = new Carro();
$carro1->marca = "nissan";
$carro1->motor = "v8";
$carro1->statusLigado = 0;

echo $carro1->marca;