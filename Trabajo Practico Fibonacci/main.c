#include <stdio.h>
#include <stdlib.h>

int Fibonacci_Interativo (int num);
void Mostrar_Fibonacci_Iterativo(int num);

int Fibonacci_Recursivo (int num);
void Mostrar_Fibonacci_Recursivo( int num);



int EleccionNumero();
void Presentacion();
void Menu();


int main()
{
    int numFibonacci, opcion;
    char seguir;
    int numeroFibRecursivo,numeroFibIterativo;

    Presentacion();

     do
    {
        system("cls");

        Menu();


        printf("\n Que ejercicio deseas ejecutar?\n");
        scanf("%i", &opcion);

        system("cls");

        numFibonacci = EleccionNumero();



        switch (opcion)
        {
        case 1:
                numeroFibRecursivo = Fibonacci_Recursivo(numFibonacci);
                printf("\n Numero Fibonacci Rescursivo: |%d| ", numeroFibRecursivo);
                printf("\n Serie de Fibonacci Recursivo: ");
                Mostrar_Fibonacci_Recursivo(numFibonacci);
            break;

        case 2:
                numeroFibIterativo = Fibonacci_Interativo(numFibonacci);
                printf("\n Numero Fibonacci Iterativo: |%d| ", numeroFibIterativo);
                printf("\n Serie de Fibonacci Iterativo");
                Mostrar_Fibonacci_Iterativo(numFibonacci);
            break;

        default:
            system("cls");
            printf("Opcion Incorrecta \n");
            break;
        }
        printf("\n Desea ver otro ejercicio? [S|N] \n");
        fflush(stdin);
        scanf("%c", &seguir);
    }
    while(seguir == 's' || seguir== 'S');

    return 0;
}

int EleccionNumero()
{
    int numero;
    do{
        printf("\n Ingrese un numero positivo. \n ");
        scanf("%d", &numero);

    }while(numero<0);

        return numero;

}

int Fibonacci_Interativo (int num)
{
    int k, x, rta, i;

    if(num<=1)
    {
        rta=num;
    }
    k = 0;
    x = 1;

    for (i=2; i<=num ; i++)
    {
        int aux;
        aux = k;
        k = x;
        x = aux + k;
    }

    rta = x;

    return rta;

}

void Mostrar_Fibonacci_Iterativo(int num)
{
    printf("|0| |1|");

    for(int i=2; i<=num ; i++)
    {
        int rta = Fibonacci_Interativo(i);
        printf(" |%d|" , rta);
    }
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Fibonacci_Recursivo (int num)
{
    int rta;

    if (num == 1 || num == 0){ /// casos base. corte de recursividad

        rta = num;
    }else{

        rta = Fibonacci_Recursivo(num-1) + Fibonacci_Recursivo(num-2);  /// llamada recursiva. y aproximacion de corte
    }

    return rta; /// retorna la repuesta
}

void Mostrar_Fibonacci_Recursivo(int num)
{

    printf("|0| |1|");

    for(int i=2; i<=num; i++)
    {
        int rta = Fibonacci_Recursivo(i);
        printf(" |%d|", rta);
    }
}


void Presentacion()
{
    printf("--------Trabajo Practico Sucesion de Fibonacci--------");
    printf("\n\n Alumno: Nicolas Tesone. ");
    printf("\n Comision: 8 ");
    printf("\n Profesor: Gustavo Sonvico.\n\n\n");

    system("pause");
    system("cls");

}

void Menu()
{
    printf("\n 1-Fibonacci Forma Recursiva");

    printf("\n 2-Fibonacci Forma Iterativa");

}









