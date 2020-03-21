#include <iostream>

using namespace std;

template <typename T>
class stack{
  public:
    stack(int size){
      data = new T[size];
      top = 0;
    }
    stack (const stack &s){}

    ~stack(){}

    const stack & operator = (const stack &s){
      
    }

    bool empty(){
      return top == 0;
    }
    void push(const T &x){
      data[top++] = x;
    }
    T pop(){
      data[--top];
    }
    int size(){
      return top;
    }

    friend ostream & operator<<(ostream &out,const stack &s){
      out<<
    }
  private:
    T data[];
    int top; 
};