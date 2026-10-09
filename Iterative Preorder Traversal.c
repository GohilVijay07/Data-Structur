#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

/* Create a new node */
struct Node* createNode(int value)
{
    struct Node *newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

/* Iterative Preorder Traversal */
void iterativePreorder(struct Node *root)
{
    struct Node *stack[100];
    struct Node *node;
    int top;

    top = -1;

    if (root == NULL)
        return;

    /* Push root */
    top++;
    stack[top] = root;

    while (top != -1)
    {
        /* Pop node */
        node = stack[top];
        top--;

        /* Visit node */
        printf("%d ", node->data);

        /* Push Right child first */
        if (node->right != NULL)
        {
            top++;
            stack[top] = node->right;
        }

        /* Push Left child second */
        if (node->left != NULL)
        {
            top++;
            stack[top] = node->left;
        }
    }
}

int main()
{
    struct Node *root;

    root = createNode(1);

    root->left = createNode(2);
    root->right = createNode(3);

    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Iterative Preorder Traversal: ");

    iterativePreorder(root);

    return 0;
}