/*
Created by Jaden Kandel
Insertion time : O(1)
Deletion time : O(1)
Search time : O(n)
Access time : O(n)
*/
#include <iostream>
#include <string>

using namespace std;

class Stack{
    private:
        //top keeps track of 
        int top;
        int arr[10];
    public:
        //constructor of the Stack, sets all values equal to 0
        Stack()
        {
            top = -1;
            for(int i=0; i < 10; i++){
                arr[i] = 0;
            }
        }
        //Checks if the stack is full
        bool isfull()
        {
            if(top == 9)
                return true;
            else 
                return false;
        }
        //Checks if the stack is empty
        bool isempty()
        {
            if(top == -1)
                return true;
            else
                return false;
        }
        //Adds the value "n" on the top of the stack
        void push(int n)
        {
            if(isfull())
            {
                cout << "The stack is full";
            }
            else
            {
                top++;
                arr[top] = n;
            }
        }
        //Removes the top value of the stack
        void pop()
        {
            if(isempty())
            {
                cout << "Nothing to pop";
            }
            else
            {
                arr[top] = 0;
                top--;
            }
        }
        //Prints out the stack
        void showStack()
        {
            cout << "top" << endl;
            for(int i = 9; i > -1; i--){
                cout << arr[i] << endl;
            }
            cout << "bottom" << endl;
        }
};

int main()
{
    Stack s;
    s.push(5);
    s.push(5);
    s.push(7);
    s.showStack();
    s.pop();
    s.showStack();
}
