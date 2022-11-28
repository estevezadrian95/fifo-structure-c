#ifndef F_COLA_DINAMICA_H_INCLUDED
#define F_COLA_DINAMICA_H_INCLUDED

typedef struct
{
    long dni;
    char apynom[20];

}t_info;

typedef struct snodo
{
    t_info info;
    struct snodo *siguiente;
}t_nodo;

typedef struct
{
    t_nodo    *inicio,
              *fin;
}t_cola;




#endif // F_COLA_DINAMICA_H_INCLUDED
