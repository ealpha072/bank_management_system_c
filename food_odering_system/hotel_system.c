// C program to initialize the Food
// Ordering System
// Initialization
#include <stdio.h>

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
void signUp()

int choice;

int main(){
    while(1){
        printf("\n\nWelcome to Alpha fast foods\n");

        printf("\n\n\nMENU");
        printf("1) SIGNUP");
        printf("2)LOGIN");
        printf("3) EXIT");
        printf("Enter your choice here: ");

        switch (choice){
            case 1:{
                signup();
                break;
            }

            case 2:{
                login();
                break;
            }

            case 3: {
                exit(1);
            }

            default: {
                printf("\nPlease Enter the valid choice\n");
            }
        }
    }
}