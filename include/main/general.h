#ifndef GENERAL_H
#define GENERAL_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

extern float arg1;
extern float arg2;
extern float result;

extern float ftemp;

extern char confText[120];
extern int confLine;

extern bool showmem;
extern int memUsage;

extern void readpref();

#endif