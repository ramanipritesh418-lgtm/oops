//Question: Write a menu-driven program to implement Simple Queue
// using Insert, Delete and Display operations.

// Program: Simple Queue using Array
// Operations: Insert, Delete, Display

#include <iostream.h>
#include <conio.h>

int queue[5];
int front = -1;
int rear = -1;

// Function to insert an element
void insert()
{
    int value;

    if (rear == 4)
    {
        cout << "\nQueue is Full";
    }
    else
    {
        cout << "\nEnter value: ";
        cin >> value;

        if (front == -1)
        {
            front = 0;
        }

        rear++;
        queue[rear] = value;

        cout << "\nElement Inserted";
    }
}

// Function to delete an element
void del()
{
    if (front == -1)
    {
        cout << "\nQueue is Empty";
    }
    else
    {
        cout << "\nDeleted Element = " << queue[front];

        front++;

        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
}

// Function to display queue elements
void display()
{
    int i;

    if (front == -1)
    {
        cout << "\nQueue is Empty";
    }
    else
    {
        cout << "\nQueue Elements: ";

        for (i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
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
        cout << "\n\n--- SIMPLE QUEUE ---";
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
