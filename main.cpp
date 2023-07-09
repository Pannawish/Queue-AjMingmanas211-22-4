#include <iostream>
using namespace std;
#include "queue.h"

int main(int argc,char *argv[]) {
Queue q;
  int i, price, n=1;
  for(i=1;i<argc;i++){
    if(argv[i][0]=='x'){
      string ord_name=q.get_ord2();
      price=q.dequeue();
      //ask the customer to pay
      cout<<"Customer no: "<<n<<endl;
      cout<<ord_name<<endl;
      cout<<"You have to pay "<<price<<endl;
      int money,change;
      do{
        cout<<"Cash: ";
        cin>>money;
        if (money<price){
          continue;
        }
        else if(money==price){
          cout<<"Thank you"<<endl;
        }
        else{
          cout<<"Thank you"<<endl;
          change=money-price;
          cout<<"Change is: "<<change<<endl;
        }
      }while(money<price);
      n++;
    }
    else{
      q.enqueue(atoi(argv[i]),atoi(argv[i+1]));
      i++;
    }
  }
  /*q.enqueue(5);  
  q.enqueue(1);
  q.dequeue();//5
  q.enqueue(7);
  q.dequeue();//1
  
  q.enqueue(6);
  q.dequeue();//7
  q.dequeue();//6
  
 q.enqueue(8);
   q.enqueue(9);
   q.enqueue(10);
  cout<<"End of program"<<endl;*/

  }

