#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node * next;
    
        Node(int da){
            data = da;
        }

};




class LinkedList{
    private:
        Node * head = NULL;
        int size;

    public:

        int len() {
            return size;
        } 

         
        // All inserting functions
        void insert_0(int value){

            Node * to_put = new Node(value);

            to_put -> next = head;

            head = to_put;

            size += 1;

        }

        void insert_end(int value){
            Node * to_put = new Node(value);

            Node * temp = head;
            
            while (temp->next != NULL){
                temp = temp -> next;
            }
            
            temp -> next = to_put;
            size += 1;

        }   

        void insert_position(int value, int position){
            
            if (position < size){
                Node * temp = head;
                int counter = 0;    

                while (counter != position -1){
                    temp = temp -> next;
                    counter ++;

                }

                Node * saved = temp -> next;
                temp -> next = new Node(value);
                temp -> next -> next = saved;
                size++;
            }
        }

        // Deleting functions
        void delete_0(){
            Node * new_head = head -> next;
            delete head;
            head = new_head;
            size--; 
        }

        void delete_end(){
            Node * temp = head;

            while (temp -> next -> next != NULL){
                temp = temp -> next;
            }
            temp -> next = NULL;
            delete temp->next;
            size--;
        }

        void delete_position(int position){
            if (position < size){
                int counter = 0;
                Node * before_node = head;
                while (counter != position - 1){
                    counter++;
                    before_node = before_node -> next;
                }

            Node * the_node = before_node -> next; 
            before_node -> next = before_node -> next -> next;
            delete the_node;
            size--;

            }
        }
        // Traversal and printing functions
        void printlist(){
        Node * temp = head;

        while (temp != NULL){
            cout << temp -> data << '\t';
            temp = temp -> next;
        }
        cout << '\n';}
};

int main(){

    LinkedList try1;
    try1.insert_0(3);
    try1.insert_0(2);
    cout << "Inserting into the beginning\n";
    try1.insert_0(1);
    cout << "Inserting in the end\n";
    try1.insert_end(4);
    cout << "Inserting at a specific position\n";
    try1.insert_position(7,2);
    cout << "Traversing the list\n";
    try1.printlist();
    cout << "Deleting from the beginning\n";
    try1.delete_0();
    try1.printlist();
    cout << "Deleting from the end.\n";
    try1.delete_end();
    try1.printlist();
    try1.delete_position(1);
    try1.printlist();
    cout << try1.len() << '\n';
}   