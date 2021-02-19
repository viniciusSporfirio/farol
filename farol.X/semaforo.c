/*
 * File:   semaforo.c
 * Author: 20185327
 *
 * Created on 19 de Fevereiro de 2021, 15:15
 */


#include <xc.h>
#include "config.h"
#define VERMELHO          PORTDbits.RD7
#define AMARELO           PORTDbits.RD6
#define VERDE             PORTDbits.RD5
#define VERMELHOPED       PORTDbits.RD3
#define VERDEPED          PORTDbits.RD2
#define BOTAO             PORTDbits.RD0
void semaforo_init(void)

{  //configuracão de entrada e saidas
    
    TRISDbits.TRISD0 = 1;
    TRISDbits.TRISD2 = 0;
    TRISDbits.TRISD3 = 0;
    TRISDbits.TRISD5 = 0;
    TRISDbits.TRISD6 = 0;        
    TRISDbits.TRISD7 = 0;

   //configuração de saidas

    PORTDbits.RD7 = 0;
    PORTDbits.RD6 = 0;
    PORTDbits.RD5 = 0;        
    PORTDbits.RD3 = 0;
    PORTDbits.RD2 = 0;
           
}
void verde( int x )
{
    VERDE = x;
}
void amarelo( int x )
{
    AMARELO = x;
}
void vermelho( int x)
{
    VERMELHO = x;
}
void verdePed( int x )
{
    VERDEPED = x;
}
void vermelhoPed( int x )
{
    VERMELHOPED = x;
}
int botao(void)
{
    return(BOTAO);
}
