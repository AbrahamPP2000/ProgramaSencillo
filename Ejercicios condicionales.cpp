/* Ejercicios:

1. Escriba un programa que lea dos números y determine cuál de ellos es el mayor.

2. Escriba un programa que lea tres números y determine cuál de ellos es el mayor.

3. Realice un programa que lea un valor entero y determine si se trata de un número
   par o impar.

4. Comprobar si un número digitado por el usuario es positivo o negativo.

5. Escriba un programa que lea de la entrada estándar un carácter e indique
   en la salida estándar si el carácter es una vocal minúscula o no.

6. Escriba un programa que lea de la entrada estándar un carácter e indique
   en la salida estándar si el carácter es una vocal minúscula, es una vocal
   mayúscula o no es una vocal.

7. Escriba un programa que solicite una edad (un entero) e indique en la salida
   estándar si la edad introducida está en el rango [18-25].

8. Escriba un programa que lea de la entrada estándar tres números. Después debe leer
   un cuarto número e indicar si el número coincide con alguno de los introducidos con
   anterioridad.

9. Cambiar un número entero con el mismo valor pero en romanos.
   M = 1000
   D = 500
   C = 100
   L = 50
   X = 10
   V = 5
   I = 1

10. Mostrar los meses del año, pidiéndole al usuario un número entre (1 - 12),
    y mostrar el mes al que corresponde.

11. Hacer un programa que simule un cajero automático con un saldo inicial
    de 1000 dólares.

12. Hacer un menú que considere las siguientes opciones:
    Caso 1: Cubo de un número
    Caso 2: Número par o impar
    Caso 3: Salir
*/

#include <iostream>
#include <clocale>
#include <cstdlib>
#include <math.h>
#define POTENCIA 3
using namespace std;

enum {ninguno = 0, ejercicio1, ejercicio2, ejercicio3, ejercicio4,
      ejercicio5, ejercicio6, ejercicio7, ejercicio8, ejercicio9,
      ejercicio10, ejercicio11, ejercicio12};

void primerEjercicio()
void segundoEjercicio();
void tercerEjercicio();
void cuartoEjercicio();
void quintoEjercicio();
void sextoEjercicio();
void septimoEjercicio();
void octavoEjercicio();
void novenoEjercicio();
void decimoEjercicio();
void decimoPrimerEjercicio();
void decimoSegundoEjercicio();

int main(){
    setlocale(LC_ALL, "spanish");
    int opcion = 1;
    do{
        cout << "¿Cuál ejercicio quiere hacer? " << endl;
        cout << "Ejercicio 1 <1>" << endl;
        cout << "Ejercicio 2 <2>" << endl;
        cout << "Ejercicio 3 <3>" << endl;
        cout << "Ejercicio 4 <4>" << endl;
        cout << "Ejercicio 5 <5>" << endl;
        cout << "Ejercicio 6 <6>" << endl;
        cout << "Ejercicio 7 <7>" << endl;
        cout << "Ejercicio 8 <8>" << endl;
        cout << "Ejercicio 9 <9>" << endl;
        cout << "Ejercicio 10 <10>" << endl;
        cout << "Ejercicio 11 <11>" << endl;
        cout << "Ejercicio 12 <12>" << endl;
        cout << "Ninguno <0>" << endl;
        cin >> opcion;
        switch(opcion){
            case ninguno: break;
            case ejercicio1: primerEjercicio(); break;
            case ejercicio2: segundoEjercicio(); break;
            case ejercicio3: tercerEjercicio(); break;
            case ejercicio4: cuartoEjercicio(); break;
            case ejercicio5: quintoEjercicio(); break;
            case ejercicio6: sextoEjercicio(); break;
            case ejercicio7: septimoEjercicio(); break;
            case ejercicio8: octavoEjercicio(); break;
            case ejercicio9: novenoEjercicio(); break;
            case ejercicio10: decimoEjercicio(); break;
            case ejercicio11: decimoPrimerEjercicio(); break;
            case ejercicio12: decimoSegundoEjercicio(); break;
            default: system("CLS");
                     cout << "\nIngrese un valor de los que se muestran." << endl << endl;
                     system("PAUSE");
                     break;
        }
        system("CLS");
    }while(opcion != ninguno);
    cout << "Programa finalizado" << endl;
    return 0;
}

