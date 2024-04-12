#include <stdio.h>
#include <time.h>
struct compu
{
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
};
typedef struct compu compu;

void mostrarLista(compu listaPC[]);
void masVieja(compu listaPC[]);
void mayorVelocidad(compu listaPC[]);

int main(){
    srand(time(NULL));
    char tipos[6][10]={"Intel","AMD","Celeron","Athlon","Core","Pentium"};
    compu compus[5];

    for (int i = 0; i < 5; i++)
    {
        compus[i].velocidad = 1+rand()%(3-1+1);
        compus[i].anio = 2015+rand()%(2023-2015+1);
        compus[i].cantidad = 1+rand()%(8-1+1);
        compus[i].tipo_cpu = tipos[1+rand()%(5-1+1)];
    }
    
    mostrarLista(compus);
    masVieja(compus);
    mayorVelocidad(compus);
    return 0;
}

void mostrarLista(compu listaPC[]){
    printf("****** Lista de PC *******\n");
    for (int i = 0; i < 5; i++)
    {
        printf("PC %d: \n", i);
        printf("Velocidad: %d\n", listaPC[i].velocidad);
        printf("Anio: %d\n", listaPC[i].anio);
        printf("Cantidad: %d\n", listaPC[i].cantidad);
        printf("Tipo: %s\n", listaPC[i].tipo_cpu);
        printf("-----------------\n");
    }
}

void masVieja(compu listaPC[]){
    int memoria,aux,indiceMasVieja;
    memoria = listaPC[0].anio;

    for (int i = 1; i < 5; i++)
    {
        aux = listaPC[i].anio;
        if (aux < memoria)
        {
            indiceMasVieja = i;
        }
    }
        printf("La PC más vieja es la PC %d: \n", indiceMasVieja);
        printf("Velocidad: %d\n", listaPC[indiceMasVieja].velocidad);
        printf("Anio: %d\n", listaPC[indiceMasVieja].anio);
        printf("Cantidad: %d\n", listaPC[indiceMasVieja].cantidad);
        printf("Tipo: %s\n", listaPC[indiceMasVieja].tipo_cpu);
        printf("-----------------\n");

}

void mayorVelocidad(compu listaPC[]){
        int memoria,aux,indiceMasVelocidad;
        memoria = listaPC[0].velocidad;

    for (int i = 1; i < 5; i++)
    {
        aux = listaPC[i].velocidad;
        if (aux < memoria)
        {
            indiceMasVelocidad = i;
        }
    }
        printf("La PC con más velocidad es la PC %d: \n", indiceMasVelocidad);
        printf("Velocidad: %d\n", listaPC[indiceMasVelocidad].velocidad);
        printf("Anio: %d\n", listaPC[indiceMasVelocidad].anio);
        printf("Cantidad: %d\n", listaPC[indiceMasVelocidad].cantidad);
        printf("Tipo: %s\n", listaPC[indiceMasVelocidad].tipo_cpu);
        printf("-----------------\n");
}