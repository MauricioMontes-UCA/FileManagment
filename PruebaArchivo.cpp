#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main(){
    fstream candidatos;

    candidatos.open("Candidatos.txt", ios::out); 
    // con ios::out se abre el archivo en modo escritura
    // con ios::in se abre el archivo en modo lectura

    if (candidatos.is_open()){
    // el condicional se realiza porque es una buena práctica, en caso de que el archivo no abra, pues xd

        candidatos << "Primera linea" << endl;
        candidatos << "Segundo linea" << endl;
        candidatos << "Tercera linea";

        candidatos.close();
    }
    else{
        cout << "El archivo de texto no pudo abrirse";
        return 1;
    }

    return 0;
}