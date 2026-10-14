/*
================================================================
RAN-2411000903022002 - C
S.Y.B.C.A. (Sem. - III) Examination December - 2025

Major - 2 : Object Oriented Programming And Data Structures (PR)

Q.1 Write a program to create a class Student (rno, name)
    and class Marksheet (sub1, sub2, sub3, total, percentage).
    Inherit Student into Marksheet and display the detail
    report with at least five records. (20 Marks)

Q.2 Viva + Journal (05 Marks)
================================================================

CONCEPT:
Student -> Base Class
Marksheet -> Derived Class

Student Properties:
    rno
    name

Marksheet Properties:
    sub1
    sub2
    sub3
    total
    percentage

The program accepts and displays at least 5 student records.
================================================================
*/


// ========================= CODE ===============================

#include <iostream.h>
#include <conio.h>

class Student
{
public:
    int rno;
    char name[30];
};

class Marksheet : public Student
{
public:
    int sub1, sub2, sub3;
    int total;
    float percentage;

    void calculate()
    {
        total = sub1 + sub2 + sub3;
        percentage = total / 3.0;
    }
};

void main()
{
    clrscr();

    Marksheet s[5];

    // Input 5 student records
    for(int i = 0; i < 5; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << endl;

        cout << "Enter Roll No: ";
        cin >> s[i].rno;

        cout << "Enter Name: ";
        cin >> s[i].name;

        cout << "Enter Subject 1 Marks: ";
        cin >> s[i].sub1;

        cout << "Enter Subject 2 Marks: ";
        cin >> s[i].sub2;

        cout << "Enter Subject 3 Marks: ";
        cin >> s[i].sub3;

        s[i].calculate();
    }

    // Display detail report
    cout << "\n\n========== STUDENT MARKSHEET REPORT ==========" << endl;

    for(int i = 0; i < 5; i++)
    {
        cout << "\n----------------------------------------" << endl;

        cout << "Roll No     : " << s[i].rno << endl;
        cout << "Name        : " << s[i].name << endl;
        cout << "Subject 1   : " << s[i].sub1 << endl;
        cout << "Subject 2   : " << s[i].sub2 << endl;
        cout << "Subject 3   : " << s[i].sub3 << endl;
        cout << "Total       : " << s[i].total << endl;
        cout << "Percentage  : " << s[i].percentage << "%" << endl;
    }

    getch();
}


/*
========================== OUTPUT ===============================

Enter details of Student 1
Enter Roll No: 101
Enter Name: Ram
Enter Subject 1 Marks: 70
Enter Subject 2 Marks: 80
Enter Subject 3 Marks: 90

Enter details of Student 2
Enter Roll No: 102
Enter Name: Raj
Enter Subject 1 Marks: 60
Enter Subject 2 Marks: 70
Enter Subject 3 Marks: 80

Enter details of Student 3
Enter Roll No: 103
Enter Name: Amit
Enter Subject 1 Marks: 75
Enter Subject 2 Marks: 85
Enter Subject 3 Marks: 90

Enter details of Student 4
Enter Roll No: 104
Enter Name: Jay
Enter Subject 1 Marks: 65
Enter Subject 2 Marks: 75
Enter Subject 3 Marks: 85

Enter details of Student 5
Enter Roll No: 105
Enter Name: Dev
Enter Subject 1 Marks: 80
Enter Subject 2 Marks: 90
Enter Subject 3 Marks: 95


========== STUDENT MARKSHEET REPORT ==========

----------------------------------------
Roll No     : 101
Name        : Ram
Subject 1   : 70
Subject 2   : 80
Subject 3   : 90
Total       : 240
Percentage  : 80

----------------------------------------
Roll No     : 102
Name        : Raj
Subject 1   : 60
Subject 2   : 70
Subject 3   : 80
Total       : 210
Percentage  : 70

----------------------------------------
Roll No     : 103
Name        : Amit
Subject 1   : 75
Subject 2   : 85
Subject 3   : 90
Total       : 250
Percentage  : 83.3333

----------------------------------------
Roll No     : 104
Name        : Jay
Subject 1   : 65
Subject 2   : 75
Subject 3   : 85
Total       : 225
Percentage  : 75

----------------------------------------
Roll No     : 105
Name        : Dev
Subject 1   : 80
Subject 2   : 90
Subject 3   : 95
Total       : 265
Percentage  : 88.3333


======================= EXPLANATION =============================

1. STUDENT CLASS
----------------
Student is the Base Class.

It contains:

    int rno;
    char name[30];

rno stores the Roll Number.
name stores the Student Name.


2. MARKSHEET CLASS
------------------
Marksheet is the Derived Class.

It inherits Student using:

    class Marksheet : public Student

Therefore, Marksheet can use:

    rno
    name

from Student class.


3. MARKSHEET VARIABLES
----------------------
Marksheet contains:

    sub1
    sub2
    sub3
    total
    percentage

These store subject marks, total marks and percentage.


4. CALCULATE FUNCTION
---------------------
The calculate() function calculates total and percentage.

Total:

    total = sub1 + sub2 + sub3;

Percentage:

    percentage = total / 3.0;


5. FIVE RECORDS
---------------
The statement:

    Marksheet s[5];

creates 5 objects.

    s[0] -> Student 1
    s[1] -> Student 2
    s[2] -> Student 3
    s[3] -> Student 4
    s[4] -> Student 5


6. INPUT LOOP
-------------
The first for loop runs 5 times and accepts:

    Roll No
    Name
    Subject 1
    Subject 2
    Subject 3

for each student.


7. CALCULATION
--------------
After entering marks:

    s[i].calculate();

is called.

It calculates total and percentage for each student.


8. DISPLAY REPORT
-----------------
The second for loop displays the complete
detail report of all 5 students.

It displays:

    Roll No
    Name
    Subject 1
    Subject 2
    Subject 3
    Total
    Percentage


==================== IMPORTANT EXAM LINES =======================

Inheritance:
    class Marksheet : public Student

Five Records:
    Marksheet s[5];

Total:
    total = sub1 + sub2 + sub3;

Percentage:
    percentage = total / 3.0;

Calculate Function:
    void calculate()

Input Loop:
    for(int i = 0; i < 5; i++)

Display Loop:
    for(int i = 0; i < 5; i++)


======================== QUICK REVISION =========================

Student
   |
   v
Marksheet
   |
   v
5 Records
   |
   v
Input Marks
   |
   v
Calculate Total
   |
   v
Calculate Percentage
   |
   v
Display Detail Report


========================== RESULT ===============================

This program demonstrates:

    ✔ Class
    ✔ Object
    ✔ Inheritance
    ✔ Base Class
    ✔ Derived Class
    ✔ Array of Objects
    ✔ Function
    ✔ for Loop
    ✔ Total Calculation
    ✔ Percentage Calculation
    ✔ Five Student Records

================================================================
*/
