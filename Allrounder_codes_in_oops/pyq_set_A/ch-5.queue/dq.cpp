// 📘 Practical: Double Ended Queue (Deque)

// Question: Write a menu-driven program to implement Double Ended Queue using Insert, Delete and Display operations.

// Program: Double Ended Queue (Deque)
// Operations: Insert Front, Insert Rear,
// Delete Front, Delete Rear and Display

#include <iostream.h>
#include <conio.h>

#define SIZE 5

int dq[SIZE];
int front = -1;
int rear = -1;

// Insert element at Front
void insertFront()
{
    int value;

    if ((front == 0 && rear == SIZE - 1) ||
        (front == rear + 1))
    {
        cout << "\nDeque is Full";
    }
    else
    {
        cout << "\nEnter value: ";
        cin >> value;

        if (front == -1)
        {
            front = rear = 0;
        }
        else if (front == 0)
        {
            front = SIZE - 1;
        }
        else
        {
            front--;
        }

        dq[front] = value;
        cout << "\nElement Inserted at Front";
    }
}

// Insert element at Rear
void insertRear()
{
    int value;

    if ((front == 0 && rear == SIZE - 1) ||
        (front == rear + 1))
    {
        cout << "\nDeque is Full";
    }
    else
    {
        cout << "\nEnter value: ";
        cin >> value;

        if (front == -1)
        {
            front = rear = 0;
        }
        else if (rear == SIZE - 1)
        {
            rear = 0;
        }
        else
        {
            rear++;
        }

        dq[rear] = value;
        cout << "\nElement Inserted at Rear";
    }
}

// Delete element from Front
void deleteFront()
{
    if (front == -1)
    {
        cout << "\nDeque is Empty";
    }
    else
    {
        cout << "\nDeleted Element = " << dq[front];

        if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == SIZE - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
    }
}

// Delete element from Rear
void deleteRear()
{
    if (front == -1)
    {
        cout << "\nDeque is Empty";
    }
    else
    {
        cout << "\nDeleted Element = " << dq[rear];

        if (front == rear)
        {
            front = rear = -1;
        }
        else if (rear == 0)
        {
            rear = SIZE - 1;
        }
        else
        {
            rear--;
        }
    }
}

// Display all elements
void display()
{
    int i;

    if (front == -1)
    {
        cout << "\nDeque is Empty";
    }
    else
    {
        cout << "\nDeque Elements: ";

        i = front;

        while (1)
        {
            cout << dq[i] << " ";

            if (i == rear)
                break;

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
        cout << "\n\n--- DOUBLE ENDED QUEUE ---";
        cout << "\n1. Insert Front";
        cout << "\n2. Insert Rear";
        cout << "\n3. Delete Front";
        cout << "\n4. Delete Rear";
        cout << "\n5. Display";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";

        cin >> choice;

        switch (choice)
        {
            case 1:
                insertFront();
                break;

            case 2:
                insertRear();
                break;

            case 3:
                deleteFront();
                break;

            case 4:
                deleteRear();
                break;

            case 5:
                display();
                break;

            case 6:
                return;

            default:
                cout << "\nInvalid Choice";
        }
    }

    getch();
}
