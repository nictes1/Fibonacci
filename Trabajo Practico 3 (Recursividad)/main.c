#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}


///1. Calcular el factorial de un número en forma recursiva.

int CalcularFactorial (int x)
{
    int rta;

    if(x==0)
    {
        rta=1;
    }
    else
    {
        rta=x*CalcularFactorial(x-1);
    }

    return rta;
}

///2. Calcular la potencia de un número en forma recursiva.

int CalcularPotencia_Recurisivamente(int num , int potencia)
{
    int rta;

    if(potenci==1)
    {
        rta=x;
    }
    else if(x==0)
    {
        rta=1;
    }
    else
    {
        rta = x * CalcularPotencia_Recurisivamente(num, potencia-1);
    }

    return rta;
}

//3. Recorrer un arreglo y mostrar sus elementos en forma recursiva.
void RecorrerArray_Recursivamente (int a[], int cant)
{
    int i;

    if(i==cant-1)
    {
        printf("|%d|", a[i]);
    }else{
        printf("|%d|", RecorrerArray_Recursivamente(a[i+1], cant))
    }
}

//5. Determinar en forma recursiva si un arreglo es capicúa.
int ArrayCapicua_Recursivo (int a[], int validos,int i)
{
    //fn que determian si un arreglo es capicua o no de forma recursiva y devuelve, 1 capicua | 0 no es capicua.

    int rta=1;

    if(i<=validos/2)
    {

        if(a[i]==a[validos-1-i])
        {
            rta=ArregloCapicua_Recursivo(a,validos,i+1);
        }
        else
        {
            rta=0;
        }
    }
    return rta;
}

//6. Sumar en forma recursiva los elementos de un arreglo de enteros.
int SumarArray_Recursivamente(int a[], int cant)
{
    /// fn suma los elementos de un array de forma recursiva y retorna su resultado.

    int suma;
    int i;

    if(i==cant-1)
    {
        suma=a[i];
    }
    else
    {
        suma= a[i] + SumarArrayRecursivamente(a[i-1],cant);
    }

    return suma;
}

//7. Buscar el menor elemento de un arreglo en forma recursiva.
int BuscarMenorArray_Recursivamente(int a[],int validos, int i)
{
    /// fn Busca el menor elemento de un array de forma recursiva y la misma lo retorna.

    int menor;

    if(i==validos-1)
    {
        menor=a[i];
    }else{

        menor=BuscaMenor_array(a,validos,i+1)

        if(menor>a[i])
        {
            menor=a[i];
        }
    }

    return menor;
}


//8. Buscar el menor elemento de un archivo de números enteros de forma recursiva.
int cargarArchivo(char rutaarchivo[])
{
    /// Fn que carga un archivo de numero enteros

    FILE * buffer = fopen(rutaarchivo, "ab");

    int dato;
    char control;

    if(buffer != NULL)
    {
        do
        {
            printf("Ingrese un numero entero: \n");
            scanf("%d", &dato);

            system("cls");

            fwrite(&dato, sizeof(int), 1, File);

            printf("Desea ingresar otro dato? (s | n) \n");
            fflush(stdin);
            scanf("%c", &control);

            system("cls");

        }while(control == 's');

        fclose(File);
    }
    else
    {
        printf("No se pudo abrir el archivo. \n");
    }
}

int Dimension_Archivo (char rutaarchivo[])
{
    FILE * buffer = fopen(rutaarchivo, "rb");

    int dimension=0;

    if(buffer!=NULL)
    {
        fseek(buffer,0,SEEK_END);
        dimension = ftell(buffer)/sizeof(int);
        fclose(buffer);
    }
    else
    {
        printf("\n No hay datos en el archivo.");
    }

    return dimension
}

void ArchivoInvertidoFn1 (char NombreRuta[])
{
    FILE * buffer=NULL

    buffer = fopen(nombre, "rb");

    if(buffer!=NULL)
    {
        printf("\n Contenido del archivo Invertido");
    }
}

int BuscarMenorArray_Archivo_Recursivamente(char RutaArchivo[])
{
    /// fn que busca el menor elemento de un archivo de forma recursiva.

    FILE * buffer = fopen(RutaArchivo,"rb");
    int menor;
    int i,x;

    if(bufer!=NULL)
    {
        while(fread(&menor, sizeof(int),1,buffer)>0)
        {
            menor = BuscarMenorArray_Recursivamente(a,cant,i);
        }
    }
    else
    {
        printf("\nError en la busqueda de datos..");
    }

}

void InvertirElementos_Archivo_Recursivamente (char RutaArchivos)
{
    FILE * buffer = fopen(RutaArchivos,"wb");

    if(buffer!=NULL)
    {
        fread(buff)
    }
    else
    {

    }



}

































