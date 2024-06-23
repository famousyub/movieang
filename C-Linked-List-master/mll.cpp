#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    int x;
    struct Node* next;
} Node;







    struct Node * firstLL(int,struct Node *);
    struct Node * formLL(int,struct Node *);
    struct Node * addAtTheFront(int ,struct Node *);


     
struct Node * firstLL(int LLData,struct Node *temp1){
	temp1->x = LLData;
	temp1->next = NULL;
	return temp1;
}

struct Node * formLL(int LLData,struct Node *temp1){
    struct Node *temp2 = NULL;
	temp2 = (struct Node *) malloc(sizeof(struct Node));
	temp2->x = LLData;
	temp2->next = NULL;
	temp1->next = temp2;
	temp1 = temp2;
	return temp1;
}

struct Node * addAtTheFront(int data,struct Node *temp1){
    struct Node *new_ = (struct Node *) malloc(sizeof(struct Node));
    new_->x = data;
    new_->next = temp1;
    temp1 = new_;
    return temp1;
}
 





void deallocate(Node** root) {
    Node* curr = *root;
    while (curr != NULL) {
        Node* aux = curr;
        curr = curr->next;
        free(aux);
    }
    *root = NULL;
}

void insert_end(Node** root, int value) {
    Node* new_node =(Node*) malloc(sizeof(Node));
    if (new_node == NULL) {
        exit(1);
    }
    new_node->next = NULL;
    new_node->x = value;
    
    if (*root == NULL) {
        *root = new_node;
        return;
    }
    
    Node* curr = *root;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = new_node;
}

void serialize(Node* root) {
    FILE* file = fopen("list.txt", "w");
    if (file == NULL) {
        exit(1);
    }

    for (Node* curr = root; curr != NULL; curr = curr->next) {
        fprintf(file, "%d, ", curr->x);
    }
    fclose(file);
}

void deserialize(Node** root) {
    FILE* file = fopen("list.txt", "r");
    if (file == NULL) {
        exit(2);
    }

    int val;
    while(fscanf(file, "%d, ", &val) > 0) {
        insert_end(root, val);
    }
    fclose(file);
}

int main(int argc, char* argv[]) {
    Node* root = NULL;
    Node* root2 = NULL;

    // insert_end(&root, -2);
    // insert_end(&root, 11);
    // insert_end(&root, 22);
    // serialize(root);
    deserialize(&root);

    for (Node* curr = root; curr != NULL; curr = curr->next) {
        printf("%d\n", curr->x);
    }
    
    deallocate(&root);
    // deallocate(&root2);
    
    return 0;
}