// C program to initialize the Food
// Ordering System
// Initialization
#include <stdio.h>
#include <windows.h>
#include <time.h>

// Structure to store the user details
// i.e., Signup details

struct  userDetais {
    char username[100];
    int age;
    char password[100];
    char email[100];
    char mobile[10];
} add, check;

// Structure to store the hotels
// and their food details

struct hotels{
    char hotel[100];
    char first_food[20];
    char second_food[20];
    char third_food[20];
    int first, second, third, fourth;
};

//inpput new account
//void signUp();
int flag;

int main(){
    int choice;

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
    system("cls");

    switch(choice){
        case 1: signUp();
            break;
        case 2:login();
            break;
        default: printf("Invalid choice. Please enter valid choice");
    }
}

void signUp(){
    int success = 0;
    char temp_password[100];
    //time
    time_t t = time(NULL);
    struct tm *current_time;
    current_time = localtime(&t);
    char s[11];
    strftime(s, sizeof(s), "%m%d%y", current_time);

    FILE *ptr;

    if(access("user_records.csv", S_OK) == 0){
        //OPEN FILE IN APPEND MODE
        ptr = fopen("user_records.csv", "a");
        if(ptr == NULL){
            perror("Unable to open file user_records.csv");
            exit(0);
        }
    }else{
        //open and write headers
        ptr = fopen("user_records.csv", "w");

        if(ptr == NULL){
            perror("Unable to open file user_records.csv");
            exit(0);
        }
        fprintf(ptr, "Date,name,age,email,password,mobile");
    }

    printf("\n\n\t\tWELCOME TO ALPHA FAST FOODS");
    printf("\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Welcome to the signup page \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");

    printf("\n\tEnter your name: ");
    scanf("%s", add.username);

    printf("\n\tEnter your age: ");
    scanf("%s", &add.age);

    printf("\n\tEnter your email: ");
    scanf("%s", add.email);

    printf("\n\tEnter your password: ");
    scanf("%s", add.password);

    printf("\n\tConfirm your password: ");
    scanf("%s", temp_password);

    printf("\n\tEnter mobile number: ");
    scanf("%s", add.mobile);

    //write to file
    //fprintf(ptr, "Date,name,age,email,password,mobile");
    fprintf(ptr, "\n%s %s %d %s %s %s", s, add.username, add.age, add.email, add.password);
}

}
void login(){
    printf("\n\n\t\tWELCOME TO ALPHA FAST FOODS");
    printf("\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Welcome to the login page \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");

    printf("\n\tEnter your email address: ");
    scanf("%s", temp_email);

    printf("\n\tEnter your password: ");
    scanf("%s", temp_password_one);
}
