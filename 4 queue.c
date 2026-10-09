#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;


// Insert Operation
void insert()
{
    int value;

    if (rear == MAX - 1)
    {
        printf("\nQueue Overflow!");
    }
    else
    {
        printf("\nEnter value: ");
        scanf("%d", &value);

        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = value;

        printf("%d inserted successfully.", value);
    }
}


// Delete Operation
void delete()
{
    if (front == -1 || front > rear)
    {
        printf("\nQueue Underflow!");
    }
    else
    {
        printf("\nDeleted element = %d", queue[front]);
        front++;

        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
}


// Modify Operation
void modify()
{
    int position, value;

    if (front == -1)
    {
        printf("\nQueue is Empty!");
    }
    else
    {
        printf("\nEnter position: ");
        scanf("%d", &position);

        if (position < 1 || position > rear - front + 1)
        {
            printf("\nInvalid Position!");
        }
        else
        {
            printf("Enter new value: ");
            scanf("%d", &value);

            queue[front + position - 1] = value;

            printf("\nValue modified successfully.");
        }
    }
}


// Display Operation
void display()
{
    int i;

    if (front == -1)
    {
        printf("\nQueue is Empty!");
    }
    else
    {
        printf("\nQueue Elements are: ");

        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }
}


// Main Function
int main()
{
    int choice;

    while (1)
    {
        printf("\n\n===== SIMPLE QUEUE MENU =====");

        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Modify");
        printf("\n4. Display");
        printf("\n5. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                insert();
                break;

            case 2:
                delete();
                break;

            case 3:
                modify();
                break;

            case 4:
                display();
                break;

            case 5:
                return 0;

            default:
                printf("\nInvalid Choice!");
        }
    }

    return 0;
}