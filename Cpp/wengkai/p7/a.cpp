#include "a.h"
#include <iostream>
#include <stdio.h>

using namespace std;

void A::f(){
	int b=10;
	i = b;
	printf("this=%p\n",this);  //这个函数所属那类的对象的指针
}

void A::print(){
	std::cout << i << std::endl;
	printf("this=%p\n",this);
}

struct B{
	int i;
};

void f(struct B* p){
	p->i = 20;
	cout << p->i << endl;
}

int main()
{
	A a;
	B b;
	a.f();
	a.print();
	f(&b);
	return 0;
}
