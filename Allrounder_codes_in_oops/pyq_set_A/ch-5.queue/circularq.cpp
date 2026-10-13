// 📘 Practical: Circular Queue Using Array

// Question: Write a menu-driven program to implement Circular Queue using Insert, Delete and Display operations.

// 💻 Complete Turbo C++ Code
// Program: Circular Queue using Array
// Operations: Insert, Delete and Display

#include <iostream.h>
#include <conio.h>

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

// Function to insert an element
void insert()
{
    int value;

    // Check whether queue is full
    if ((rear + 1) % SIZE == front)
    {
        cout << "\nCircular Queue is Full";
    }
    else
    {
        cout << "\nEnter value: ";
        cin >> value;

        // First element
        if (front == -1)
        {
            front = 0;
        }

        // Move rear circularly
        rear = (rear + 1) % SIZE;

        queue[rear] = value;

        cout << "\nElement Inserted";
    }
}

// Function to delete an element
void del()
{
    // Check whether queue is empty
    if (front == -1)
    {
        cout << "\nCircular Queue is Empty";
    }
    else
    {
        cout << "\nDeleted Element = " << queue[front];

        // Only one element exists
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            // Move front circularly
            front = (front + 1) % SIZE;
        }
    }
}

// Function to display queue elements
void display()
{
    int i;

    if (front == -1)
    {
        cout << "\nCircular Queue is Empty";
    }
    else
    {
        cout << "\nQueue Elements: ";

        i = front;

        while (1)
        {
            cout << queue[i] << " ";

            if (i == rear)
            {
                break;
            }

            i = (i + 1) % SIZE;
        }
    }
}

// Main function
void main()
{
    int choice;

    clrscr();

    while (1)
    {
        cout << "\n\n--- CIRCULAR QUEUE ---";
        cout << "\n1. Insert";
        cout << "\n2. Delete";
        cout << "\n3. Display";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: ";

        cin >> choice;

        switch (choice)
        {
            case 1:
                insert();
                break;

            case 2:
                del();
                break;

            case 3:
                display();
                break;

            case 4:
                return;

            default:
                cout << "\nInvalid Choice";
        }
    }

    getch();
}


// 🖥️ Expected Output
// --- CIRCULAR QUEUE ---
// 1. Insert
// 2. Delete
// 3. Display
// 4. Exit
// Enter your choice: 1

// Enter value: 10
// Element Inserted

// Enter your choice: 1

// Enter value: 20
// Element Inserted

// Enter your choice: 1

// Enter value: 30
// Element Inserted

// Enter your choice: 3
// Queue Elements: 10 20 30

// Enter your choice: 2

// Deleted Element = 10

// Enter your choice: 3

// Queue Elements: 20 30
