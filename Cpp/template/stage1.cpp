/**
 * time : 2020:10:19
 * topic : 模板的具体化和偏特化
 * type : 1、函数模板 针对仅参数类型不同的函数；          
 *           template <class T> void swap(T& a, T& b){}   
 * <>内的是模板形参 
          2、类模板 针对仅数据成员和成员函数类型不同的类
             template<class T1,class T2> void A<T1,T2>::h(){}。
 */

#include <iostream>
using namespace std;
template<typename T1,typename T2>
class Test{
public:
    Test(T1 i ,T2 j):a(i),b(j){cout<<"模板类"<<endl;}
private:
    T1 a;
    T2 b;
};

template<>   //全特化，参数都指定了，参数列表为空
class Test<int,char>{
public:
    Test(int i,char j):a(i),b(j){cout<<"全特化"<<endl;}
private:
    int a;
    char b;
};

template<typename T2>  //指定一部分参数，剩下的未指定的需在参数裂变中
class Test<char ,T2>{
public:
    Test(char i,T2 j):a(i),b(j){cout<<"个数偏特化"<<endl;}
private:
    char a;
    T2 b;
};

template<typename T1,typename T2>  //这是范围上的偏特化
class Test<T1*,T2*>{
public:
    Test(T1* i ,T2* j):a(i),b(j){cout<<"指针偏特化"<<endl;}
private:
    T1* a;
    T2* b;
};

template<typename T1,typename T2>//同理这也是范围上的偏特化
class Test<T1 const,T2 const>{
public:
    Test(T1 i,T2 j):a(i),b(j){cout<<"const偏特化"<<endl;}
private:
    T1 a;
    T2 b;
};

int main(){
    int a;
    double b;
    Test<double,double> t1(0.1,0.2);
    Test<int,char> t2(1,'S');
    Test<char ,double> t3(0.1,0.2);
    Test<int *,double *> t4(&a,&b);
    Test<const int ,const int> t5(0.1,0.2);
    return 0;
}