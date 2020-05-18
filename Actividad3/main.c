#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#define TAM 5
typedef struct
{
    int id;
    char procesador[20];
    char marca[20];
    float precio;

} eNotebook;
void ordenarNotebooks(eNotebook lista[],int tam);
void mostrar(eNotebook lista[], int tam);

int main()
{
    eNotebook lista[TAM]= {{1,"Intel","Hp",20000},
        {2,"Intel","Asus",20000},
        {3,"Intel","Hp",30000},
        {4,"Amd","Hp",30500},
        {5,"Intel","Hp",21000}
    };

    mostrar(lista,TAM);
    ordenarNotebooks(lista,TAM);

    system("pause");
    system("cls");

    mostrar(lista,TAM);
    return 0;
}
void ordenarNotebooks(eNotebook lista[],int tam)
{
    eNotebook auxLista;
    for(int i=0; i<tam; i++)
    {

        for(int j=i+1; j<tam; j++)
        {
            if(strcmp(lista[i].marca,lista[j].marca)>0)
            {
                auxLista=lista[i];
                lista[i]=lista[j];
                lista[j]=auxLista;
            }
            else if(strcmp(lista[i].marca,lista[j].marca)==0&&lista[i].precio>lista[j].precio)
            {
                auxLista=lista[i];
                lista[i]=lista[j];
                lista[j]=auxLista;
            }

        }
    }
}
void mostrar(eNotebook lista[], int tam)
{

    for(int i=0; i<tam; i++)
    {
        printf("%d   %s   %s  %f\n ",lista[i].id,lista[i].procesador,lista[i].marca,lista[i].precio);
    }



}
