// 📘 OOPS & DS Practical: Stack Operations (20 Marks)
// Question: Write a menu-driven program to perform the following Stack operations:
// 1. Push
// 2. Pop
// 3. Peep
// 💻 Complete Turbo C++ Code
#include <iostream.h>
#include <conio.h>

int stack[5];
int top = -1;

// Push operation
void push()
{
    int value;

    if (top == 4)
    {
        cout << "\nStack is Full";
    }
    else
    {
        cout << "\nEnter value: ";
        cin >> value;

        top++;
        stack[top] = value;

        cout << "\nElement Pushed";
    }
}

// Pop operation
void pop()
{
    if (top == -1)
    {
        cout << "\nStack is Empty";
    }
    else
    {
        cout << "\nPopped Element = " << stack[top];
        top--;
    }
}

// Peep operation
void peep()
{
    if (top == -1)
    {
        cout << "\nStack is Empty";
    }
    else
    {
        cout << "\nTop Element = " << stack[top];
    }
}

// Main function
void main()
{
    int choice;

    clrscr();

    while (1)
    {
        cout << "\n\n--- STACK MENU ---";
        cout << "\n1. Push";
        cout << "\n2. Pop";
        cout << "\n3. Peep";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                peep();
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
// --- STACK MENU ---
// 1. Push
// 2. Pop
// 3. Peep
// 4. Exit
// Enter choice: 1

// Enter value: 10
// Element Pushed

// Enter choice: 1
// Enter value: 20
// Element Pushed

// Enter choice: 3
// Top Element = 20

// Enter choice: 2
// Popped Element = 20

// Enter choice: 3
// Top Element = 10
