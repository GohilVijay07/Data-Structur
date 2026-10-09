#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *prev;
    struct node *next;
};

void insert(struct node **head, int value);
void deleteNode(struct node **head, int value);
void modify(struct node *head, int oldValue, int newValue);
void display(struct node *head);

int main()
{
    struct node *head = NULL;
    int choice, value, newValue;

    while (1)
    {
        printf("\n\n===== DOUBLY LINKED LIST =====");
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Modify");
        printf("\n4. Display");
        printf("\n5. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insert(&head, value);
                break;

            case 2:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                deleteNode(&head, value);
                break;

            case 3:
                printf("Enter old value: ");
                scanf("%d", &value);

                printf("Enter new value: ");
                scanf("%d", &newValue);

                modify(head, value, newValue);
                break;

            case 4:
                display(head);
                break;

            case 5:
                return 0;

            default:
                printf("Invalid Choice!");
        }
    }
}


// Insert
void insert(struct node **head, int value)
{
    struct node *newNode;
    struct node *temp;

    newNode = (struct node *)malloc(sizeof(struct node));

    newNode->info = value;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        temp = *head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }

    printf("Value inserted successfully.");
}


// Delete
void deleteNode(struct node **head, int value)
{
    struct node *temp;

    if (*head == NULL)
    {
        printf("List is Empty!");
        return;
    }

    temp = *head;

    while (temp != NULL && temp->info != value)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Value Not Found!");
        return;
    }

    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        *head = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);

    printf("Value deleted successfully.");
}


// Modify
void modify(struct node *head, int oldValue, int newValue)
{
    struct node *temp = head;

    while (temp != NULL && temp->info != oldValue)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Value Not Found!");
        return;
    }

    temp->info = newValue;

    printf("Value modified successfully.");
}


// Display
void display(struct node *head)
{
    struct node *temp = head;

    if (head == NULL)
    {
        printf("List is Empty!");
        return;
    }

    printf("Doubly Linked List: ");

    while (temp != NULL)
    {
        printf("%d ", temp->info);
        temp = temp->next;
    }
}