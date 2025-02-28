# Library Management System

A simple **Library Management System** implemented in **C** that allows students to check the availability of books, issue them, and calculate fines based on the number of days the book is borrowed.

## Features
- Allows students to check book availability based on predefined book numbers.
- Books are assigned to specific rows in the library.
- Accepts **student ID** and **issue date** as input.
- Calculates **fine** if the book is kept for more than 30 days (₹2 per extra day).
- Displays appropriate messages based on book availability and borrowing duration.

## Technologies Used
- **Programming Language:** C
- **Concepts Used:** Conditional Statements (`if-else`), User Input (`scanf`), Basic Arithmetic Operations.

## How to Use
1. Run the program in any C compiler.
2. Enter the **10-digit Student ID**.
3. Choose a book from the list (1-10).
4. If available, enter the **issue date** in `dd mm yyyy` format.
5. Enter the number of days the book will be borrowed.
6. If the book is kept for more than **30 days**, a fine of **₹2 per extra day** is calculated.
7. If the book is returned within **30 days**, a **THANK YOU** message is displayed.

## Project Details
- **Developed in:** 2023
- **Status:** Completed
- **Language Used:** C

## Future Enhancements
- Implement book return functionality.
- Store book records using **file handling**.
- Improve user interaction using **menu-driven approach**.
