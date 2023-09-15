#include <iostream>
#include <string.h>
#include "Operaciones_matematicas.h"

int de_string_a_int(std::string palabra_ingresada)
{
    int contador=0,posicion_numero,total=0;
    std::string letra, palabra_nueva;
    for (contador;contador<palabra_ingresada.size();)
    {
        letra=palabra_ingresada[contador];
        posicion_numero=potencia_de_un_numero(10,(palabra_ingresada.size()-(contador + 1)));
        if (letra == "0")
        {

        }
        if (letra == "1")
        {
            total=total + (1*posicion_numero);
        }
        if (letra == "2")
        {
            total=total + (2*posicion_numero);
        }
        if (letra == "3")
        {
            total=total + (3*posicion_numero);
        }
        if (letra == "4")
        {
            total=total + (4*posicion_numero);
        }
        if (letra == "5")
        {
            total=total + (5*posicion_numero);
        }
        if (letra == "6")
        {
            total=total + (6*posicion_numero);
        }
        if (letra == "7")
        {
            total=total + (7*posicion_numero);
        }
        if (letra == "8")
        {
            total=total + (8*posicion_numero);
        }
        if (letra == "9")
        {
            total=total + (9*posicion_numero);
        }
        contador=contador + 1;
    }
    return total;
}
