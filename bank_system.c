#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

void menu(void){
    int choice;
    system("cls");
    system("color 6");
    printf("\n\n\t\tCUSTOMER ACCOUNT BANK MANAGEMENT SYSTEM");
    printf("\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Welcome to the main menu \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\t1.Create new account");
    printf("\n\t2.Update infomation of existing account");
    printf("\n\t3.Transact");
    printf("\n\t4.Check details of existing account");
    printf("\n\t5.View customer list");
    printf("\n\t6.Update infomation of existing account");
    printf("\n\t7.Exit\n");
    printf("\n\n\n\n\t1.Enter your choice here: ");

    scanf("%d", &choice);
    printf("User chosen option: %d\n", choice);

}

int main(){
    menu();
    return 0;
}
