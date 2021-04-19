<h2 id="toc"> Exercícios feitos na semana 1 </h2>

Aqui contém todos os exercícios feitos na semana 1, o problema apresentado no exercício, a documentação do código e o código em si.

Navegue entre os exercícios abaixo:

* [1000 - Hello World](#1000)
* [1001 - Extremely Basic](#1001)
* [1003 - Simple Sum](#1003)
* [1005 - Average1](#1005)
* [1010 - Simple Calculate](#1010)
* [1011 - Sphere](#1011)
* [1014 - Consumption](#1014)
* [1016 - Distance](#1016)
* [1018 - Banknotes](#1018)
* [1020 - Age In Days](#1020)
* [1021 - Banknotes And Coins](#1021)
* [2374 - Pneu](#2374)
* [2413 - Busca Na Internet](#2413)

<hr id="1000">

## 1000 - Hello World

É imprimido "Hello World!" na tela.

[Acesse o problema.](https://www.urionlinejudge.com.br/judge/pt/problems/view/1000)

[Veja minha solução ao problema.](https://github.com/LeoBardineo/ufrj-treinamento-obi/blob/main/semana-01/1000_HelloWorld.cpp)

[Volte aos tópicos de exercícios.](#toc)

<hr id="1001">

## 1001 - Extremely Basic

É pedido duas entradas pelo usuário, A e B, para que então seja realizada a soma e seu valor seja atribuído ao X, que é então imprimido na tela.

[Acesse o problema.](https://www.urionlinejudge.com.br/judge/pt/problems/view/1001)

[Veja minha solução ao problema.](https://github.com/LeoBardineo/ufrj-treinamento-obi/blob/main/semana-01/1001_ExtremelyBasic.cpp)

[Volte aos tópicos de exercícios.](#toc)

<hr id="1003">

## 1003 - Simple Sum

Feito da mesma forma que o [1001](#1001), pedindo duas entradas pelo usuário, A e B, e utilizando a variável SOMA para atribuir a soma entre A e B.

[Acesse o problema.](https://www.urionlinejudge.com.br/judge/pt/problems/view/1003)

[Veja minha solução ao problema.](https://github.com/LeoBardineo/ufrj-treinamento-obi/blob/main/semana-01/1003_SimpleSum.cpp)

[Volte aos tópicos de exercícios.](#toc)

<hr id="1005">

## 1005 - Average1

É pedido duas entradas double, A e B, que correspondem a 2 notas de um aluno, e então é calculado a média, com A tendo peso 3.5, e B 7.5, e como é pedido no problema, é imprimido na tela "MEDIA = " e a média com 5 dígitos de precisão.

[Acesse o problema.](https://www.urionlinejudge.com.br/judge/pt/problems/view/1005)

[Veja minha solução ao problema.](https://github.com/LeoBardineo/ufrj-treinamento-obi/blob/main/semana-01/1005_Average1.cpp)

[Volte aos tópicos de exercícios.](#toc)

<hr id="1010">

## 1010 - Simple Calculate

É lido o código de uma peça 1, o número de peças 1, o valor de cada peça 1, e o mesmo para a peça 2, é então calculado o valor a ser pago ao multiplicar o valor da peça 1 com o número de peças 1 e somando com a mesma operação à peça 2. Logo, é imprimido "VALOR A PAGAR: " e o valor calculado.

[Acesse o problema.](https://www.urionlinejudge.com.br/judge/pt/problems/view/1010)

[Veja minha solução ao problema.](https://github.com/LeoBardineo/ufrj-treinamento-obi/blob/main/semana-01/1010_SimpleCalculate.cpp)

[Volte aos tópicos de exercícios.](#toc)

<hr id="1011">

## 1011 - Sphere

É lido o raio de uma esfera, e então calculado o volume dela, e então imprimido na tela "VOLUME = " e o volume calculado.

[Acesse o problema.](https://www.urionlinejudge.com.br/judge/pt/problems/view/1011)

[Veja minha solução ao problema.](https://github.com/LeoBardineo/ufrj-treinamento-obi/blob/main/semana-01/1011_Sphere.cpp)

[Volte aos tópicos de exercícios.](#toc)

<hr id="1014">

## 1014 - Consumption

É lido a distância total percorrida em quilômetros e o total de combustível gasto em litros, e dividido os dois para então encontrar o valor de consumo médio do automóvel, e imprimido na tela o valor e " km/l".

[Acesse o problema.](https://www.urionlinejudge.com.br/judge/pt/problems/view/1014)

[Veja minha solução ao problema.](https://github.com/LeoBardineo/ufrj-treinamento-obi/blob/main/semana-01/1014_Consumption.cpp)

[Volte aos tópicos de exercícios.](#toc)

<hr id="1016">

## 1016 - Distance

É lido a distância entre os dois carros em km, e como fala no problema, um consegue se afastar do outro 1 quilômetro a cada 2 minutos, então para calcular quanto tempo leva para o carro Y tomar distância do outro, basta multiplicar a distância lida por 2, para então imprimir na tela esse valor e " minutos".

[Acesse o problema.](https://www.urionlinejudge.com.br/judge/pt/problems/view/1016)

[Veja minha solução ao problema.](https://github.com/LeoBardineo/ufrj-treinamento-obi/blob/main/semana-01/1016_Distance.cpp)

[Volte aos tópicos de exercícios.](#toc)

<hr id="1018">

## 1018 - Banknotes

É lido um valor inteiro, para então saber em quantas notas de 100, 50, 20, 10, 5, 2 e 1 esse valor pode ser decomposto.

Para as notas de 100, basta pegar esse valor e dividir por 100, para as subsequentes, basta pegar o resto da divisão da nota anterior e dividir pelo número da própria nota. 

Por exemplo, a nota de 50 pega o resto da divisão do valor por 100 e divide por 50, a de 20, pega o resto da divisão do valor por 100 e 50, e divide por 20, e assim vai indo até a de 1.

Post scriptum: o código poderia ser mais legível usando uma variável auxiliar que pegaria o resto da divisão anterior.

[Acesse o problema.](https://www.urionlinejudge.com.br/judge/pt/problems/view/1018)

[Veja minha solução ao problema.](https://github.com/LeoBardineo/ufrj-treinamento-obi/blob/main/semana-01/1018_Banknotes.cpp)

[Volte aos tópicos de exercícios.](#toc)

<hr id="1020">

## 1020 - Age In Days

É lido um valor inteiro correspondente à idade de uma pessoa em dias, e assim como no [1018](#1018), é feito a divisão e o resto da divisão para descobrir o ano, o mês e os dias.

Para descobrir o ano, é preciso pegar os dias e dividir por 365, para o mês, é pego o resto da divisão dos dias com 365 e divido por 30, e então é pego o resto da divisão dos dias por 365 e 30.

Então, é imprimido o ano concatenando " ano(s)", com uma quebra de linha, e no mesmo modelo é imprimido o mês e os dias.

[Acesse o problema.](https://www.urionlinejudge.com.br/judge/pt/problems/view/1020)

[Veja minha solução ao problema.](https://github.com/LeoBardineo/ufrj-treinamento-obi/blob/main/semana-01/1020_AgeInDays.cpp)

[Volte aos tópicos de exercícios.](#toc)

<hr id="1021">

## 1021 - Banknotes And Coins

Assim como no [1018](#1018), é lido um ponto flutuante com duas casas decimais para ser decomposto em notas (100, 50, 20, 10, 5, 2), porém, agora nesse problema também é pedido que seja decomposto em moedas (1, 0.50, 0.25, 0.10, 0.05, 0.01).

Para pegar as notas, foram feitos da mesma maneira que no [1018](#1018), e nas moedas foi pego a parte decimal do valor, multiplicado por 100, e feito da mesma maneira que as notas.

[Acesse o problema.](https://www.urionlinejudge.com.br/judge/pt/problems/view/1021)

[Veja minha solução ao problema.](https://github.com/LeoBardineo/ufrj-treinamento-obi/blob/main/semana-01/1021_BanknotesAndCoins.cpp)

[Volte aos tópicos de exercícios.](#toc)

<hr id="2374">

## 2374 - Pneu

Mensagem de exemplo.

[Acesse o problema.](https://www.urionlinejudge.com.br/judge/pt/problems/view/2374)

[Veja minha solução ao problema.](https://github.com/LeoBardineo/ufrj-treinamento-obi/blob/main/semana-01/2374_Pneu.cpp)

[Volte aos tópicos de exercícios.](#toc)

<hr id="2413">

## 2413 - Busca Na Internet

Mensagem de exemplo.

[Acesse o problema.](https://www.urionlinejudge.com.br/judge/pt/problems/view/2413)

[Veja minha solução ao problema.](https://github.com/LeoBardineo/ufrj-treinamento-obi/blob/main/semana-01/2413_BuscaNaInternet.cpp)

[Volte aos tópicos de exercícios.](#toc)
