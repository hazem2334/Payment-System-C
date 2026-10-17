#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "card.h"
#include "server.h"

int checkbalance(int withdraw, int i) {
    int currentBalance = atol(cards[i].balance);
    int withdrawn1 = atol(cards[i].withdrawntoday);
    
    if (currentBalance < withdraw || withdraw > 10000 || (withdrawn1 + withdraw) > 20000) {
        printf("transaction failed\n");
        return -1;
    }
    
    if (currentBalance >= withdraw) {
        printf("withdraw succesful\n");
        currentBalance=currentBalance-withdraw;
        withdrawn1=withdrawn1+withdraw;
        sprintf(cards[i].balance,"%ld" ,currentBalance);
        sprintf(cards[i].withdrawntoday,"%ld",withdrawn1);
        return 1;
    }
    return -1;
}