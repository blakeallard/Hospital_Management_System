Project Overview:
The Hospital Management System (HMS) is a simple C++ application designed to store and display patient information. The system allows users to enter the number of patients, input their details (such as name and age), and then displays the stored information. This system makes use of dynamic memory allocation to store patient objects and demonstrates object-oriented programming concepts such as classes, dynamic memory management, and functions.

Key Features:
Dynamic Memory Allocation: Utilizes pointers and new/delete operators to manage memory dynamically for storing patient objects.

Data Input and Validation: Accepts input for the number of patients, ensuring it stays within a predefined range (MAX_PAT), and collects individual patient data.

Display Information: After collecting patient information, the program displays each patient's details in a structured format.

Memory Management: Demonstrates the use of delete to deallocate memory after use, ensuring efficient memory management.

How it Works:
Input: The program prompts the user to enter the number of patients.

Patient Data Entry: For each patient, the program collects data (name and age) via the GetPatientInfo function.

Display: After gathering the information, the program displays it using the DisplayPatientInfo function.

Memory Cleanup: The program properly deallocates the memory used for storing patient objects with delete.

Skills Demonstrated:
Object-oriented programming in C++ using classes and dynamic memory allocation.

Use of pointers and handling dynamic arrays.

Basic I/O operations and input validation.

Proper memory management using new and delete.
