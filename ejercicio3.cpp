#include <iostream>
using namespace std;

void MatrizBordes(int n){
    int **matriz= new int *[n];
    for(int i=0;i<n;i++){
        matriz[i]=new int[3*n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n*3;j++){
            if(i==0 || i==n-1 || j== 0||j==3*n-1){
                matriz [i][j]=1;
            }else {
                matriz[i][j]=0;
            }

        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<3*n;j++){
            cout<<matriz[i][j];
        }
        cout<<endl;
    }
}

int main() {
int n;
cout<<"ingrese n: "<<endl;
cin>>n;
MatrizBordes(n);

return 0; 
}  




