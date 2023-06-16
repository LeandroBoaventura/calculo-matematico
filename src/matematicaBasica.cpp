#include "matematicaBasica.h"

CaulculosMatematicos::CaulculosMatematicos(void)
{
}

uint16_t CaulculosMatematicos::soma(uint16_t numero1, uint16_t numero2)
{
    uint16_t resultadoSoma = (numero1 + numero2);
    return resultadoSoma;
}

uint16_t CaulculosMatematicos::subtracao(uint16_t numero1, uint16_t numero2)
{
    uint16_t resultadoSubtracao(numero1 - numero2);
    return resultadoSubtracao;
}

uint16_t CaulculosMatematicos::multiplicacao(uint16_t numero1, uint16_t numero2)
{
    uint16_t resultadoMultiplicacao = (numero1 * numero2);
    return resultadoMultiplicacao;
}

float CaulculosMatematicos::divisao(uint16_t numero1, uint16_t numero2)
{
    float resultadoDivisao = 0.0;

    if (numero2 == 0)
    {
        Serial.print("nao e possivel fazer a divisao");
    }
    else
    {
        resultadoDivisao = ((float)numero1 / (float)numero2);
    }
    
    return resultadoDivisao;
}

void CaulculosMatematicos::imprimirResultado(String texto, uint16_t numero1, uint16_t numero2, float resultadoFuncao)
{
    Serial.print(texto);

    Serial.print(" entre o numero: ");
    Serial.print(numero1);
    Serial.print(" e ");
    Serial.print(numero2);
    Serial.print(" o resultado e: ");
    Serial.println(resultadoFuncao);
    delay(1000);
}