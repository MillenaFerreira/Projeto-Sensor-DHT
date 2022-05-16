
Sensor de DHT11/22

## Equipe

* Millena Ferreira
* Renato Francisco
* Gustavo Henrique
* Emanuel Miguel
* Lucas Francisco


## Introdução

Esse  projeto  aborda  o  sensor  de  temperatura  DHT22 que  será  responsável  por  melhorar  o sistema  de  exaustão/ventilação  de  um  galpão  em  que  ocorre  a  produção,  trazendo  mais conforto e condições dignas de trabalho aos funcionários do setor. Este projeto  tem  como  seu  cérebro  o  PIC16F887  que  será  responsável  por  toda  lógica  de programação,  que  com  auxílio  de  um  Display  LCD  fará  o  controle  e  exibição  de  valores mínimos, máximos e médios das grandezas para o período de X horas configuráveis.

## Ambiente Controlado

O ambiente controlado é uma área cujos os parâmetros são devidamente controlados por aparelhos de monitoramento de temperatura, em especifico esses equipamentos controlam a pressão, temperatura, emissões radioativas, umidade e segregação. 
Um exemplo claro de ambiente controlado é o laboratório. Nesse ambiente, sabemos que existe a necessidade de temperatura e pressão específicas, tanto para manter a integridade de materiais e substâncias, como para a segurança dos técnicos.
O projeto abordará a importância de um ambiente controlado e do monitoramento de temperatura com um sensor e seus respectivos componentes.


## A Importância do planejamento de um ambiente controlado

Planejar o controle térmico de um ambiente leva tempo e é um processo contínuo, no mercado de análise e controle de temperatura é possível encontrar inúmeros aparelhos e registradores, com diversas funções e opcionais. Por isso, é preciso parar para pensar quais têm, efetivamente, as funcionalidades que realmente necessita no seu ambiente controlado, este projeto (neste projeto) mostrará um aparelho nesse ramo que pretende atender os seus requisitos de forma adequada e planejada, dessa forma conseguirá ter um bom custo benefício e qualidade em apenas um produto. Para ajudar na decisão eis que determinamos o seu conjunto de adequações deste dispositivo :

•	Capacidade de Armazenamento: essa memória é capaz de armazenar MCU 14KB flash 368 RAM 36 I/O (PIC16F887). A taxa de amostragem é de até 0,5Hz (2 leituras por segundo).

•	Número de amostras ajustável: o manual estará disponível no final deste documento

•	Faixa de monitoramento e precisão: este aparelho é de uma precisão que é boa para a medição de temperatura entre - 40ºC e 80ºC, com +- 0,5ºC de precisão.

•	Dimensão: 

