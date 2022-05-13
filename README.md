
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

Esse  projeto  aborda  o  sensor  de  temperatura  DHT22 que  será  responsável  por  melhorar  o sistema  de  exaustão/ventilação  de  um  galpão  em  que  ocorre  a  produção,  trazendo  mais conforto e condições dignas de trabalho aos funcionários do setor. Este projeto  tem  como  seu  cérebro  o  PIC16F887  que  será  responsável  por  toda  lógica  de programação,  que  com  auxílio  de  um  Display  LCD  fará  o  controle  e  exibição  de  valores mínimos, máximos e médios das grandezas para o período de X horas configuráveis.

## A Importância do planejamento de um ambiente controlado

Planejar o controle térmico de um ambiente leva tempo e é um processo contínuo, no mercado de análise e controle de temperatura é possível encontrar inúmeros aparelhos e registradores, com diversas funções e opcionais. Por isso, é preciso parar para pensar quais têm, efetivamente, as funcionalidades que realmente necessita no seu ambiente controlado, este projeto (neste projeto) mostrará um aparelho nesse ramo que pretende atender os seus requisitos de forma adequada e planejada, dessa forma conseguirá ter um bom custo benefício e qualidade em apenas um produto. Para ajudar na decisão eis que determinamos o seu conjunto de adequações deste dispositivo 
•	Capacidade de Armazenamento: essa memória é capaz de armazenar MCU 14KB flash 368 RAM 36 I/O (PIC16F887). A taxa de amostragem é de até 0,5Hz (2 leituras por segundo).
•	Número de amostras ajustável: o manual estará disponível no final deste documento

•	Faixa de monitoramento e precisão: este aparelho é de uma precisão que é boa para a medição de temperatura entre - 40ºC e 80ºC, com +- 0,5ºC de precisão.

•	Dimensão: 
IMAGEM: ![image](https://user-images.githubusercontent.com/88831304/168298909-886dfd6e-b0e6-4f81-810a-69289bba0e09.png)

## Monitoramento de Temperatura

O monitoramento de temperatura tem como foco o acompanhamento contínuo de variação da temperatura, seja em um ambiente de armazenamento ou na supervisão de diversos processos técnicos.
Um equipamento de monitoramento de temperatura é capaz de realizar a medição em ambientes controlados, conforme a sua necessidade. 
Os dispositivos mais tradicionais possuem uma conexão com o sensor de temperatura e tem a função de controlar e maximizar um ambiente mantendo a eficiência do equipamento, que será utilizado neste projeto.
Existem diversos sensores de acordo com a aplicação como, por exemplo o LM34/35/335, TMP36 e DS18B20 todos eles são usados para a mesma função, este projeto utilizará a família DHT por conta da sua viabilidade e acessibilidade além de ter um baixo custo no mercado e a sua precisão ao medir a temperatura.
DHT11 é o “irmão mais velho”, ou seja, tem menos benefícios em relação ao DHT22, portanto, um preço mais alto. O DHT11 pode ser usado para projetos onde não a necessita de uma alta precisão de medição, enquanto se desejar algo mais preciso deve escolher o DHT22. O DHT22 também não é de alta precisão, mas tem um desempenho maior para a maioria dos projetos do DIY “Faça você mesmo”.

IMAGEM:![image](https://user-images.githubusercontent.com/88831304/168299313-c930038e-47c7-47d3-a438-72dc52af8100.png)

IMAGEM:![image](https://user-images.githubusercontent.com/88831304/168299338-0e998a60-dd3a-4e92-aa06-d06ef2a5513c.png)

IMAGEM:![image](https://user-images.githubusercontent.com/88831304/168299365-8adbf5c3-bdf1-422f-9052-511940e3a2a2.png)

IMAGEM:![image](https://user-images.githubusercontent.com/88831304/168299396-6e8ee9d5-a60e-45b7-a207-231b141533d9.png)


IMAGEM:![image](https://user-images.githubusercontent.com/88831304/168299413-ecc2e950-0093-4c43-8f0b-0877e611cf8c.png)

## DHT22

O sensor de umidade e temperatura DHT22 é um sensor que mede a umidade do ar em porcentagens 0 a 100% e a temperatura no intervalo de - 40 a 80ºC com pressão de +-2% para medição de temperatura, por essas características, utilizado em projetos que existem apenas um pino e pode ser integrado a qualquer plataforma micro controladora com o PIC que será utilizado neste projeto.
Alimentação e pinos:  A tensão de alimentação deve ser de 3 –5 VDC. Um capacitor com valor de 100uF pode ser adicionado entre VDD e GND para filtragem de ondas.
Atenção ao utiliza-lo:
•	A temperatura de soldagem deve ser inferior a 260 ºC.
•	Evite usar o sensor em condições de orvalho.
•	Não use este produto em dispositivos de segurança ou parada de emergência ou qualquer outra ocasião em que a falha do DHT22 possa causar danos pessoais.




