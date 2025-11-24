#include "../../include/main/general.h"
#include "../../include/main/vecf.h"
#include "../../include/main/shapes.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

float arg1 = 0.0f;
float arg2 = 0.0f;
float result = 0.0f;

float ftemp = 0.0f;

char confText[120];
int confLine = 1;

bool showmem = false;
int memUsage = sizeof(arg1) + sizeof(arg2) + sizeof(result) + sizeof(confText) + sizeof(confLine) + sizeof(showmem) + sizeof(memUsage) + sizeof(r) + sizeof(y) + sizeof(V) + sizeof(areaX) + sizeof(areaZ) + sizeof(base) + sizeof(area) + sizeof(baseline);

void readpref(){
    FILE *file = fopen("../../etc/pref.conf", "r");

    if(file){
        while (fgets(confText, sizeof(confText), file)) {
            if(confLine > 2){
                break;
            }
            if(strcmp(confText, "SHOWMEM")){
                showmem = true;
            }
            confLine++;
        }
        fclose(file);
    }
}