#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *left;
  struct Node *right;
} Node;

Node *insert(Node *root, int data) {
  if (root == NULL) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
  } else {
    if (data <= root->data) {
      root->left = insert(root->left, data);
    } else {
      root->right = insert(root->right, data);
    }
    return root;
  }
}

void postorder(Node *root) {
  if (root != NULL) {
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
  }
}

int main() {
  Node *root = NULL;
  int i;

  for (i = 0; i < 7; i++) {
    int data;
    printf("Enter element: ");
    scanf("%d", &data);
    root = insert(root, data);
  }

  printf("Postorder traversal of the BST: ");
  postorder(root);
  printf("\n");

  return 0;
}
