// //STL queue
// #include <iostream>
// #include <queue>
// using namespace std;

// int main()
// {
//     queue<char> atmline;//declaration

//     if(atmline.empty())
//         cout<<"atmline is empty"<<endl;
//     else
//         cout<<"atmline is not empty"<<endl;

//     //push
//     cout<<"size of atmline : "<< atmline.size()<<endl;
//     cout<<"front : "<<atmline.front()<<endl;
//     // cout<<"rear : "<<atmline.back()<<endl;
//     atmline.push('a');
//     atmline.push('b');
//     atmline.push('c');
//     atmline.push('d');
//     cout<<"size of atmline : "<< atmline.size()<<endl;
//     cout<<"front : "<<atmline.front()<<endl;
//     cout<<"back   : "<<atmline.back()<<endl;

//     atmline.pop();//POP
//     cout<<"size of atmline : "<< atmline.size()<<endl;
//     cout<<"front : "<<atmline.front()<<endl;
//     cout<<"back   : "<<atmline.back()<<endl;
    
//     if(atmline.empty())
//         cout<<"atmline is empty"<<endl;
//     else
//         cout<<"atmline is not empty"<<endl;
    
//     return 20;
// }

//queue implementation
#include <iostream>
using namespace std;


class queue
{
    public:
        int size;
        int* arr;
        int front;
        int rear;

        queue(int size)
        {
            this->size= size;
            arr= new int[size];
            front= 0;
            rear=0;
        }
        
        void push(int data)
        {// push at rear
            if(rear==size)
                cout<<"queue is full"<<endl;
            else
            {
                arr[rear]= data;
                rear++;
            }
        }

        void pop()
        {//pop from front
            if(front==rear)
                cout<<"queue is empty"<<endl;
            else
            {
                arr[front]=-1;
                front++;
                if(front==rear)
                {
                    front=0;
                    rear=0;
                }
            }
        }
        
        int getFront()
        {
            if(front==rear)
            {
                cout<<"queue is empty"<<endl;
                return -1;
            }    
            else
                return arr[front];
        }

        bool isEmpty()
        {
            if(front==rear)
                return true;
            else
                return false;
        }

        int getSize()
        {
            return rear-front;
        }
};

int main()
{
    queue atmline(4);//declaration

    //push
    atmline.push(0);
    atmline.push(1);
    atmline.push(2);
    atmline.push(3);
    cout<<"size of atmline: "<<atmline.getSize()<<endl;

    return 20;
}