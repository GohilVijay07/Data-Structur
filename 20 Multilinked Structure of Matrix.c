
#include <stdio.h>
#include <stdlib.h>

#define MAX 20

struct Node
{
    int row, col, data;
    struct Node *right, *down;
};

struct Node *rowHead[MAX], *colHead[MAX];
int rows, cols;

void create()
{
    int i, j, value;
    struct Node *newNode, *temp;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if (rows <= 0 || cols <= 0 || rows > MAX || cols > MAX)
    {
        printf("Invalid matrix size!\n");
        rows = cols = 0;
        return;
    }

    for (i = 0; i < rows; i++)
        rowHead[i] = NULL;

    for (j = 0; j < cols; j++)
        colHead[j] = NULL;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &value);

            if (value != 0)
            {
                newNode = (struct Node*)malloc(sizeof(struct Node));

                if (newNode == NULL)
                {
                    printf("Memory allocation failed!\n");
                    return;
                }

                newNode->row = i;
                newNode->col = j;
                newNode->data = value;
                newNode->right = NULL;
                newNode->down = NULL;

                /* Add node to its row */
                if (rowHead[i] == NULL)
                    rowHead[i] = newNode;
                else
                {
                    temp = rowHead[i];
                    while (temp->right != NULL)
                        temp = temp->right;

                    temp->right = newNode;
                }

                /* Add node to its column */
                if (colHead[j] == NULL)
                    colHead[j] = newNode;
                else
                {
                    temp = colHead[j];
                    while (temp->down != NULL)
                        temp = temp->down;

                    temp->down = newNode;
                }
            }
        }
    }

    printf("Matrix created successfully!\n");
}

void display()
{
    int i, j;
    struct Node *temp;

    if (rows == 0 || cols == 0)
    {
        printf("Please create the matrix first.\n");
        return;
    }

    printf("\nMatrix:\n");

    for (i = 0; i < rows; i++)
    {
        temp = rowHead[i];

        for (j = 0; j < cols; j++)
        {
            if (temp != NULL && temp->col == j)
            {
                printf("%d ", temp->data);
                temp = temp->right;
            }
            else
                printf("0 ");
        }

        printf("\n");
    }
}

int main()
{
    int choice;

    rows = cols = 0;

    do
    {
        printf("\n--- MULTILINKED MATRIX MENU ---");
        printf("\n1. Create Matrix");
        printf("\n2. Display Matrix");
        printf("\n3. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                create();
                break;

            case 2:
                display();
                break;

            case 3:
                printf("Program ended.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 3);

    return 0;
}
