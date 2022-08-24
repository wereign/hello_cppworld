#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node * prev = NULL;
        Node * next = NULL;

        Node(int d){
            data = d;}
}
;
        

class DoublyLinkedList{
    private: 
        Node * head;
        int size;
    
    public:
        
        int len(){
            return size;}
        
        void printlist(){
            Node * temp = head;

            while (temp != NULL){
                cout << temp -> data << "\t";
                temp = temp -> next;}
            
            cout << "\n";        
        }

        void rev_print(){

            Node * temp = head;

            while (temp->next != NULL){
                temp = temp -> next;
            }

            while (temp != NULL){
                cout << temp -> data << "\t";
                temp = temp -> prev;}
            
            cout << "\n"; }
        
        void insert_0(int value){
            
            Node * node = new Node(value); // Creating a node to insert
            if (size != 0){

            node -> next = head;           // Creating connections from the node to the head node
            head -> prev = node;
            
            head = node;                   // Assigning new node as the head of the linked list

            size++;}                         // Incrementing the size of the node.
            

            // If the list is empty.
            else{
                head = node;
                size ++ ;
            }
            
            }
        
        void insert_end(int value){

            Node * node = new Node(value);
            if (size != 0){
                Node * temp = head;
                while (temp -> next != NULL){
                    temp = temp -> next;
                }


                //After reaching the last node
                temp -> next = node;
                node -> prev = temp;

                size ++;}

            else{
                head = node;
                size ++;

            }
        }


        // deleting functions
        void delete_0(){
            Node * new_head = head -> next;
            delete head;
            head = new_head;
        }

        void delete_end(){
            Node * second_last = head;

            while (second_last -> next -> next != NULL){
                second_last = second_last -> next;
            }

            // After reaching the second last node.

            Node * saved = second_last -> next;
            delete saved;
            second_last -> next = NULL;          
        }


};


int main(){

    // void printlist(Node * head);
    // void rev_print(Node * tail);

    DoublyLinkedList dll = DoublyLinkedList();

    dll.insert_0(4);
    dll.insert_0(3);
    dll.insert_0(2);
    dll.insert_0(1);
    dll.insert_end(5);
    dll.printlist();
    // dll.rev_print();
    dll.delete_0();
    dll.printlist();
    dll.delete_end();
    dll.printlist();


}


void printlist(Node * head)
       {
        Node * temp = head;

        while (temp != NULL){
            cout << temp -> data << "\t";
            temp = temp -> next;}
            
        cout << "\n"; }

void rev_print(Node * tail){
       
        Node * temp = tail;

        while (temp != NULL){
            cout << temp -> data << "\t";
            temp = temp -> prev;}
            
        cout << "\n"; }


