
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* insert(struct Node *root, int value)
{
    struct Node *newNode, *temp, *parent;

    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    if (root == NULL)
        return newNode;

    temp = root;

    while (temp != NULL)
    {
        parent = temp;

        if (value < temp->data)
            temp = temp->left;
        else if (value > temp->data)
            temp = temp->right;
        else
        {
            printf("Duplicate value not allowed.\n");
            free(newNode);
            return root;
        }
    }

    if (value < parent->data)
        parent->left = newNode;
    else
        parent->right = newNode;

    return root;
}

void display(struct Node *root)
{
    struct Node *stack[100];
    int top = -1;
    struct Node *temp = root;

    if (root == NULL)
    {
        printf("Tree is empty.\n");
        return;
    }

    printf("Inorder: ");

    while (temp != NULL || top != -1)
    {
        while (temp != NULL)
        {
            stack[++top] = temp;
            temp = temp->left;
        }

        temp = stack[top--];
        printf("%d ", temp->data);
        temp = temp->right;
    }
    printf("\n");
}

struct Node* findMin(struct Node *root)
{
    while (root != NULL && root->left != NULL)
        root = root->left;

    return root;
}

struct Node* deleteNode(struct Node *root, int value)
{
    struct Node *temp;

    if (root == NULL)
    {
        printf("Value not found.\n");
        return NULL;
    }

    if (value < root->data)
        root->left = deleteNode(root->left, value);

    else if (value > root->data)
        root->right = deleteNode(root->right, value);

    else
    {
        if (root->left == NULL)
        {
            temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            temp = root->left;
            free(root);
            return temp;
        }

        temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

int main()
{
    struct Node *root = NULL;
    int choice, value;

    do
    {
        printf("\n--- BINARY TREE MENU ---");
        printf("\n1. Iterative Insert");
        printf("\n2. Iterative Display");
        printf("\n3. Delete Node");
        printf("\n4. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                root = insert(root, value);
                break;

            case 2:
                display(root);
                break;

            case 3:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                root = deleteNode(root, value);
                break;

            case 4:
                printf("Program ended.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while (choice != 4);

    return 0;
}
