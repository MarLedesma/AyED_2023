#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double sum_leib(int n){
    double rta{0};
    double a{0};
    double b{0};

    if(n == 0){
        return 1.0;
    }else{
        n % 2 == 0? a = 1:a = -1; 
        b = (n*2)+1;
        rta = (a / b);
        return rta;
    }
}


int main(){
    double rta{0};
    double old_rta{1};
    int i{0}; 
    cout<<"[TRABAJO PRACTICO N°1]"<<endl
        <<"Valor de Pi con la serie de leibz."<<endl;


    while((abs(rta-old_rta) > 0.0000001 ) && i < 1000000000){
        old_rta = rta;
        rta += sum_leib(i);
        i++;
    }
    rta *= 4;

    cout<<'\t'<<"valor de RTA-PI = "<<setprecision(8)<< rta <<endl
        <<'\t'<<"cant de iteraciones: "<<i<<endl
        <<"[fin del programa]"<<endl;
    return 0;
}
/*
Errores del codigo:
    * el codigo tiene que iterar por si solo hasta encontrar el valor,
    no puedo tirar un numero a ojo.

    * si hago "double nro_a" "double nro_b" 

Observacion
    rta = sum_leib(500000); 150000
    a las 150000 iteraciones de la sumatoria de leib da 3.14159, le  
    faltaria 1 decimal mas, para que este bien.

    hay un int a y un double b{3.123}, si hago "a=b", o sea, paso 
    el double a la variable entera, int = 3. Solo toma el entero del
    numero.

Cuando se mande por mail
    no hacer un nuevo mail para correciones, si no que responder en el
    mismo para que se genere un hilo.
*/