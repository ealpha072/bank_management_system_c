#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

struct date{
    int month, day, year;
};

struct{
    char name[60];
    int acc_no, age;
    char address[60];
    char nationality[15];
    int id_no;
    double phone_no;
    char acc_type[10];
    float amount;
    struct date dob;
    struct date deposit;
    struct date withdraw;
} add, update, check, rem, transaction;

float interest(float t, float amount, int rate){
    float SI;
    SI = (rate * t * amount)/100.0;
    return (SI);
}


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
    printf("\n\n\n\n\t.Enter your choice here: ");

    scanf("%d", &choice);
    printf("\n\tUser chosen option: %d\n", choice);

    system("cls");
    switch(choice){
        case 1: new_account();
        break;
    }

}

void new_account(){
    FILE *ptr;
    ptr = fopen("records.dat", "a+");

    system("cls");
    printf("\n\n\t\xB2\xB2\xB2 ADD RECORD \xB2\xB2\xB2\xB2");
    printf("\n\n\nEnter today's date ()mm/dd/yyyy: ");
    scanf("%d/%d/%d", &add.deposit.month, &add.deposit.day, &add.deposit.year);
    printf("\n Enter account number: ");
    scanf("%d", &add.acc_no);
    printf("\n Enter your name: ");
    scanf("%s", &add.name);
    printf("\n Enter your date of birth(mm/dd/yyy): ");
    scanf("%d/%d/%d", &add.dob.month, &add.dob.day, &add.dob.year);
    printf("\n Enter the age: ");
    scanf("%d", &add.age);
    printf("\n Enter your address: ");
    scanf("%s", &add.address);
    printf("\n Enter id number: ");
    scanf("%d", &add.id_no);
    printf("\n Enter phone number: ");
    scanf("%lf", &add.phone_no);
    printf("\n Type of account: \n\t#Savings\n\t#Current\n\t#Fixed\n\nEnter your choice: ");
    scanf("%s", &add.acc_type);

    fprintf(ptr, "%s %d %d %s %d %lf %s",
            add.name, add.acc_no, add.age, add.address, add.id_no, add.phone_no,
            add.acc_type);

    fclose(ptr);
    printf("\nAccount created Successfully");
}

int main(){
    menu();
    return 0;
}
