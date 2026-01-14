# C Restaurant Billing System

A simple **Restaurant / Canteen Billing System** written in C.  
This program allows the user to generate an invoice for multiple food items, calculate the total bill, and display date & time of the order. It is designed using **basic C concepts** like loops, switch-case, functions, and arrays are avoided to keep it simple and exam-friendly.  

## Features

- Menu of 13 food items with their codes and prices.
- User can input **item code** and **quantity**.
- Calculates total for each item (`price × quantity`) and grand total.
- Handles **invalid item codes** and **invalid quantities**.
- Automatically prints **invoice** with serial numbers, date, and time.
- Compatible with **online compilers** (no Turbo C `conio.h` required).

## Usage

1. Compile the program using a C compiler:
   ```bash
   gcc main.c -o restaurant
2. Run the Program:
./restaurant
3. EXAMPLE
  Enter Item Code and Quantity (0 0 to finish): 1 2
  Enter Item Code and Quantity (0 0 to finish): 3 1
  Enter Item Code and Quantity (0 0 to finish): 0 0
4. OUTPUT
   =========== MENU ===========
1  Roti            Rs.15
2  Fruit Salad     Rs.450
...
============================

Enter Item Code and Quantity (0 0 to finish): 1 2
1   Roti            15    2    30
Enter Item Code and Quantity (0 0 to finish): 3 1
2   Biryani         490   1   490
Enter Item Code and Quantity (0 0 to finish): 0 0
--------------------------------
TOTAL BILL: Rs.520
--------------------------------
Thank you for visiting!
Contact: 0321-9670967


