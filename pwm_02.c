#include <stdio.h> //biblioteca padrão da linguagem C
#include "pico/stdlib.h" //subconjunto central de bibliotecas do SDK Pico
#include "hardware/pwm.h" //biblioteca para controlar o hardware de PWM

#define PWM_PINO 22 //pino conectado ao servomotor

int constante = 500;

//Defina a sua frequência de PWM para, aproximadamente, 50Hz – período de 20ms: 
//para encontrar esse valor fiz por tentativa e erro aplicando na formula, e observei que
//mantendo do divisor de clock como 2.0 e mudando o wrap para 1250 cheguei a esses
//valores pedidos aproximadamente!

void config_pwm(){
    stdio_init_all(); //inicializa o sistema padrão de I/O

    gpio_set_function(PWM_PINO, GPIO_FUNC_PWM); //habilitar o pino GPIO como PWM

    uint slice = pwm_gpio_to_slice_num(PWM_PINO); //obter o canal PWM da GPIO (slice)

    pwm_set_clkdiv(slice, 125.0); //define o divisor de clock do PWM

    pwm_set_wrap(slice, 19999); //definir o valor de wrap

    pwm_set_gpio_level(PWM_PINO, 2400); //definir o ciclo de trabalho (duty cycle) do pwm dado em microsegundo
    pwm_set_enabled(slice, true); //habilita o pwm no slice correspondente
}

void movimento_primario(){
    sleep_ms(5000);
    pwm_set_gpio_level(PWM_PINO, 1470); //definir o ciclo de trabalho (duty cycle) do pwm dado em microsegundo
    sleep_ms(5000);
    pwm_set_gpio_level(PWM_PINO, 500); //definir o ciclo de trabalho (duty cycle) do pwm dado em microsegundo
    sleep_ms(5000);
}

void incrementa(){
  constante+=5; 
  pwm_set_gpio_level(PWM_PINO, constante); //definir o ciclo de trabalho (duty cycle) do pwm dado em microsegundo
  sleep_ms(10);
}

void decrementa(){
  constante-=5; 
  pwm_set_gpio_level(PWM_PINO, constante); //definir o ciclo de trabalho (duty cycle) do pwm dado em microsegundo
  sleep_ms(10);
}

void movimento_secundario(){
  incrementa();
      
  if(constante >= 2400){
    while(1){
      decrementa();
      if(constante <= 500){
        break;
      }

    }
  }
}

int main()
{
   config_pwm();

   movimento_primario();

   while(1){
      movimento_secundario();
   }
}