#ifndef node_h
#define  node_h
//#define pricelist[]= {100,20,50}

class NODE{
	 //int data;
int ord_number,qty;
	NODE *nextPtr;
public:
	NODE(int,int);
	~NODE();
  int get_value();
	void set_next(NODE *);
	NODE* get_next();
  string get_ord();
};
typedef NODE* NodePtr;

NODE::NODE(int x,int y){
	ord_number=x;
  qty=y;
	nextPtr=NULL;

}
int NODE::get_value(){
  int price;
  //price=pricelist[ord_number-1];
  switch(ord_number){
  //if(ord_number==1){//ramen
    case 1: price=100*qty; break;
    case 2: price=20*qty; break; //somtum
    case 3: price=50*qty; break;//fried chicken
  }
  
	return price;

}

NODE* NODE::get_next(){
	return nextPtr;

}

void NODE::set_next(NODE *t){
	 nextPtr=t;

}

NODE::~NODE(){
	 //cout<<"deleting "<<ord_number<<endl;

}
string NODE::get_ord(){
  string x;
  switch(ord_number){
    case 1: x="Ramen"; break;
    case 2: x="Somtom"; break;
    case 3: x="Fried Chicken"; break;
  }
  return x;
}

#endif