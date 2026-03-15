#include <iostream>
#include "funcioneslab2.h"
using namespace std;

char comparar_cadenas_de_caracteres(const char *a, const char *b){
    while(*a == *b){
        if (*a == '\0'){            // \0 caracter nulo
            cout<<"Las cadenas son iguales"<<endl;
            return 0;
        }
        a++; b++;
    }
    cout<<"Las cadenas no son iguales"<<endl;
    return 0;
}

int comprobar_error_dato_entero(char variable) {
    int valor;
    while (true) {
        cout << "Ingrese un valor entero para " << variable << ": ";
        if (cin >> valor) {
            return valor;
        } else {
            cout << "Error: Entrada no valida. Intente de nuevo." << endl;
            cin.clear();
            cin.ignore(100, '\n');
        }}}

void entero_a_string(int a, char *b){
    char aux[15]; char *p_aux = aux;
    if(a<0){
        *b = '-';
        b++;
        a = -a;
    }
    if (a == 0) {
        *p_aux = 0;
        p_aux++;
    }
    while(a>0){
        *p_aux = a%10;
        a = a/10; p_aux++;
    }
    while(p_aux>aux){
        p_aux--;
        *b = *p_aux + '0';                 // + '0' convierte el numero entero en caracter
        b++;
    }
    *b = '\0';
}

void eliminar_caracteres_repetidos(char *a){
    char aux[50] , *p_guardar = aux;
    while(*a != '\0'){
        bool repetido = false;
        char *p_revisar = aux;

        while (p_revisar < p_guardar) {
            if (*a == *p_revisar) {
                repetido = true;
                break;
            } p_revisar++;
        }
        if (!repetido) {
            *p_guardar = *a;
            p_guardar++;
        }
        a++;
    }
    cout<<aux<<endl;
}

void cadena_que_se_suma(int n, char *cadena){
    char *ptr_counter = cadena;
    while (*ptr_counter != '\0') ptr_counter++;
    int suma = 0;

    for (char *i = ptr_counter; i > cadena; i -= n) {
        long numero_grupo = 0;
        long potencia_diez = 1;

        for (int j = 0; j < n; j++) {
            char *pos = (i - 1) - j;

            if (pos >= cadena) {
                numero_grupo += (*pos - '0') * potencia_diez; //0 ayuda a pasar de char a int
                potencia_diez *= 10;

            }}
        suma += numero_grupo;
    }
    cout<< "Suma :"<< suma<<endl;
}

