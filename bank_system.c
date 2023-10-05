#include <stdio.h>
#include <unistd.h>
#include <windows.h>
#include <stdlib.h>

int main_exit;
struct bank_user{
    char email[100];
    char first_name[100];
    char last_name[100];
    double phone_number;
    char dob[12];
    char id_number[10];
}add;

void menu(void){
    int user_choice;
    system("cls");
    system("color 9");
    printf("\n\n\t\tCUSTOMER ACCOUNT BANK MANAGEMENT SYSTEM");
    printf("\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Welcome to the main menu \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\t1.Create new account");
    printf("\n\t2.Login to existing account");
    printf("\n\t3.View customer list");
    printf("\n\t4.Exit\n");
    printf("\n\n\tEnter your choice here: ");

    scanf("%d", &user_choice);
    //printf("\n\tUser chosen option: %d\n", user_choice);
    system("cls");

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
    system("cls");
    printf("\n\n\t\tThank you for choosing our bank!!! \n\n");
}

void login(){
    char username[20];
    char password[100];
    system("cls");
    printf("\n\n\t\tALPHA BANK MANAGEMENT SYSTEM");
    printf("\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Welcome to the login page \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\tEnter your username: ");
    scanf("%s", &username);
    printf("\n\tYour username is: %s\n", username);

    printf("\n\tEnter your password: ");
    scanf("%s", &password);
    printf("\n\tYour password is: %s\n", username);
    //printf("\n\tEnter your password: ");
    //system("cls");
}

void create_new_account(){
    const char *filename = "user_db.csv";
    FILE *file = fopen(filename, "a+");
    fprintf(file, "%s, %s, %s, %s, %s, %s\n", "First_name", "last_name", "email", "phone_number", "date_of_birth", "id_number");

    if(file == NULL){
        //file doesnt exist so create and open in append
        file = fopen(filename, "a+");
        fprintf(file, "%s, %s, %s, %s, %s, %s\n", "First_name", "last_name", "email", "phone_number", "date_of_birth", "id_number");

        if (file == NULL){
            perror("Unable to create or open file ");
            return 1;
        }
        printf("File sucesfully created and opened in append extended mode");
    }else{
        printf("File exists and has been opened in append mode");
    }

    //char sign_up_errors[];
    system("cls");
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
            add.first_name,
            add.last_name,
            add.email,
            add.phone_number,
            add.dob,
            add.id_number);

    fclose(file);
    printf("\nAccount created successfully!!!");

    //system("cls");
}

int main(){
    menu();
    return 0;
}


