#include<iostream>
#include<queue>
using namespace std;

class Queue {
    private:
        int *arr;
        int qfront;
        int rear;
        int size;
    
    public:
        Queue(){
            size = 100005;
            arr = new int[size];
            qfront = 0;
            rear = 0;
        }

        void enqueue(int data){
            if(rear == size){
                cout<<"Queue is full"<<endl;
            }else{
                arr[rear] = data;
                rear++;
            }
        }

        void dequeue(){
            if(qfront == rear){
                cout<<"Queue is empty"<<endl;
            }else{
                arr[qfront] = -1;
                qfront++;
                if(qfront == rear){
                    qfront = 0;
                    rear = 0;
                }
            }
        }

        int front(){
            if(qfront == rear){
                return -1;
            }else{
                return arr[qfront];
            }
        }

        bool isEmpty(){
            if(qfront == rear){
                return true;
            }else{
                return false;
            }
        }

        void display(){
            if(qfront == rear){
                cout << "Queue is empty" << endl;
                return;
            }
            cout << "Queue elements: ";
            for(int i = qfront; i < rear; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }

};

int main(){

    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.dequeue();
    q.display(); 

    cout<<isEmpty();


    return 0;
}