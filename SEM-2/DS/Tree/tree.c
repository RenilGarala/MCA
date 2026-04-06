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
    if(root == NULL){
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}
void preorder(struct node *root){
    if(root == NULL){
        return;
    }
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node *root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
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
        printf("Data not found");
        return;
    }
    if(root->data == data){
        printf("Data found %d", root->data);
        return;
    } else if(data < root->data){
        search(root->left, data);
    } else{
        search(root->right, data);
    }
}

struct node *deleteNode(struct node *root,int key)
{
	if(root==NULL)
		return root;
	if(key<root->data)
		root->left=deleteNode(root->left,key);
	else if(key<root->data)
		root->right=deleteNode(root->right,key);
	else
	{
        if(root->left == NULL)
            return root->right;
		else if(root->right == NULL)
			return root->left;
		struct node *temp=root->right;
        while(temp->left!=NULL){
            temp=temp->left;
        }
        root->data=temp->data;
        root->right = deleteNode(root->right,temp->data);
	}
	return root;
}

int main(){
    int data;
    int ch;
    do{
        printf("\n0. Exit \n1. insert element\n2. preorder\n3. inorder\n4. postorder\n5. search\n6. delete node");
        printf("\nEnter your choice = ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 0:
                break;
            case 1:
                printf("Enter the data = ");
                scanf("%d", &data);
                root = insert(root, data);
                break;
            case 2:
                preorder(root);
                break;
            case 3:
                inorder(root);
                break;
            case 4: 
                postorder(root);
                break;
            case 5:
                printf("Enter the data = ");
                scanf("%d", &data);
                search(root, data);
                break;
            case 6:
                printf("Enter the data = ");
                scanf("%d", &data);
                root = deleteNode(root, data);
                break;
            default:
                printf("Invalid choice");
                break;
        }
    } while (ch != 0);
    return 0;
}
