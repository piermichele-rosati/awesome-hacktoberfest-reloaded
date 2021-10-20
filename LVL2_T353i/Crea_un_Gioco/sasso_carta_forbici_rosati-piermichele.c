#include <stdio.h>

int menu();

int main() {

    int choice = menu();


    return 0;
}

int menu(){
    int choice;
    printf("*----------------------------------*");
    printf("1. Play game");
    printf("2. How to play");
    printf("0. Exit");

    do{
        printf("Enter a choice (0-2): ");
        scanf("%d",&choice);
    }while(choice < 0 || choice > 2);

    return choice;
}

