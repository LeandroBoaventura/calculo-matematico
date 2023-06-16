#include "matematicaBasica.h"

CaulculosMatematicos calculo;

uint16_t aleatorio1 = NULL;
uint16_t aleatorio2 = NULL;
uint16_t resultadoSoma = NULL;
int16_t resultadoSubtracao = NULL;
uint32_t resultadoMultiplicacao = NULL;
float resultadoDivisao = 0.0;

void setup()
{
    Serial.begin(9600);

    randomSeed(analogRead(0));
}

void loop()
{
    aleatorio1 = random(300);
    aleatorio2 = random(300);

    resultadoSoma = calculo.soma(aleatorio1, aleatorio2);
    calculo.imprimirResultado(String("soma"), aleatorio1, aleatorio2, resultadoSoma);

    resultadoSubtracao = calculo.subtracao(aleatorio1, aleatorio2);
    calculo.imprimirResultado(String("subtracao"), aleatorio1, aleatorio2, resultadoSubtracao);

    resultadoMultiplicacao = calculo.multiplicacao(aleatorio1, aleatorio2);
    calculo.imprimirResultado(String("multiplicacao"), aleatorio1, aleatorio2, resultadoMultiplicacao);

    resultadoDivisao = calculo.divisao(aleatorio1, aleatorio2);
    calculo.imprimirResultado(String("divisao"), aleatorio1, aleatorio2, resultadoDivisao);
}
