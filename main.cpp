#include <iostream>

using namespace std;

template <typename T>
class stack{
  public:
    stack(int size){
      data = new T[size];
      top = 0;
    }
    stack (const stack &s){
      data = new T[s.top];
      top = s.top;
      for(int i = 0;i<top; i++){
        data[i] = s.data[i];
      }

    }

    ~stack(){}

    const stack & operator = (const stack &s){
      top = s.top;
      for(int i = 0; i<s.top; i++) data[i] = s.data[i];
      return *this;
    }

    bool empty(){
      return top == 0;
    }
    void push(const T &x){
      data[top++] = x;
    }
    T pop(){
      return data[--top];
    }
    int size(){
      return top;
    }

    friend ostream & operator<<(ostream &out,const stack &s){
      if(s.top == 0) out<<"[]";
      else{
        out<<"[";
        for(int i = 0; i<s.top-1; i++) out<<s.data[i]<<",";
        out<<s.data[s.top - 1]<<"]";
      }
      return out;
    }
  private:
    T *data;
    int top; 
};
//#ifndef CONTEST
/*int main(){
  stack<int>s(10);
  cout<<"s is empty"<<s<<endl;
  s.push(42);
  cout<<"s has one element:"<<s<<endl;
  s.push(17);
  s.push(34);
  cout<<"s has more elements:"<<s<<endl;
  cout<<"how many? "<<s.size()<<endl;
  stack<int>t(5);
  t.push(7);
  cout<<"t: "<<t<<endl;
  t = s;
  cout<<"popping from s: "<<s.pop()<<endl;
  s.push(8);
  stack<int>a(s);
  t.push(99);
  a.push(77);
  cout<<"s: "<<s<<endl;
  cout<<"t: "<<t<<endl;
  cout<<"a: "<<a<<endl;
  stack<double>c(4);
  c.push(3.14);
  c.push(1.414);
  cout<<"c contains doubles: "<<c<<endl;
  stack<char>k(4);
  k.push('&');
  cout<<"k contains a character: "<<k<<endl;
}*/
//#endif