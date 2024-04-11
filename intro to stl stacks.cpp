#include<iostream>
#include<stack>
using namespace std;

int main(){

// creation
stack<int>st;
// insertion
st.push(10);
st.push(20);
st.push(30);
st.push(40);
// size check
cout<<"size of stack: "<<st.size()<<endl;
// remove
st.pop();
// size check
cout<<"size of stack after pop: "<<st.size()<<endl;
// top element
cout<<" top element: "<< st.top()<<endl;
// check for empty
if(st.empty()){
  cout<<"stack is empty.\n";
}else{
  cout<<"non empty stack"<<endl;
}


  return 0;
}