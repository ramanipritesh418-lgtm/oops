// Question: Write a menu-driven program to perform the following operations on Queue:
// 1. Insert
// 2. Delete
// 3. Display
// 💻 Complete Turbo C++ Code

#include <iostream.h>
#include <conio.h>

int queue[5];
int front = -1, rear = -1;

// Insert element
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
            front = 0;

        rear++;
        queue[rear] = value;

        cout << "\nElement Inserted";
    }
}

// Delete element
void del()
{
    if (front == -1)
    {
        cout << "\nQueue is Empty";
    }
    else
    {
        cout << "\nDeleted Element = " << queue[front];

        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
    }
}

// Display elements
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
            cout << queue[i] << " ";
    }
}

// Main function
void main()
{
    int choice;

    clrscr();

    while (1)
    {
        cout << "\n\n--- QUEUE MENU ---";
        cout << "\n1. Insert";
        cout << "\n2. Delete";
        cout << "\n3. Display";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
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
// --- QUEUE MENU ---
// 1. Insert
// 2. Delete
// 3. Display
// 4. Exit
// Enter choice: 1

// Enter value: 10
// Element Inserted

// Enter choice: 1
// Enter value: 20
// Element Inserted

// Enter choice: 3
// Queue Elements: 10 20

// Enter choice: 2
// Deleted Element = 10

// Enter choice: 3
// Queue Elements: 20
