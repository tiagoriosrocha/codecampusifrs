<?php

// Exercícicio HameKameKa
// Link: https://judge.beecrowd.com/pt/problems/view/2591
// Tiago Rios da Rocha
// 17 de Agosto de 2024

/********************************************************
IDEIA DE SOLUÇÃO:

1 - LEIO AS ENTRADAS

2 - DIVIDO A ENTRADA EM 2 PARTES:
    - ANTES DO 'k'
    - DEPOIS DO 'k'

3 - CONTO QUANTOS 'a' EXISTEM

4 - MULTIPLICO UMA QTD PELA OUTRA

5 - GERO A SAÍDA
**********************************************************/

/********************************************************/
/******    LEITURA DE DADOS DA ENTRADA ******************/
/********************************************************/


//leitura primeira linha (quantidade de linhas)
$qtdLinhas = readline();

//leitura das outras linhas e armazenamento em um vetor
$vetor = array();
for($i=0; $i<$qtdLinhas; $i++)
    $vetor[] = readline();


/********************************************************/
/*****************    PROCESSAMENTO *********************/
/********************************************************/

//para cada palavra informada na entrada, eu rodo o algoritmo abaixo:
for($i=0; $i<count($vetor); $i++){
    //pega um elemento do vetor e armazena na variável $elemento
    $elemento = $vetor[$i];
    
    //divido em 2 strings
    $pedaco = explode('k', $elemento);
    
    $contadorPrimeiraParte=0;
    $contadorSegundaParte=0;

    //conto quantos 'a' eu encontro na primeira parte
    $stringBusca = $pedaco[0];
    for($j=0; $j<strlen($stringBusca); $j++) 
        if($stringBusca[$j] == 'a')
            $contadorPrimeiraParte++;

    //conto quantos 'a' eu encontro na segunda parte
    $stringBusca = $pedaco[1];
    for($j=0; $j<strlen($stringBusca); $j++) 
        if($stringBusca[$j] == 'a')
            $contadorSegundaParte++;
    

    //calcula a quantidade de a necessária para ser impresso
    $total_a = $contadorPrimeiraParte * $contadorSegundaParte;
    
    #formato a saída
    $stringResultado = 'k';
    for($j=0; $j<$total_a; $j++)
        $stringResultado .= 'a';
    
    $stringResultado .= "\n";

    //imprime o resultado:
    echo $stringResultado;
}

?>