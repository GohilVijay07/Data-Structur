
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int process;
    int burst;
    struct Node *next;
};

int main()
{
    struct Node *front = NULL;
    struct Node *rear = NULL;
    struct Node *newNode;
    struct Node *temp;

    int n, i, completed = 0;

    printf("Enter queue size: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid queue size!\n");
        return 1;
    }

    printf("\nEnter burst time of %d processes:\n", n);

    for (i = 0; i < n; i++)
    {
        printf("P%d : ", i + 1);

        newNode = (struct Node *)malloc(sizeof(struct Node));

        if (newNode == NULL)
        {
            printf("Memory allocation failed!\n");

            temp = front;
            while (temp != NULL)
            {
                struct Node *deleteNode = temp;
                temp = temp->next;
                free(deleteNode);
            }

            return 1;
        }

        newNode->process = i + 1;

        if (scanf("%d", &newNode->burst) != 1 ||
            newNode->burst < 0)
        {
            printf("Invalid burst time!\n");
            free(newNode);

            temp = front;
            while (temp != NULL)
            {
                struct Node *deleteNode = temp;
                temp = temp->next;
                free(deleteNode);
            }

            return 1;
        }

        newNode->next = NULL;

        if (front == NULL)
        {
            front = newNode;
            rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
    }

    printf("\nProcess Execution:\n");

    while (completed < n)
    {
        temp = front;

        while (temp != NULL)
        {
            if (temp->burst > 0)
            {
                printf("P%d is executing\n", temp->process);

                if (temp->burst <= 2)
                {
                    temp->burst = 0;
                    printf("P%d completed\n", temp->process);
                    completed++;
                }
                else
                {
                    temp->burst = temp->burst - 2;
                }
            }

            temp = temp->next;
        }
    }

    temp = front;

    while (temp != NULL)
    {
        struct Node *deleteNode = temp;
        temp = temp->next;
        free(deleteNode);
    }

    return 0;
}
