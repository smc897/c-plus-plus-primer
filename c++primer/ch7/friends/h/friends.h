class A{
 public:
 void test();
};

class B{
 friend void A::test();
 private:
 int i;
};
