#include <stdio.h>
#include <unistd.h>
//#include <windows.h>
#include <stdlib.h>
#include "helper_functions.h"
#include "fxn_prototype.h"

int main_exit;
struct bank_user{
    char email[100];
    char first_name[100];
    char last_name[100];
    double phone_number;
    char dob[12];
    int id_number;
}add;

void menu(void){
    int user_choice;
    system("clear");
   // system("color 9");
    printf("\n\n\t\tCUSTOMER ACCOUNT BANK MANAGEMENT SYSTEM");
    printf("\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Welcome to the main menu \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\t1.Create new account");
    printf("\n\t2.Login to existing account");
    printf("\n\t3.View customer list");
    printf("\n\t4.Exit\n");
    printf("\n\n\tEnter your choice here: ");

    scanf("%d", &user_choice);
    //printf("\n\tUser chosen option: %d\n", user_choice);
    //system("cls");

    switch(user_choice){
        case 1:
            create_new_account();
            break;
        case 2:
            login();
            break;
        case 4:
            close_app();
            break;
    }
}

void close_app(){
    //system("cls");
    printf("\n\n\t\tThank you for choosing our bank!!! EXiting application \n\n");
    sleep(3);
    system("clear");
}

void login(){
    char username[20];
    char password[100];
    system("clear");
    printf("\n\n\t\tALPHA BANK MANAGEMENT SYSTEM");
    printf("\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Welcome to the login page \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\tEnter your username: ");
    scanf("%s", username);
    printf("\n\tYour username is: %s\n", username);

    printf("\n\tEnter your password: ");
    scanf("%s", password);
    printf("\n\tYour password is: %s\n", username);
    //printf("\n\tEnter your password: ");
    //system("cls");
}

void create_new_account(){
    const char *filename = "user_db.csv";
    FILE *file;

    if(access(filename, F_OK) != -1){
            //file exists, open in append extended
        file = fopen(filename, "a+");

        if(file == NULL){
            perror("Unable to open file");
        }
    }else{
        //file doesn't exist
        file = fopen(filename, "a+");

        if(file == NULL){
            perror("Unable to open file");
        }

        fprintf(
                file,
                "%s, %s, %s, %s, %s, %s\n",
                "First_name", "last_name", "email", "phone_number", "date_of_birth", "id_number");
    }

    //char sign_up_errors[];
    system("clear");
    printf("\n\n\t\tALPHA BANK MANAGEMENT SYSTEM");
    printf("\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Welcome to the new user page \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");

    printf("\n\t1. Enter your first name: ");
    scanf("%s", add.first_name);
    printf("\n\t2. Enter your last name: ");
    scanf("%s", add.last_name);
    printf("\n\t1. Enter your email address: ");
    scanf("%s", add.email);
    printf("\n\t3. Enter your phone number: ");
    scanf("%lf", &add.phone_number);
    printf("\n\t4. Enter your date of birth (mm/dd/yyyy): ");
    scanf("%s", add.dob);
    printf("\n\t5. Enter your id number: ");
    scanf("%d", &add.id_number);

    fprintf(
            file,
            "%s, %s, %s, %lf, %s, %d\n",
            add.first_name,add.last_name,add.email,add.phone_number,add.dob,add.id_number);

    fclose(file);
    printf("\nAccount created successfully!!!\n");
    printf("Taking you to main menu in a few!!");
    sleep(2);

    system("clear");
    menu();

    //system("cls");
}

int main(){
    //system("konsole -e ./bank_system");
    menu();
    return 0;
}


