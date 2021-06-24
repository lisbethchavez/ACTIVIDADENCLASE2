#include <iostream>
using namespace std;
int main() {
    //1. Imprimir 5 veces la palabra PUCESE
    for (int i=0; i<5; i++)
    {
        cout<<endl<< "PUCESE : " << (i +1);
        cout<<endl<<"fin";
    }

    //2. Imprimir la tabla de multiplicar del numero 5
    //cout<<"El valor de la variable i "<<(5*1)
    cout<<"\nLa tabla del 5";
    for(int i=1; i<=10; i++)
    {
        cout<<endl<<" 5 x "<<i<<" = "<<(5*1);
    }
    //3.Se ingresa por teclado un entero que representa una tabla de multiplicar
    // se pide imprimir esta tabla desde el 1 al 12
    int tabla;

    cout<<"\nINGRESAR TABLA A CALCULAR: ";
    cin>>tabla;
    for(int i=1;i<=12; i++)
    {
        cout<<endl<<tabla<<" X "<< i << " = "<< (tabla * 1);
        //10 x 1
        //10 x 2
    }

    //4.Calcular la sumatoria de los numeros comprendidos entre 500 y 800
    int suma=0;
    for(int i=500; i<=800; i++)
    {
        suma=suma + 1;
    }
    cout<<"LA SUMA DE LOS NUMEROS COMPRENDIDOS ES ";
    cout<<"la suma de 500-800 es "<<suma;

    //5. Se pide por teclado 2 enteros que representan el principio y fin de una serie . Realizar las
    // sumatorias de los numeros multiplos de 5 que se encuentran en esta serie

    int inicio, fin;
    cout<<"\nINICIO DE LA SERIE: ";
    cin>>inicio;
    cout<<"\nFIN DE LA SERIE: ";
    cin>>fin;
    suma=0;
    for(int i=inicio; i<=fin; i++)
    {
        if(i%5==0)
            suma+=i;
    }
    cout<<"\nLA SUMA DE LOS MULTIPLOS DE 5 ES: "<<suma;

    //6.For anidados (un for dentro de otro for)
    //**********
    //**********
    //**********
    //**********
    //**********

    cout<<"\nIMPRESION DE UN RECTANGULO\n";
    for(int i=1;i<=5; i++)
    {
        for (int j=1;j<=10;j++ )
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //7. Tabla multiplicar

    cout<<"\nLAS PRIMERAS TABLAS DE MULTIPLICAR: ";
    for(int tabla=1;tabla<=10; tabla++)
    {  cout<<endl<<"tabla del "<<tabla;
        for(int i=1; i<=10; i++)
        {
            cout<<endl<< tabla<<" X = "<<(tabla*i);
        }
        cout<<endl;
    }
    return 0;
}















// 2. Imprimir la tabla de multiplicar del numero 5
//cout<<"El valor de la variable i"<<i;




