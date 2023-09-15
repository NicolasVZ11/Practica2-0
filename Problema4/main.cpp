#include <iostream>
#include <string.h>
#include "Operaciones_matematicas.h"
#include "Manejo_de_string.h"
using namespace std;

int main()
{
    std::string palabra_ingresada;
    int string_convertido;

    std::cout<<"Ingrese el numero en caracteres: ";cin>>palabra_ingresada;
    de_string_a_int(palabra_ingresada);
    string_convertido=de_string_a_int(palabra_ingresada);
    std::cout<<"\n";
    std::cout<<string_convertido;
    std::cout<<"\n";
    string_convertido= string_convertido + string_convertido;
    std::cout<<string_convertido;

    return 0;
}
