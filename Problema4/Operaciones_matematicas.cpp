#include <iostream>

int potencia_de_un_numero(int numero, int potencia)
{
    int  contador=1, total=1;
    if (potencia== 0)
    {
        return 1;
    }
    else
    {
        if (potencia>0)
        {
            for(contador;contador<=potencia;1)
            {
                total=total*numero;
                contador= contador + 1;
            }
        }
        else
        {
            while(contador!=potencia)
            {
                total=total*numero;
                contador= contador - 1;
                return total;
            }
        }
    }

    return total;

}
