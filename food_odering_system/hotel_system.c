// C program to initialize the Food
// Ordering System
// Initialization
#include <stdio.h>
#include <windows.h>

// Structure to store the user details
// i.e., Signup details

struct  userDetais {
    char username[100];
    int age;
    char password[100];
    char email[100];
    char mobile[10];
};

// Structure to store the hotels
// and their food details

struct hotels{
    char hotel[100];
    char first_food[20];
    char second_food[20];
    char third_food[20];
    int first, second, third, fourth;
};

// Initialize the hotels and details
struct hotels m[5];
struct userDetais s[100];

//inpput new account
//void signUp();

int choice;
int flag;
int temp_age;
char temp_name[100];
char temp_password_one[100];
char temp_password_two[100];
char temp_email[100];
char temp_mobie[100];

int main(){
    system("cls");
    system("color 5");
    printf("\n\n\t\tWELCOME TO ALPHA FAST FOODS");
    printf("\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Welcome to the main menu \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");

    printf("\n\t1). Signup (create account)");
    printf("\n\t2). Login");
    printf("\n\t3). Exit\n");
    printf("\n\n\tEnter your choice here: ");

    scanf("%d", &choice);
    printf("\n\n\tYou have chosen option: %d\n", choice);
}

void signUp(){
    printf("Welcome to the signup page");
    printf("Enter your name: ");
    scanf("%s", temp_name);

    printf("Enter your age: ");
    scanf("%s", &temp_age);

    printf("Enter your email: ");
    scanf("%s", temp_email);

    printf("Enter your password: ");
    scanf("%s", temp_password_one);

    printf("Confirm your password: ");
    scanf("%s", temp_password_two);

    printf("Enter mobile number: ");
    scanf("%s", temp_mobie);
}
//validate the user
int validate(){
    int i, j;

    //validate name
    for (i = 0; temp_name[i] != '\0'; i++){
        if (!(temp_name[i] >= 'a' && temp_name[i] <= 'z') ||
            (temp_name[i] >= 'A' && temp_name[i] <= 'Z')
        ){
            printf("Please enter a valid name: ");
            flag = 0;
            break;
        }
    }
}

void login(){
    printf("Welcome to the login page");

    printf("Enter your email address: ");
    scanf("%s", temp_email);

    printf("Enter your password: ");
    scanf("%s", temp_password_one);
}
