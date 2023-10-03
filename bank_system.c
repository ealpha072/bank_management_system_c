#include <stdio.h>
#include <unistd.h>
#include <windows.h>
#include <stdlib.h>

int main_exit;

void menu(void){
    int user_choice;
    system("cls");
    system("color 6");
    printf("\n\n\t\tCUSTOMER ACCOUNT BANK MANAGEMENT SYSTEM");
    printf("\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Welcome to the main menu \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\t1.Create new account");
    printf("\n\t2.Login to existing account");
    printf("\n\t3.View customer list");
    printf("\n\t4.Exit\n");
    printf("\n\n\tEnter your choice here: ");

    scanf("%d", &user_choice);
    printf("\n\tUser chosen option: %d\n", user_choice);
    system("cls");

    switch(user_choice){
        case 4:
            close_app();
            break;
    }
}

int close_app(){
    printf("\n\n\t\tThank you for choosing our bank\n\n");
}


int main(){
    menu();
    return 0;
}


