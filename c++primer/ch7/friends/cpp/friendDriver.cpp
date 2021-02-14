#include "../h/friends.h"
int main(){
 A a;
 a.test();
 return 0;
}

void A::test(){
 B b;
 b.i=5;
}
