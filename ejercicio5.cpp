#include <iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"ingrese numero de partidos: ";
    cin>>n;
    cout<<"ingrese el numero de ciudades: ";
    cin>>m;
    
    int votos[m][n];
    for(int i=0;i<m;i++){
        cout<<"ciudad"<<i+1<<endl;
        for(int j=0;j<n;j++){
            cout<<"votos del partido"<<j+1<<" : ";
            cin>>votos[i][j];
        }
    }
    int totalVotosPartido[n] = {0};

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            totalVotosPartido[j] += votos[i][j];
        }
    }

    int ganadorNacional = 0;
    for (int j = 1; j < n; j++) {
        if (totalVotosPartido[j] > totalVotosPartido[ganadorNacional]) {
            ganadorNacional = j;
        }
    }

    cout << "El partido que gana la eleccion nacional es el Partido " << ganadorNacional+1 << endl;

    for (int i = 0; i < m; i++) {
        int ganadorCiudad = 0;
        for (int j = 1; j < n; j++) {
            if (votos[i][j] > votos[i][ganadorCiudad]) {
                ganadorCiudad = j;
            }
        }
        cout << "En la ciudad " << i+1 << " gana el Partido " << ganadorCiudad+1 << endl;
    }

    int ciudadMaxVotos = 0;
    int maxVotos = votos[0][ganadorNacional];

    for (int i = 1; i < m; i++) {
        if (votos[i][ganadorNacional] > maxVotos) {
            maxVotos = votos[i][ganadorNacional];
            ciudadMaxVotos = i;
        }
    }

    cout << "La ciudad donde el partido ganador nacional tuvo mas votos es la Ciudad " << ciudadMaxVotos+1 << endl;

    return 0;
}

