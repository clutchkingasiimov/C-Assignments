#include <iostream>
#include <exception> 
// #include "stacker.hpp"
#ifndef stack_hpp
#define stack_hpp

using namespace std; 

// template <typename T>
// class StackI<T>;
// #include "stacker.hpp"

template <typename T>
class StackI{
    public:
        virtual void push(T t) = 0;
        virtual void pop() = 0;
        virtual T top() = 0;
        virtual bool isEmpty() = 0;
        virtual void print() = 0;
};

//FullException stack 
class FullStackException:public exception{
        virtual const char * what() const throw(){
            return "The Stack is full!";
        }
} FullStackException;

//EmptyStack 
class EmptyStackException:public exception{
        virtual const char * what() const throw(){
            return "There is no number in the stack!";
        }
} EmptyStackException;

template <typename T> 
class Stack: public StackI<T>{
    protected:
        T *stack;
        int index_first; //Value of the first index 
        int length; //The length of the stack as it gets updated
        int size; // The size of the stack defined by the user 
        
    public:
        Stack(){
            stack = new T[20];
            index_first = 0; //First index and length are defined 0 since they will get updated
            length = 0;
            size = 20;
        }
        Stack(int n){
            stack = new T[n]; //User defined length for "n"
            index_first = 0;
            length = 0;
            size = n;
        }
        ~Stack(){
            delete [] stack;
        }
        void push(T t){
            if(length >= size){
                throw FullStackException;
            }
            stack[index_first++] = t;
            length++; 
        }
        void pop(){
            if(isEmpty()){
                
                throw EmptyStackException;
            }
            index_first--;
            size--;
        }
        T top(){
            if(isEmpty()){
                throw EmptyStackException;
            }
            return stack[index_first];
        }
        void print(){
            cout << "Printing current Stack" << endl;
            if(isEmpty()){    
                throw EmptyStackException;
            }
            //Because the first value in the stack is the lasst value
            //the stack needs to be printed in reverse to display the values
            for(int i = index_first-1; i >= 0; i--){
                cout << stack[i] << endl;
            }
        }
        bool isEmpty(){
            return length == 0;
        }        //Variables that cannot be accessed from outside the class 
};
#endif