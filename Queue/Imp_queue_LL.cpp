#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

class Node {
    public: 
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = nullptr;
        }
};

class Queue {
    private:
        Node* start;
        Node* end;
        int size;
    
    public:
        Queue(){
            start = NULL;
            end = NULL;
            size = 0;
        }

        void push(int val){
            Node* temp = new Node(val);
            
            //no elements till now
            if(start == NULL){
                start = temp;
                end = temp;
            }else{
                end->next = temp;
                end = temp;
            }
            size++;

        }

        void pop(){
            if(start == NULL){
                cout<<"Queue is empty"<<endl;
            }else{
                Node* temp = start;
                start = start->next;
                delete temp;
                size--;
                if (start == NULL) {
                end = NULL; // Reset end pointer if queue is empty
                }
            }
        }

        int getTop(){
            if(start == NULL){
                cout<<"Queue is empty"<<endl;
                return -1;
            }else{
                return start->data;
            }
        }

            void display() {
        if (start == NULL) {
            cout << "Queue is empty" << endl;
            return;
        }

        Node* temp = start;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }


};

int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    
    cout << "Queue elements: ";
    q.display();

    q.pop();
    cout << "Queue after pop: ";
    q.display();
    return 0;
}