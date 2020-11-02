/**
 * time : 2020:10:
 * topic : 
 * type : 
 */
#include <iostream>
using namespace std;
template<typename T1,typename T2>
void fun(T1 a,T2 b){
    cout << "模板函数"<<endl;
}

template<>
void fun(int a,char b){
    cout << "全特化" <<endl;
}

int main()
{
    int a=0;
    char b='a';
    fun(a,a);
    fun(a,b);
    return 0;
}