| Figura 1: Placa |
|:--:|
| ![image](https://user-images.githubusercontent.com/88831304/168298909-886dfd6e-b0e6-4f81-810a-69289bba0e09.png) |
| Fonte: Projetista |

## Monitoramento de Temperatura

O monitoramento de temperatura tem como foco o acompanhamento contínuo de variação da temperatura, seja em um ambiente de armazenamento ou na supervisão de diversos processos técnicos.
Um equipamento de monitoramento de temperatura é capaz de realizar a medição em ambientes controlados, conforme a sua necessidade. 
Os dispositivos mais tradicionais possuem uma conexão com o sensor de temperatura e tem a função de controlar e maximizar um ambiente mantendo a eficiência do equipamento, que será utilizado neste projeto.
Existem diversos sensores de acordo com a aplicação como, por exemplo o LM34/35/335, TMP36 e DS18B20 todos eles são usados para a mesma função, este projeto utilizará a família DHT por conta da sua viabilidade e acessibilidade além de ter um baixo custo no mercado e a sua precisão ao medir a temperatura.
DHT11 é o “irmão mais velho”, ou seja, tem menos benefícios em relação ao DHT22, portanto, um preço mais alto. O DHT11 pode ser usado para projetos onde não a necessita de uma alta precisão de medição, enquanto se desejar algo mais preciso deve escolher o DHT22. O DHT22 também não é de alta precisão, mas tem um desempenho maior para a maioria dos projetos do DIY “Faça você mesmo”.

| Figura 2: Sensores|
|:--:|
|![image](https://user-images.githubusercontent.com/88831304/168301917-11105c64-f632-49d1-84e8-14afcae597ad.png)
| Fonte: Baú da Eletrônica |

## DHT22

O sensor de umidade e temperatura DHT22 é um sensor que mede a umidade do ar em porcentagens 0 a 100% e a temperatura no intervalo de - 40 a 80ºC com pressão de +-2% para medição de temperatura, por essas características, utilizado em projetos que existem apenas um pino e pode ser integrado a qualquer plataforma micro controladora com o PIC que será utilizado neste projeto.
Alimentação e pinos:  A tensão de alimentação deve ser de 3 –5 VDC. Um capacitor com valor de 100uF pode ser adicionado entre VDD e GND para filtragem de ondas.
Atenção ao utiliza-lo:

•	A temperatura de soldagem deve ser inferior a 260 ºC.

•	Evite usar o sensor em condições de orvalho.

•	Não use este produto em dispositivos de segurança ou parada de emergência ou qualquer outra ocasião em que a falha do DHT22 possa causar danos pessoais.

| Figura 3: DTH22 |
|:--:|
![image](https://user-images.githubusercontent.com/88831304/168302642-c52703fb-7a31-4347-9d91-14f809c70a3b.png)
| Tabela |

| Figura 4: Pinagem do DHT22 |
|:--:|
![image](https://user-images.githubusercontent.com/88831304/168300299-5e3a8919-e9f3-425b-813b-1fa6384a43d0.png)
| Pinagem do DHT22 |


## PIC16F887

O PIC16F887 é um micro controlador de 8 bits da Microchip. O IC de 40 pinos possui ADC de 14 canais e 10 bits, tornando-o adequado para aplicações que exigem mais entradas ADC. O IC também possui 2 Comparadores, 2 Temporizadores (8 bits e 16 bits) e suporta protocolos de comunicação SPI, I2C e UART.


PIC16F887
CPU	8 – bits PIC
NÚMEROS DE PINOS	40
TENSÃO DE OPERAÇÃO	2 a 5,5V
OSCILADOR EXTERNO	Suporta até 20MHz
OSCILADOR INTERNO	8MHz  a  32KHz
MEMORIA DE PROGRAMAÇÃO	14KB
RAM BYTES	368
DATA EEPROM	256 bytes

| Figura 1: Estrutura |
|:--:|
![image](https://user-images.githubusercontent.com/88831304/168300992-7938fd02-d67d-4ff8-b8df-52e2ffe59010.png)
| Tabela |

## LCD 16x02

O Display LCD 16x2 é um modelo de display vastamente utilizado em projetos onde se necessita uma interface homem-máquina (IHM). Ele é composto por 16 colunas e 2 linhas com a escrita na cor branca e sua backlight (luz de fundo) azul para exibição de caracteres, letras e números de forma clara e nítida, melhorando a visibilidade para quem recebe a informação. 
Ele utiliza o controlador HD44780, utilizado em toda indústria de LCD's como base de interface que pode ser operado em 4 ou 8-bits paralelamente. Sua conexão é feita através de 16 pinos, sendo 12 deles para conexão básica com o micro controlador e 11 deles pinos de entrada/saída (I/O) e os demais pinos para ajuste de contraste através de potenciômetros, trimpots e afins e para a alimentação da backlight. Também é possível fazer a comunicação I2C com um micro controlador. Fácil interação com qualquer micro controlador, como Arduino, Raspberry, PIC, entre outros, o display 16x2 ideal para empresas de tecnologia, projetistas, estudantes, hobbys às e iniciantes na profissão de programação.

LCD 16X02
TENSÃO DE OPERAÇÃO	4,5V  a  5,5V
TENSÃO DE ENTRADA	DC 0,3V a +0,3V
TEMPERATURA DE OPERAÇÃO MÁX.	+50°C
CORRENTE	1.0mA  a 1.5mA
CORRENTE DO BLACKLIGHT	75mA  a  200mA
DATA DE ENTRADA	4 a 8 bits
CONTROLADOR	HD447780

| Figura 1: =DISPLAY LCD |
|:--:|
![image](https://user-images.githubusercontent.com/88831304/168301131-e7cd4ce0-8524-41f9-b305-04fc5ebd0ecb.png)
| Pinagem do LCD |

## Objetivo do projeto

Este projeto tem como objetivo o monitoramento do controle de temperatura da empresa. O projeto utilizará um sensor para detectar a temperatura ambiente. E por meio de um micro controlador o PIC16F887 também serão exibidos valores máximos e mínimos de temperatura e umidade do ambiente. Esses valores serão exibidos no LCD 16x02, e com a ajuda de um teclado fará a integração entre o PIC e o LCD. 




