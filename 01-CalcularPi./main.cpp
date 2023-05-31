#include <iostream>

using namespace std;

int pot(int nro, int exp){
    int rta = nro;
    for(; exp!=1 ; exp--){
        rta *= nro;
    }
    return rta;
}


double sum_leib(int nroX){
    double rta{0};
    double a{0};
    double b{0};

    for(int i{0}; i < nroX; i++){    
        //cout<<"iteracion i: "<<i<<endl;

        a = pot(-1,i);
        //cout<<"valor a: "<<a<<endl;

        b = (i*2)+1; 
        //cout<<"valor b: "<<b<<endl;

        rta += (a / b);
        //cout<<"valor rta: "<<rta<<endl<<endl;
    }
    return rta*4;
}


int main(){
    double rta{0}; 
    cout <<"Valor de Pi con la serie de leibz"<<endl;
    
    rta = sum_leib(500000);
    //150000
    cout<<"valor de RTA = "<< rta <<endl;
    return 0;
}