#include <iostream>
using namespace std;
int main () {
    int matriz[4][7];
    int suma[4];
    int ventatotal;
    ventatotal=0;
    cout<<"Ingrese ventas de las 4 semanas"<<endl;
    cout<<"-----------------------"<<endl;
    for (int i=0;i<4;i++) {
        cout<<"Ingrese venta semanal de la semana "<<i+1<<": "<<endl;
        cout<<"Lunes: "; cin>>matriz[i][0];
        cout<<"Martes: "; cin>>matriz[i][1];
        cout<<"Miercoles: "; cin>>matriz[i][2];
        cout<<"Jueves: "; cin>>matriz[i][3];
        cout<<"Viernes: "; cin>>matriz[i][4];
        cout<<"Sabado: "; cin>>matriz[i][5];
        cout<<"Domingo: "; cin>>matriz[i][6];
        suma[i]=0;
    }

    for (int i=0;i<4;i++){
        for (int j=0;j<7;j++) {
            suma[i]=suma[i]+matriz[i][j];
            }
        ventatotal=ventatotal+suma[i];
        }
    cout<<endl<<"Ventas de las 4 semanas"<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"\t"<<"SEM1"<<"\t"<<"SEM2"<<"\t"<<"SEM3"<<"\t"<<"SEM4"<<endl;
    cout<<"(L)"<<"\t";
    for (int i=0;i<4;i++) {
        cout<<matriz[i][0]<<"\t";
        }
    cout<<endl;
    cout<<"(M)"<<"\t";
    for (int i=0;i<4;i++) {
        cout<<matriz[i][1]<<"\t";
        }
    cout<<endl;
    cout<<"(M)"<<"\t";
    for (int i=0;i<4;i++) {
        cout<<matriz[i][2]<<"\t";
        }
    cout<<endl;
    cout<<"(J)"<<"\t";
    for (int i=0;i<4;i++) {
        cout<<matriz[i][3]<<"\t";
        }
    cout<<endl;
    cout<<"(V)"<<"\t";
    for (int i=0;i<4;i++) {
        cout<<matriz[i][4]<<"\t";
        }
    cout<<endl;
    cout<<"(S)"<<"\t";
    for (int i=0;i<4;i++) {
        cout<<matriz[i][5]<<"\t";
        }
    cout<<endl;
        cout<<"(L)"<<"\t";
    for (int i=0;i<4;i++) {
        cout<<matriz[i][6]<<"\t";
        }
    cout<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"\t";
    for(int i=0;i<4;i++){
        cout<<suma[i]<<"\t";
    }
    cout<<endl<<endl<<"Venta total del mes:"<<"\t"<<ventatotal<<endl<<endl;
    }
    