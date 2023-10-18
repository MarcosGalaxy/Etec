<?php

class Carro {
    public $marca;
    public $cor;
    public $modelo;
    public $fabricante;
    public $cambio;
    public $motor;
    public $combustivek;
    public $statusLigado;

    public function ligar(){
        if($this->statusLigado==0){
             $this->statusLigado=1;
            echo "Ligando carro";
        }else {
            echo "Carro já está ligado";
        }
    }
}

$carro1->ligar();
$carro1->ligar();