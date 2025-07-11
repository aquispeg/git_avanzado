#include <iostream>
using namespace std;
int main () {
    int n;
    cout<<"ingrese el tamano de la matriz cuadrada: ";
    cin>>n;
    int matriz[n][n];
    cout<<"ingrese los elementos de la matriz"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"elemento ["<<i+1<<"]["<<j+1<<"]: ";
            cin>>matriz[i][j];
        }
    }
    cout<<"matriz ingresada"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matriz[i][j]<<"\t";
        }
        cout<<endl;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            sum=sum+matriz[i][j];
        }
    }
    cout<<"la suma de los elementos por encima de la diagonal principal es: "<<sum<<endl;
    return 0;

}