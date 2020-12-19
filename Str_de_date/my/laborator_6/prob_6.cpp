#include <iostream>
#include <stdlib.h>  

using namespace std;

struct Node {
   int data;
   struct Node *next;
};
struct Node* head = NULL;

void insert(int new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}

void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout << ptr->data << " ";
      ptr = ptr->next;
   }
   cout << endl;
}

void solve_a() {
    struct Node* ptr = head;
    int S = 0;

    while (ptr != NULL) {
        if (ptr->data > 0) S += ptr->data;
        ptr = ptr->next;
    }

    cout << "Suma numerelor pozitive este: " << S << endl;
}

void reverse() {
    Node *prev = NULL, *current = NULL, *next = NULL;
    current = head;
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

int main() {
    for (int i = 0; i < 100; i++) {
        insert(rand() % 100 - 50);
    }

    cout << "a) ";
    solve_a();

    cout << "c) ";
    display();

    cout << "b) ";
    reverse();
    display();

    return 0;
}