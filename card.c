#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "card.h"


cardinfo cards[4] = {
    {"hazem",   "5326163217394921", "09", "2028", "300000", "0"},
    {"ahmad",   "3749129239123211", "09", "2028", "400000", "0"},
    {"mostafa", "2981638103910291", "09", "2028", "200000", "0"},
    {"omar",    "9381381783162938", "09", "2028", "600000", "0"}
};

int check(char *pan, char *name, char *year, char *month) {
    int a=0;
    for (int i=0;i<4;i++) {
        if (!strcmp(cards[i].pan,pan) && !strcmp(cards[i].name,name) && !strcmp(cards[i].expmonth,month) && !strcmp(cards[i].expyear,year)) {
            printf("welcome%s \n", cards[i].name);
            return i;
        }
    }
    if (a == 0) {
        printf("user not found\n");
        return -1;
    }
    return -1;
}