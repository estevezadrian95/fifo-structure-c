//COLA ESTATICA
#include <stdio.h>
#include <stdlib.h>
#define TAM 5

typedef struct
{

}t_info;

typedef struct
{
    int pri, ult, cant;
    t_info cola[TAM];
}t_cola_s;

void crearCola(t_cola *);
int colaLlena(const t_cola *);
int aColar(t_cola *, const t_info *);
int colaVacia(const t_cola *);
int desaColar(t_cola *, t_info *);
void vaciarCola(t_cola *);
int verPrimero(const t_cola *, t_info *);

int main()
{
    t_info info;
    t_cola_s cola;
    crearCola(&cola);
    if(!colaLlena(&cola))
        if(aColar(cola,info))

}


void crear_cola_s ( t_cola_s *p )
{
    p->cant = 0;
    p->pri  = 0;
    p->ult  =-1;
}
///COLA LLENA
int cola_llena_s ( const t_cola_s *p )
{
    return p->cant == TAM_COLA;
}
///COLA VACIA
int cola_vacia_s ( const t_cola_s *p )
{
    return p->cant == 0;
}
///PONER EN COLA
int poner_en_cola_s ( t_cola_s *p, const t_info *d )
{
    if ( p->cant == TAM_COLA)
        return 0;

    p->cant ++;
    p->ult  ++;

    if( p->ult == TAM_COLA)
        p->ult = 0;

    p->cola[p->ult] = *d;
    return 1;
}
///VACIAR COLA
void vaciar_cola_s  ( t_cola_s *p)
{
    p->cant =  0;
    p->pri  =  0;
    p->ult  = -1;
}
///VER PRIMERO DE COLA
int ver_primero_cola_s  ( const t_cola_s *p, t_info *d )
{
    if( p->cant == 0)
        return 0;
    *d = p->cola [p->pri];
    return 1;
}
///SACAR DE COLA
int sacar_de_cola_s ( t_cola_s *p, t_info *d )
{
    if ( p-> cant == 0)
        return 0;

    *d = p->cola [p->pri];
    p->pri ++;

    if(p->pri == TAM_COLA)
        p->pri = 0;

    p->cant--;

    return 1;
}
