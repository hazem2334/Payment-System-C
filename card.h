#ifndef CARD_H
#define CARD_H
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

  typedef struct {
    char name[20];
    char pan[20];
    char expmonth[3];
    char expyear[5];
    char balance[9];
    char withdrawntoday[10];
} cardinfo ;
extern cardinfo cards[4];

int check(char *pan, char *name, char *year, char *month);
#endif