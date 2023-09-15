#include "Funciones_uso_de_letras.h"
#include <string.h>
#include <iostream>
#include <string.h>
#include "Funciones_de_operaciones_matematicas.h"
//lo que hacen
std::string generador_de_letra_mayuscula_aleatorio()
{
    std::string Letras[] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
    std::string *puntero;
    int Numero_para_asignar_letra;

    Numero_para_asignar_letra=numero_aleatorio_rango_asignado(0,25);
    puntero=&Letras[0];
    puntero=puntero+Numero_para_asignar_letra;

    return *puntero;
}

int cuantas_veces_se_repite_en_argumento(std::string &Direccion)
{
    int contador_de_cuantas_veces_se_repite_en_argumento = 0;
    int nA=0,nB=0,nC=0,nD=0,nE=0,nF=0,nG=0,nH=0,nI=0,nJ=0,nK=0,nL=0,nM=0,nN=0,nO=0,nP=0,nQ=0,nR=0,nS=0,nT=0,nU=0,nV=0,nW=0,nX=0,nY=0,nZ=0;
    std::string *apuntador=&Direccion;

    for (contador_de_cuantas_veces_se_repite_en_argumento;contador_de_cuantas_veces_se_repite_en_argumento<200;1)
    {

        if (*apuntador == "A")
        {
            nA=nA + 1;
        }
        if (*apuntador == "B")
        {
            nB=nB + 1;
        }
        if (*apuntador == "C")
        {
            nC=nC + 1;
        }
        if (*apuntador == "D")
        {
            nD=nD + 1;
        }
        if (*apuntador == "E")
        {
            nE=nE+ 1;
        }
        if (*apuntador == "F")
        {
            nF=nF + 1;
        }
        if (*apuntador == "G")
        {
            nG=nG + 1;
        }
        if (*apuntador == "H")
        {
            nH=nH + 1;
        }
        if (*apuntador == "I")
        {
            nI=nI + 1;
        }
        if (*apuntador == "J")
        {
            nJ=nJ + 1;
        }
        if (*apuntador == "K")
        {
            nK=nK + 1;
        }
        if (*apuntador == "L")
        {
            nL=nL + 1;
        }
        if (*apuntador == "M")
        {
            nM=nM + 1;
        }
        if (*apuntador == "N")
        {
            nN=nN + 1;
        }
        if (*apuntador == "O")
        {
            nO=nO + 1;
        }
        if (*apuntador == "P")
        {
            nP=nP + 1;
        }
        if (*apuntador == "Q")
        {
            nQ=nQ + 1;
        }
        if (*apuntador == "R")
        {
            nR=nR + 1;
        }
        if (*apuntador == "S")
        {
            nS=nS + 1;
        }
        if (*apuntador == "T")
        {
            nT=nT + 1;
        }
        if (*apuntador == "U")
        {
            nU=nU + 1;
        }
        if (*apuntador == "V")
        {
            nV=nV + 1;
        }
        if (*apuntador == "W")
        {
            nW=nW + 1;
        }
        if (*apuntador == "X")
        {
            nX=nX + 1;
        }
        if (*apuntador == "Y")
        {
            nY=nY + 1;
        }
        if (*apuntador == "Z")
        {
            nZ=nZ + 1;
        }
        contador_de_cuantas_veces_se_repite_en_argumento = contador_de_cuantas_veces_se_repite_en_argumento + 1;
        apuntador=apuntador+1;
    }
    std::cout<<"A: "<<nA;
    std::cout<<"\n";
    std::cout<<"B: "<<nB;
    std::cout<<"\n";
    std::cout<<"C: "<<nC;
    std::cout<<"\n";
    std::cout<<"D: "<<nD;
    std::cout<<"\n";
    std::cout<<"E: "<<nE;
    std::cout<<"\n";
    std::cout<<"F: "<<nF;
    std::cout<<"\n";
    std::cout<<"G: "<<nG;
    std::cout<<"\n";
    std::cout<<"H: "<<nH;
    std::cout<<"\n";
    std::cout<<"I: "<<nI;
    std::cout<<"\n";
    std::cout<<"J: "<<nJ;
    std::cout<<"\n";
    std::cout<<"K: "<<nK;
    std::cout<<"\n";
    std::cout<<"L: "<<nL;
    std::cout<<"\n";
    std::cout<<"M: "<<nM;
    std::cout<<"\n";
    std::cout<<"N: "<<nN;
    std::cout<<"\n";
    std::cout<<"O: "<<nO;
    std::cout<<"\n";
    std::cout<<"P: "<<nP;
    std::cout<<"\n";
    std::cout<<"Q: "<<nQ;
    std::cout<<"\n";
    std::cout<<"R: "<<nR;
    std::cout<<"\n";
    std::cout<<"S: "<<nS;
    std::cout<<"\n";
    std::cout<<"T: "<<nT;
    std::cout<<"\n";
    std::cout<<"U: "<<nU;
    std::cout<<"\n";
    std::cout<<"V: "<<nV;
    std::cout<<"\n";
    std::cout<<"W: "<<nW;
    std::cout<<"\n";
    std::cout<<"X: "<<nX;
    std::cout<<"\n";
    std::cout<<"Y: "<<nY;
    std::cout<<"\n";
    std::cout<<"Z: "<<nZ;
    std::cout<<"\n";
    return 0;
}


