#ifndef _CALCULOMATEMATICO_H
#define _CALCULOMATEMATICO_H

#include <Arduino.h>

class CaulculosMatematicos
{
public:
    CaulculosMatematicos(void);
    uint16_t soma(uint16_t numero1, uint16_t numero2);
    uint16_t subtracao(uint16_t numero1, uint16_t numero2);
    uint16_t multiplicacao(uint16_t numero1, uint16_t numero2);
    float divisao(uint16_t numero1, uint16_t numero2);
    void imprimirResultado(String texto, uint16_t numero1, uint16_t numero2, float resultadoFuncao );
};

#endif
