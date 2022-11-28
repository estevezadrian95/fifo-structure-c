#ifndef F_COLA_CIRCULAR_H_INCLUDED
#define F_COLA_CIRCULAR_H_INCLUDED

typedef struct
{

}t_info;

typedef struct snodo
{
    t_info info;
    struct snodo *sig;
}t_nodo;

typedef struct
{
    t_nodo    *pri,
              *ult;
}t_cola_c;


void crear_cola_c ( t_cola_c *p );
int cola_llena_c ( const t_cola_c *p );
int cola_vacia_c ( const t_cola_c *p );
int poner_en_cola_c ( t_cola_c *p, const t_info *d );
void vaciar_cola_c  ( t_cola_c *p);
int ver_primero_cola_c  ( const t_cola_c *p, t_info *d );
int sacar_de_cola_c ( t_cola_c *p, t_info *d );


#endif // F_COLA_CIRCULAR_H_INCLUDED
