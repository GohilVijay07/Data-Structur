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

    int n;
    int i;
    int completed = 0;

    /* Ask Queue Size */
    printf("Enter queue size: ");
    scanf("%d", &n);

    printf("\nEnter burst time of %d processes:\n", n);

    /* Create Linked List */
    for(i = 0; i < n; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));

        printf("P%d : ", i + 1);

        newNode->process = i + 1;
        scanf("%d", &newNode->burst);

        newNode->next = NULL;

        /* First Node */
        if(front == NULL)
        {
            front = newNode;
            rear = newNode;
        }
        /* Other Nodes */
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
    }

    printf("\nProcess Execution:\n");

    /* Round Robin Execution */
    while(completed < n)
    {
        temp = front;

        while(temp != NULL)
        {
            if(temp->burst > 0)
            {
                printf("P%d is executing\n", temp->process);

                /* Time Quantum = 2 */
                if(temp->burst <= 2)
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

    /* Free Memory */
    temp = front;

    while(temp != NULL)
    {
        struct Node *deleteNode = temp;

        temp = temp->next;

        free(deleteNode);
    }

    return 0;
}