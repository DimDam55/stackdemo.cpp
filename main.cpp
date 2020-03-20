#include <iostream>

using namespace std;

template <typename T>
class stack{
  public:
    stack(int size){
      head = NULL;
    }
    stack (const stack &s){
      head = s.head;
      node p = head;
            for(int i = 0; i<len-1; i++){

      }
    }
    ~stack(){}
    const stack & operator = (const stack &s){}

    bool empty(){
      return head == NULL;
    }
    void push(const T &x){
      node *p = new node;
      p->info = x;
      p->next = head;
      head = p;
      len++;
    }
    T pop(){
      node *q = head;
      head = q->next;
      delete q;
      len--;
    }
    int size(){
      return len;
    }

    friend ostream & operator<<(ostream &out,const stack &s){
      out<<
    }
  private:
    struct node{
      int info;
      node *next;
    };
    node *head;
    int len = 0;
    
};