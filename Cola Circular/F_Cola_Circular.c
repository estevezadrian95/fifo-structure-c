#include <stdio.h>
#include <stdlib.h>
#include"F_Cola_Circular.h"

void crear_cola_c ( t_cola_c *p )
{
    p->pri = NULL;
    p->ult = NULL;
}

int cola_llena_c ( const t_cola_c *p )
{
    t_nodo  *aux = ( t_nodo *) malloc( sizeof(t_nodo));
    free(aux);
    return aux == NULL;
}
int cola_vacia_c ( const t_cola_c *p )
{
    return p->pri == NULL;
}

int poner_en_cola_c ( t_cola_c *p, const t_info *d )
{
    t_nodo  *nue = (t_nodo *) malloc(sizeof(t_nodo));
    if(nue == NULL)
        return 0;
    nue->info   = *d;
    if(!p->pri)
    {
        p->pri   = nue;
        nue->sig = nue;
    }
    else
    {
        nue->sig = p->pri;
        p->ult->sig = nue;
    }
    p->ult=nue;
    return 1;
}

void vaciar_cola_c  ( t_cola_c *p)
{   //Recuerda la direccion del primer nodo.//
    t_nodo *rec=p->pri;
    t_nodo *aux;
    if(rec)
    {
        while(rec!=p->pri->sig)
        {
            aux=p->pri;
            p->pri=aux->sig;
            free(aux);
        }
        p->pri=NULL;
        free(p->ult);
        p->ult=NULL;
    }
}

int ver_primero_cola_c  ( const t_cola_c *p, t_info *d )
{
    if (p->pri == NULL)
        return 0;
    *d = p->pri->info;
    return 1;
}

int sacar_de_cola_c ( t_cola_c *p, t_info *d )
{
    t_nodo *aux;

    if(p->pri != p->pri->sig)///Si no es el ultimo nodo
    {
        *d          = p->pri->info;
        aux         = p->pri;
        p->pri      = aux->sig;
        p->ult->sig = p->pri;
        free(aux);
    }
    else
    {
        *d = p->pri->info;
        free(p->pri);
        p->pri = NULL;
        p->ult = NULL;
    }
    return 1;
}
