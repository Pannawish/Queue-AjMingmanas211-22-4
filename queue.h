#include "node.h"

class Queue {
  NodePtr headPtr, tailPtr;
  int size;

public:
  void enqueue(int, int);
  int dequeue();
  string get_ord2();
  Queue();
  ~Queue(); // dequeue all
};

Queue::Queue(){
  size=0;
  headPtr=NULL;
  tailPtr=NULL;
}

Queue::~Queue(){
 int i;
 int n=size;
  cout<<"=========================================="<<endl;
  cout<<"  There is "<<size<<" ppl left in the queue"<<endl; 
  //while(size>0)
  for(i=0;i<n;i++)
    dequeue();
  
}
void Queue::enqueue(int x, int y) {
  NodePtr new_node = new NODE(x,y); // 1.Create
  if (new_node){
  if (size==0){
    //2.1 CHANGE HEAD
    headPtr=new_node;
  }
 // 2 Connect
else{
  //2.2 connect tail
  tailPtr->set_next(new_node);
}
// 3 change tai
    tailPtr=new_node;
// 4. increase size
  ++size;
  }
}

int Queue::dequeue() {
  int value;
  NodePtr t;
 if(headPtr){
  // 1. Save the node to be deleted  
  t=headPtr;
    // 1.5 take the value out to value
  value=t->get_value();
    // 2. move (head)
  headPtr=headPtr->get_next();
    if(size==1) tailPtr=NULL;
   size--;
    // 3. delete
   //delete t;
   return value;
  }
  return -1;
}
string Queue::get_ord2(){
  /*NodePtr t;
  string value;
  t=headPtr;
  value=t->get_ord();
  return value;*/
  return headPtr->get_ord();
}