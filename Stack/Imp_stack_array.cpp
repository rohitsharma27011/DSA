#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

class Stack {

    public:
        int top;
        int *arr;
        int size;
    
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int val){
        if(size - top > 1){
            top++;
            arr[top] = val;
        }else{
            cout<<"Stack overflow";
        }     
    }

    void pop(){
        if(top >= 0){
            top --;
        }else{
            cout<<"Stack is empty";
        }
    }

    int getTop(){

        if(top >=0){
            return arr[top];
        }else{
            cout<<"Stack is Empty";
            return -1;
        }
    }

    void display(){
        if(top>=0){
            for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
            }
        }else{
            cout<<"Stack is empty";
        }
    }

};

int main(){

    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    
    s.pop();

    s.display();

    cout<<endl<<s.getTop();
    
    return 0;
}