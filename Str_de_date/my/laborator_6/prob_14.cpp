#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

struct Node {
   string data;
   struct Node *next;
};
struct Node* head = NULL;

void insert(string new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}

void display() {
    struct Node* ptr;

    cout << "Lista curenta:" << endl;

    ptr = head;
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }

    cout << endl << endl;
}

void append(string new_data)  
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
  
    Node *last = head;
    new_node->data = new_data;    
    new_node->next = NULL;  

    if (head == NULL) {  
        head = new_node;  
        return;  
    }  

    while (last->next != NULL)  
        last = last->next;  
  

    last->next = new_node;  
    return;  
}

void check(string word) {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      if (ptr->data.compare(word) == 0) {
          cout << "Cuvintul exista!!!";
          break;
      }
      ptr = ptr->next;
   }
   cout << "Cuvintul nu exista!!!" << endl;
}

void remove(string word) {
    if(head->data == word) {
        if(head->next == NULL) {
            cout << "There is only one node." << 
                    " The list can't be made empty ";  
            return;  
        }  

        head->data = head->next->data;
        head->next = head->next->next;  
  
        return;  
    }  

    Node *prev = head;  
    while(prev->next != NULL && prev->data != word)  
        prev = prev->next;  

    if(prev->next == NULL)  
    {  
        cout << "\nGiven node is not present in Linked List";  
        return;  
    }  

    prev->data = prev->next->data;
    prev->next = prev->next->next;  
  
    return;  
}  

int main() {
    int decision, open_menu = true;
    string value;

    while (open_menu) {
        cout << "Alegeti 0 optiune" << endl;
        cout << "1) Inserarea la inceput" << endl;
        cout << "2) Inserarea la sfirsit" << endl;
        cout << "3) Verificarea existentei" << endl;
        cout << "4) Stergere" << endl;
        cin >> decision;

        switch (decision) {
            case 1:
                cout << "Introduceti valoarea: ";
                cin >> value;
                insert(value);
                break;
            
            case 2:
                cout << "Introduceti valoarea: ";
                cin >> value;
                append(value);
                break;

            case 3:
                cout << "Introduceti valoarea: ";
                cin >> value;
                check(value);
                break;

            case 4:
                cout << "Introduceti valoarea: ";
                cin >> value;
                remove(value);
                break;

            default:
                open_menu = false;
                break;
        }
        display();
    }


    return 0;
}