## Prerequisite: 
Modular Approach in Programming Problem Statement: Write C program to implement Food ordering with the following functionalities:
1. Login & Signup
2. Search by Food
3. Search by hotels
4. Cart & Order Confirmation
5. Approach and Functionality:

## Signup Functionality
This is the main function for signup, From here we are calling the account_check() function to validate the inputs. Following are the functionalities:

1. Input the username, age, email, password, confirm the password, and mobile number.
2. Validate the inputs
3. Username must contain alphabets.
4. Age must be greater than and not equal to 0.
5. Email must contain @, a comma and length should be greater than 5.
6. Passwords must contain length between 8 to 12 with at least one uppercase, lowercase, number and special character. Both password and confirm password should be the same.
7. Mobile number should contain numbers and exactly 10 digits.
8. After the successful validation of all input fields, it checks whether the same account already exists or not through account_check() functionality.

## Login Functionality
This function implements the login features of our project. While login, the Email, and Password are validated and checked whether it is already signed up. After the successful login, there is an option to choose either Search_by_food() or Search_by_hotels() functionalities.

