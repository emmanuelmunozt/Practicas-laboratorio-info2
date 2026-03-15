#include <iostream>
#include "funcioneslab2.h"
using namespace std;

int main(){
    int h = 0; int x;
    while (h<=4){
        cout <<"Ingrese el ejercicio: ";
        cin >> x;
        switch(x){
        case 3:{
            char pal1[100], pal2[100];
            cout<<"Ingrese la primera cadena: "; cin>>pal1;
            cout<<"Ingrese segunda cadena: "; cin>>pal2;

            comparar_cadenas_de_caracteres(pal1, pal2);
            cout<<endl;
            h++;
            break;
        }
        case 5:{
            char arreglo5[15];
            int a = comprobar_error_dato_entero('a');
            entero_a_string(a, arreglo5);
            cout << arreglo5 << endl;
            h++;
            break;
        }
        case 7:{
            char arreglo7[70];
            cout<<"Ingrese la cadena de caracteres: "; cin.ignore(); cin.getline(arreglo7, 50);
            eliminar_caracteres_repetidos(arreglo7);
            h++;
            break;
        }
        case 9:{
            char arreglo9[70];
            cout<<"Ingrese la cadena de numeros: "; cin>>arreglo9;
            cadena_que_se_suma(comprobar_error_dato_entero('n'), arreglo9);
            h++;
            break;
        }

        }
    }
    return 0;
}
