class node{
 private:
 string key;
 int value;
 node* n;

 public:
 node(string k="",int val=0);
 string getKey();
 int getVal();
 void setKey(string k);
 void setVal(int val);
 void add(node&);
 void del();
};

class list{
 node head;
 node tail;
 
};
