//
// Created by joao on 6/5/25.
//

#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

/// BIBLIOTECAS ///
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>
#include <stdarg.h>

/// MACROS ///
/// --- Operações --- ///
#define $for(num) for(int i = 0; i < num; i++)
#define $for_(init,lim) for(int i = init; i < lim; i++)
#define $for__(init,lim) for(int i = init; i <= lim; i++)
#define $ter(condicao,true,false) (condicao) ? true : false

/// --- ATALHOS --- ///
#define rt return

/// UTILS ///
/// --- Operadores --- ///
#define and         &&
#define or          ||
#define not         !=
#define beq         ==
#define ben         == NULL
#define bgt         >
#define bge         >=
#define blt         <
#define ble         <=

/// --- ATALHOS --- ///
#define _i          %d
#define _c          %c
#define _s          %s
#define _f          %f

#define str         char*
#define st          typedef struct
#define private     static
#define new_line    println("");


/// DEFINE ERRORS ///



/// FUNÇÔES ///
void setup();
void print(const char* fmt, ...);
void println(const char* fmt, ...);


#endif //BIBLIOTECA_H