void primerEjercicio(){
    system("CLS");
    int n1, n2;
    cout << "Digite dos números: "; cin >> n1 >> n2;
    if(n1 == n2){
        cout << "Ambos números son iguales." << endl << endl;
    }else if(n1 > n2){
        cout << "El mayor es: " << n1 << endl << endl;
    }else{
        cout << "El mayor es: " << n2 << endl << endl;
    }
    system("PAUSE");
}

void segundoEjercicio(){
    system("CLS");
    int n1, n2, n3;
    cout << "Digite tres números: "; cin >> n1 >> n2 >> n3;
    if(n1 > n2 && n1 > n3){
        cout << "El mayor es: " << n1 << endl << endl;
    }else if(n2 > n1 && n2 > n3){
        cout << "El mayor es: " << n2 << endl << endl;
    }else if(n3 > n1 && n3 > n2){
        cout << "El mayor es: " << n3 << endl << endl;
    }else{
        cout << "Los tres números son iguales." << endl << endl;
    }
    system("PAUSE");
}

void tercerEjercicio(){
    system("CLS");
    int numero;
    cout << "Digite un número: "; cin >> numero;
    if(numero == 0){
        cout << "El número es 0." << endl << endl;
    }else if(numero % 2 == 0){
        cout << "El número es par." << endl << endl;
    }else{
        cout << "El número es impar." << endl << endl;
    }
    system("PAUSE");
}

void cuartoEjercicio(){
    system("CLS");
    int numero;
    cout << "Digite un número: "; cin >> numero;
    if(numero == 0){
        cout << "El número es 0." << endl << endl;
    }else if(numero > 0){
        cout << "El número es positivo." << endl << endl;
    }else{
        cout << "El número es negativo." << endl << endl;
    }
    system("PAUSE");
}

void quintoEjercicio(){
    system("CLS");
    char letra;
    cout << "Digite un carácter: "; cin >> letra;
    switch(letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout << "Es una vocal minúscula" << endl << endl; break;
        default : cout << "No es una vocal minúscula" << endl << endl; break;
    }
    system("PAUSE");
}

void sextoEjercicio(){
    system("CLS");
    char letra;
    cout << "Digite un carácter: "; cin >> letra;
    switch(letra){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout << "Es una vocal minúscula." << endl << endl; break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': cout << "Es una vocal mayúscula." << endl << endl; break;
        default : cout << "No es una vocal." << endl << endl; break;
    }
    system("PAUSE");
}

void septimoEjercicio(){
    system("CLS");
    int edad;
    cout << "Digite su edad: "; cin >> edad;
    if((edad >= 18)&&(edad <= 25)){
        cout << "Su edad está en el rango de [18 a 25]." << endl << endl;
    }else{
        cout << "Su edad no está en dicho rango." << endl << endl;
    }
    system("PAUSE");
}

void octavoEjercicio(){
    system("CLS");
    int n1, n2, n3, n4;
    cout << "Digite cuatro números separados por espacios: ";
    cin >> n1 >> n2 >> n3 >> n4;
    if(n4 == n1 || n4 == n2 || n4 == n3){
        cout << "El cuarto número coincide con alguno de los tres anteriores. " << endl << endl;
    }else{
        cout << "El cuarto número no coincide con ninguno de los tres números anteriores. " << endl << endl;
    }
    system("PAUSE");
}

void novenoEjercicio(){
    system("CLS");
    int numero, unidades, decenas, centenas, millar;
    cout << "Digite un número para transformarlo a número romano: ";
    cin >> numero;
    //numero = 2152 -> 2000 + 100 + 50 + 2
    unidades = numero % 10; numero /= 10; //unidades = 2, numero = 215
    decenas = numero % 10; numero /= 10; //decenas = 5, numero = 21
    centenas = numero % 10; numero /= 10; //centenas = 1, numero = 2
    millar = numero % 10; numero /= 10; //millar = 2, numero = 0
    switch(millar){
        case 1: cout << "M"; break;
        case 2: cout << "MM"; break;
        case 3: cout << "MMM"; break;
    }
    switch(centenas){
        case 1: cout << "C"; break;
        case 2: cout << "CC"; break;
        case 3: cout << "CCC"; break;
        case 4: cout << "CD"; break;
        case 5: cout << "D"; break;
        case 6: cout << "DC"; break;
        case 7: cout << "DCC"; break;
        case 8: cout << "DCCC"; break;
        case 9: cout << "CM"; break;
    }

    switch(decenas){
        case 1: cout << "X"; break;
        case 2: cout << "XX"; break;
        case 3: cout << "XXX"; break;
        case 4: cout << "XL"; break;
        case 5: cout << "L"; break;
        case 6: cout << "LX"; break;
        case 7: cout << "LXX"; break;
        case 8: cout << "LXXX"; break;
        case 9: cout << "XC"; break;
    }

    switch(unidades){
        case 1: cout << "I"; break;
        case 2: cout << "II"; break;
        case 3: cout << "III"; break;
        case 4: cout << "IV"; break;
        case 5: cout << "V"; break;
        case 6: cout << "VI"; break;
        case 7: cout << "VII"; break;
        case 8: cout << "VIII"; break;
        case 9: cout << "IX"; break;
    }
    cout << endl << endl;
    system("PAUSE");
}

