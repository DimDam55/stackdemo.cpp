#include <iostream>

using namespace std;

template <typename T>
class stack{
  public:
    stack(int size){
      T stack[size];
    }
    stack (const stack &s){
      
    }
    ~stack(){}
    const stack & operator = (const stack &s){}

    bool empty(){}
    void push(const T &x){}
    T pop(){}
    int size(){}

    friend ostream & operator<<(ostream &out,const stack &s){}
  private:
    struct node{
      int info;
      node *next;
    };
    node *head;
    
};