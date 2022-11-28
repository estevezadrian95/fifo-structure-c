#include "F_Cola_dinamica.h"

void Crear_Cola (t_cola *p)
{
    p->inicio   =   NULL;
    p->fin      =   NULL;
}

int Cola_Llena(const t_cola *p)
{
t_nodo *aux = (t_nodo*)malloc(sizeof(t_nodo)); //pido si hay lugar en la cola
free(aux);//libero el espacio
return aux==NULL;//devuelvo la condicion si se quedo sin espacio en cola
}

int Poner_en_Cola (t_cola *p, t_info *d)
{
    t_nodo *nuevo=(t_nodo)malloc(sizeof(t_nodo)); //pido un nuevo espacio en la cola

    if (nuevo==NULL)//si se quedo sin espacio en cola retorna 0
    {return 0;}

    nuevo->info         = *d;
    nuevo->siguiente    = NULL;

    if(p->inicio==NULL)//consulta si no hay nada en la cola(SI es el primero de la cola)
    {
        p->fin=nuevo;
        p->fin=nuevo;
    }
    else
    {
        p->fin->siguiente = nuevo;
        p->fin            = nuevo;
    }
return 1;
}

int Cola_Vacia (t_cola *p)
{
    return p->inicio==NULL;
}

int Ver_primero_Cola (t_cola *p,t_info *d)
{
    if(p->inicio==NULL)
    {return 0;}
    *d=p->inicio->info;
return 1;
}

void Vacia_Cola (t_cola *p)
{
    t_nodo *aux;

    while(p->inicio)
    {
        aux=p->inicio;
        p->inicio=aux->siguiente;
        free(aux);
    }
    p->fin=NULL;
}

int sacar_de_la_cola (t_cola *p, t_info *d)
{
    t_nodo *aux;
    if(p->inicio==NULL)
        return 0;
    aux=p->pri;
    *d=aux->info;
    p->inicio=aux->siguiente;
    free(aux);

    if(p->pri==NULL)
        p->fin=NULL;
return 1;
}

