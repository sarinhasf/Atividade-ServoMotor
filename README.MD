<img width=100% src="https://capsule-render.vercel.app/api?type=waving&color=00CED1&height=120&section=header"/>


<h1 align="center">EmbarcaTech | Atividade Servomotor</h1>

Com o emprego do módulo PWM (do inglês, Pulse Width Modulation), presente no microcontrolador RP2040, projete um sistema com a ferramenta Pico SDK para simular o controle do ângulo de umservomotor. Esta simulação contemplará o motor micro servo padrão, presente no simulador de eletrônica online Wokwi. Para condução desta prática, será necessário simular os componentes listados abaixo.

1) Microcontrolador Raspberry Pi Pico W.
2) Servomotor – motor micro servo padrão – Wokwi.

## Objetivos:

- Compreender o funcionamento e a aplicação de comunicação serial em microcontroladores. 
- Aplicar os conhecimentos adquiridos sobre UART e I2C na prática. 
- Manipular e controlar LEDs comuns e LEDs endereçáveis WS2812. 
- Fixar o estudo do uso botões de acionamento, interrupções e Debounce. 
- Desenvolver um projeto funcional que combine hardware e software.

## Materiais utilizados:

Neste projeto, são utilizados os seguintes componentes conectados à placa BitDogLab:

- Matriz 5x5 de LEDs (endereçáveis) WS2812, conectada à GPIO 7. 
- LED RGB, com os pinos conectados às GPIOs (11, 12 e 13). 
- Botão A conectado à GPIO 5. 
- Botão B conectado à GPIO 6. 
- Display SSD1306 conectado via I2C (GPIO 14 e GPIO15).

## Lista de requisitos:

1. Considerando a GPIO 22, defina a sua frequência de PWM para, aproximadamente, 50Hz – período de 20ms. (20% da nota)

2. Defina o ciclo ativo do módulo PWM para 2.400µs (microssegundos) – Ciclo de Trabalho (Duty Cycle) de 0,12%. isto ajustará a flange (braço) do servomotor para a posição de, aproximadamente, 180 graus. Aguarde 05 segundos nesta posição. (10% da nota)

3. Defina o ciclo ativo do módulo PWM para 1.470µs(microssegundos) – Ciclo de Trabalho (Duty Cycle) de 0,0735%. Isto ajustará a flange do servomotor para a posição de, aproximadamente, 90 graus. Aguarde 05 segundos nesta
posição. (10% da nota)

4. Defina o ciclo ativo do módulo PWM para 500µs (microssegundos) – Ciclo de Trabalho (Duty Cycle) de 0,025%. Isto ajustará a flange do servomotor para a posição de, aproximadamente, 0 graus. Aguarde 05 segundos nesta posição. (10% da nota)

5. Após a realização das proposições anteriores, crie uma rotina para movimentação periódica do braço do servomotor entre os ângulos de 0 e 180 graus. Obs.: a movimentação da flange deve ser suave, recomenda-se o incremento de ciclo ativo de ±5µs, com um atraso de ajuste de 10ms. (35% da nota)

6. Com o emprego da Ferramenta Educacional BitDogLab, faça um experimento com o código deste exercício utilizando o LED RGB – GPIO 12. O que o discente observou no comportamento da iluminação do referido LED? (15% da nota) (A resposta da pergunta está no tópico "Passos para construção do projeto" - tópico 2)

## Passos para construção do projeto: 

1. O primeiro passo foi achar um divisor de clock e wrap para que a frequência fosse equivalente a 50Hz e Periodo a 20ms. Para isso aplicamos a formula da Frequencia do PWM visto em aula, segue calculo abaixo: 

![Aplicação da formula](calculo.png)

2. Com os valores encontrados, segui os passos que foi pedido no projeto desenvolvendo a lógica requisita. Por último, adicionei um LED e observei que a luminosidade do LED variava enquanto ia incrementado ou decrementando o duty cycle. 


## Tecnologias:

1. Git e Github;
2. VScode;
3. Linguagem C;
4. Simulador Wokwi;
5. Placa de desenvolvimento BitDogLab

## 💻 Instruções para Importar, Compilar e Rodar o Código Localmente:

Siga os passos abaixo para clonar o repositório, importar no VS Code usando a extensão do **Raspberry Pi Pico Project**, compilar e executar o código.

1. **Clone o repositório para sua máquina local**  
   Abra o terminal e execute os comandos abaixo:
   ```bash
   git clone https://github.com/sarinhasf/Atividade-ServoMotor.git
   cd projeto

2. **Abra o VS Code e instale a extensão "Raspberry Pi Pico Project" (caso não já a tenha instalada)**
 - No VS Code, vá até "Extensões" (Ctrl+Shift+X)
 - Pesquise por "Raspberry Pi Pico Project"
 - Instale a extensão oficial

3. **Importe o projeto no VS Code**
 - No VS Code, abra o projeto que foi clonado

## Desenvolvedora:
 
<table>
  <tr>
    <td align="center"><img style="" src="https://avatars.githubusercontent.com/u/143294885?v=4" width="100px;" alt=""/><br /><sub><b> Sara Souza </b></sub></a><br />👨‍💻</a></td>
</table>

## Link do video de apresentação: 

<table>
  <tr>
    <td align="center"> <sub><b> https://youtube.com/shorts/cNSTPe96JVw?si=U7tArYTkF_9oLuaY </b></td>
    </tr>
</table>
