#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Transaction{
    int id;
    char *name;
    float amount;
    char type;
};

struct Budget{
    int id;
    int monthNumber;
    struct Transaction *transactions;
};

extern struct Budget *budgets;

void thickLine(){
    printf("\n=======================================================\n");
}

void thinLine(){
    printf("\n-------------------------------------------------------\n");
}

void listCommands(){
    printf("1.\tCreate New Budget\n");
    printf("2.\tList Budgets\n");
    printf("3.\tSwitch Budget");
    printf("4.\tDisplay Selected Budget\n");
    printf("5.\tAdd Transaction\n");
    printf("6.\tList All Transactions\n");
    printf("7.\tDelete Transactions\n");
}

void menu(){
    thickLine();
    printf("|\tBudget Budget\t\n");
    thickLine();
    int choice;
    while(1){
        thickLine();
        listCommands();
        thickLine();
        printf("\n> ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            default:
                break;
        }
    }
}

int main(){
    menu();
    return 0;
}

