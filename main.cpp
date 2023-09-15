#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "Funciones_de_operaciones_matematicas.h"
#include "Funciones_uso_de_letras.h"
int main()
{
    std::string Nuevoletras[200]={};
    std::string *puntero;
    std::string Letra_aleatoria, a;
    int contador =1;

    for (contador;contador<=200;)
    {
        Letra_aleatoria=generador_de_letra_mayuscula_aleatorio();
        Nuevoletras[contador]=Letra_aleatoria;
        std::cout<<"\n";
        std::cout<<Letra_aleatoria;
        std::cout<<contador;
        contador=contador + 1;
    }
    puntero = &Nuevoletras[0];
    std::cout<<cuantas_veces_se_repite_en_argumento(Nuevoletras[0]);
    return 0;
}
