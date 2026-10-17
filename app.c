#include <stdio.h>
#include <stdlib.h>
#include "card.h"
#include "server.h"
#include "app.h"

void appStart(void) {
int monthnow=10;   
int yearnow=2026;
    
    while(1){
        char name[20];
        char pan[20];
        char expmonth[3];
        char expyear[5];
        int withdraw = 0;
        
    printf("please enter the pan:");
     scanf("%19s",pan);
        
    printf("please enter the name:");
      scanf("%s",name);
         
    printf("please enter the expiry month:");
     scanf("%2s",expmonth);
        
        printf("please enter the expiry year:");
            scanf("%4s",expyear);
        
    int month=atoi(expmonth);
         int year=atoi(expyear);
        
        if (month>12||month<1) {
            printf("invalid month\n");
            continue;
        }
        
    if (year<yearnow||(year==yearnow&&month<monthnow)) {
            printf("Card expired\n");
            continue;
        }
        
            int a=check(pan,name,expyear,expmonth);
        
        if (a != -1) { 
            printf("please enter the amount you want to withdraw: ");
            scanf("%d",&withdraw); 
            checkbalance(withdraw,a);
        }
        
        printf("next transaction is ready\n");
    }
}