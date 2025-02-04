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

class Stack {
    private:
        Node* top;
        int size;
    
    public:
        Stack(){
            top = nullptr;
            size = 0;
        }

        void push(int val){
            Node* temp = new Node(val);
            temp->next = top;
            top = temp;
            size++;
        }

        void pop(){
            if(top == nullptr){
                cout<<"stack underflow"<<endl;
                return;
            }
            Node* temp  = top;
            top = top ->next;
            delete temp;
            size--;
        }

        int getTop(){
            if(top == nullptr){
                return -1;
            }
            return top->data;
        }

        int getSize(){
            return size;
        }

        void display(){
            if(top == nullptr){
                cout<<"Stack is Empty"<<endl;
                return;
            }
            Node* temp = top;
            while(temp!=nullptr){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }
};

int main(){

    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s.pop();
    s.display();
    return 0;
}