#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"ingrese el tamano de la matriz"<<endl;
    cin>>n;
    int matriz[n][n];
    cout<<"ingrese los elementos de la matriz"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"elemento ["<<i<<"]["<<j<<"]: ";
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
    int suma=0;
    for(int i=0;i<n;i++){
        suma= suma + matriz[i][n-1-i];
    }
    cout<<"la suma de los elementos de la diagonal secundaria es: "<<suma<<endl;
    return 0;
}