void decimoEjercicio(){
    system("CLS");
    enum {ENERO = 1, FEBRERO, MARZO, ABRIL, MAYO, JUNIO, JULIO, AGOSTO, SEPTIEMBRE,
          OCTUBRE, NOVIEMBRE, DICIEMBRE};
    int mes;
    cout << "Digite un número del 1 al 12: "; cin >> mes;
    switch(mes){
        case ENERO: cout << "El número introducido corresponde al mes de Enero. " << endl << endl;
                    break;
        case FEBRERO: cout << "El número introducido corresponde al mes de Febrero. " << endl << endl;
                      break;
        case MARZO: cout << "El número introducido corresponde al mes de Marzo. " << endl << endl;
                    break;
        case ABRIL: cout << "El número introducido corresponde al mes de Abril. " << endl << endl;
                    break;
        case MAYO: cout << "El número introducido corresponde al mes de Mayo. " << endl << endl;
                   break;
        case JUNIO: cout << "El número introducido corresponde al mes de Junio. " << endl << endl;
                    break;
        case JULIO: cout << "El número introducido corresponde al mes de Julio. " << endl << endl;
                    break;
        case AGOSTO: cout << "El número introducido corresponde al mes de Agosto. " << endl << endl;
                     break;
        case SEPTIEMBRE: cout << "El número introducido corresponde al mes de Septiembre. " << endl << endl;
                         break;
        case OCTUBRE: cout << "El número introducido corresponde al mes de Octubre. " << endl << endl;
                      break;
        case NOVIEMBRE: cout << "El número introducido corresponde al mes de Noviembre. " << endl << endl;
                        break;
        case DICIEMBRE: cout << "El número introducido corresponde al mes de Diciembre. " << endl << endl;
                        break;
        default: cout << "Introduzca un número en el rango establecido. " << endl << endl;
                 break;
    }
    system("PAUSE");
}

void decimoPrimerEjercicio(){
    system("CLS");
    int saldo_inicial = 1000, opc;
    float extra, saldo = 0, retiro;
    cout << "\tBienvenido a su Cajero Virtual" << endl;
    cout << "1. Ingresar dinero en cuenta" << endl;
    cout << "2. Retirar dinero en cuenta" << endl;
    cout << "3. Salir" << endl;
    cout << "Opción: "; cin >> opc;

    switch(opc){
        case 1:
            cout << "Digite la cantidad de dinero a ingresar: ";
            cin >> extra;
            saldo = saldo_inicial + extra;
            cout << "Dinero en cuenta: " << saldo;
            break;
        case 2:
            cout << "Digite la cantidad de dinero que va a retirar: ";
            cin >> retiro;
            if(retiro > saldo_inicial){
                cout << "NO tiene esa cantidad de dinero";
            }else{
                saldo = saldo_inicial - retiro;
                cout << "Dinero en cuenta: " << saldo;
            }
            break;
        case 3: break;

    }
    cout << endl << endl;
    system("PAUSE");
}

void decimoSegundoEjercicio(){
    system("CLS");
    int opc, numero, cubo_num;
    cout << "\tBienvenido a su Cajero Virtual" << endl;
    cout << "1. Cubo de un número." << endl;
    cout << "2. Número par o impar. " << endl;
    cout << "3. Salir" << endl;
    cout << "Opción: "; cin >> opc;
    switch(opc){
        case 1:
            cout << "Digite un número: ";
            cin >> numero;
            cubo_num = pow(numero, POTENCIA);
            cout << "El cubo del número introducido es: " << cubo_num;
            break;
        case 2:
            cout << "Digite un número: ";
            cin >> numero;
            if(numero % 2 == 0){
                cout << "El número introducido es par.";
            }else{
                cout << "El número introducido es impar.";
            }
            break;
        case 3: break;
    }
    cout << endl << endl;
    system("PAUSE");
}
