#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root = NULL;

struct node *createNode(int data){
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void inorder(struct node *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void postorder(struct node *root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

void preorder(struct node *root){
    if(root==NULL){
        return;
    }
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

struct node *insert(struct node *root, int data){
    if(root == NULL){
        root = createNode(data);
    } else if(data <= root->data){
        root->left = insert(root->left, data);
    } else{
        root->right = insert(root->right, data);
    }
    return root;
}

void search(struct node *root, int data){
    if(root == NULL){
        return;
    } 
    if(root->data == data){
        printf("Data found %d", root->data);
        return
    } else if(data <= root->data){
        search(root->left, data);
    } else{
        search(root->right, data);
    }
}

struct node *deleteNode(struct node *root, int data){
    if(root == NULL){
        return root;
    } else if(data < root->data){ //data nano hoi to left ma, moto hoe to right ma 
        root->left = deleteNode(root->left, data);
    } else if(data > root->data){
        root->right = deleteNode(root->right, data);
    } else{
        if(root->left == NULL){ //left null hot to right and right ma null hoi to left
            return root->right;
        } else if(root->right ==NULL){
            return root->left;
        }
        struct node *temp=root->right; // go to right child, tyar pachi left ma javanu null sudhi
        while (temp->left != NULL)
        {
            temp = temp->left;
        }
        root->data = temp->data; // copy last element in first 
        root->right = deleteNode(root->right, temp->data); // delete last element
    }
}

void main(){

}