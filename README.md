# Mini Banking System - C++

This is a **Mini Banking System** project developed in **C++** as part of a 1-day workshop by **Let'sUpgrade**, in collaboration with **Google Developer Group (GDG) MAD Mumbai**, **National Skill Development Corporation (NSDC)**, and **ITM Group of Institutions**.  

The project simulates basic banking operations for a single account using **Object-Oriented Programming (OOP)** concepts and handles input validation and error checks.

---
---
## Project Overview

The Mini Banking System allows a user to create a bank account and perform the following operations:  

- Deposit money  
- Withdraw money  
- Check balance  
- View account holder name  

All operations include checks for invalid inputs, such as negative or zero deposit amounts and withdrawals exceeding the balance.

---
---
## Features

- **Account Creation**:  
  Enter the account holder’s name and initial balance. The system ensures that balance cannot be negative.  

- **Deposit**:  
  Deposit an amount greater than zero. The system displays error messages for invalid deposits.  

- **Withdraw**:  
  Withdraw money from the account, only if sufficient balance is available.  

- **Balance Check**:  
  View the current account balance and account holder’s name.  

- **Account Holder Information**:  
  Display the name of the account holder.  

- **Input Validation**:  
  Handles invalid inputs and displays proper error messages.

---
---
## Code Explanation

The project uses **a single class `bank`** to store and manage account details:

- **Attributes**:  
  - `name` : Account holder's name  
  - `balance` : Current account balance  

- **Methods**:  
  - `deposite()` : Handles depositing money with input validation  
  - `withdraw()` : Handles withdrawals with balance checks  
  - `balance_check()` : Displays account holder name and current balance  
  - `check_holder_name()` : Displays only the account holder's name  

The **main function**:  
1. Takes user input to create an account.  
2. Uses a **menu-driven loop** to repeatedly perform operations until the user chooses to exit.  
3. Implements **switch-case statements** to select operations.  
4. Validates all user inputs, ensuring proper deposits, withdrawals, and menu selections.

---
---
## Sample Output

Enter Account Holders Name : John.

Enter Balance  : 1000



Enter the Operation you want to do 

1.Deposite 

2.Withdraw 

3.Balance Check 

4.Account Holder Name

5.Exit 



Enter the Operation Number : 1

Enter amount to deposite : -500

Error 

Negative Amount can not be deposited

Try again

Enter amount to deposite : 0

Error 

Zero amount cann't be Deposite

Try again

Enter amount to deposite : 500

Successfully Deposited : 500




Enter the Operation Number : 3

Account Holder Name : John

Account Balance : 1500




Enter the Operation Number : 2

Enter amount to Withdraw : 2000

Not suficiant balance




Enter the Operation Number : 2

Enter amount to Withdraw : 700

Successfully Withdrawed : 700




Enter the Operation Number : 3

Account Holder Name : John

Account Balance : 800




Enter the Operation Number : 4

Name of Account Holder : John




Enter the Operation Number : 5




-----------------------------

Thank you for Banking with Us

!!Have a Nice Day!!

-----------------------------

