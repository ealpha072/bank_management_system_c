Problem Statement: 
Write C program to build a Software for Examination Management System that can perform the following operations: 
 
Add/Delete the Details of the Students
Attendance Monitoring of the students
Set/Edit Eligibility criteria for exams
Check Eligible Students for Exams
Print all the records of the students

Approach: The idea is to form an individual function for each operation. All the functions are unified together with switch cases to form software. Below is the illustration of the functions: 
 

1. ## execute(): 
This function will shows the available choices for the software and will perform the below functionality using Switch Statements. 
Functionality: 
Add Student Details
Show Eligible Students
Delete Student Record
Update Eligibility Criteria
Print Details of Students

2. ## add(): 
This function that get the data from the user and update the list of the students. While adding the student into the list, check for the uniqueness of the Roll Number of the student. Details of the students to be added are: 
Name of Student
Roll Number
Fees Status
Attendance Record of student

3. ##eligibleStudents(): 
This function shows the previous attendance percentage required for exams and get the data from the user and update the eligibility for the exams. It also updates the fee status required for the eligibility of exams by iterating over the List of the student records and for every student check the attendance percentage is above the percentage required and fee status of the student. 
 
4. ## print_student(): 
This function iterate over the list of students and print the details of the student. 
 
5. ## delete(): 
This function get the student roll number to delete the student record and update the student’s list. 