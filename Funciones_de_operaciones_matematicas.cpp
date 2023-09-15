#include "Funciones_de_operaciones_matematicas.h"
#include <stdlib.h>
//lo que hacer
int numero_aleatorio_rango_asignado(int numeroinicio,int numerofinal)
{
    int numeroaleatorio;
    numeroaleatorio= numeroinicio + rand()%(numerofinal+1-numeroinicio);
    return numeroaleatorio;
}
