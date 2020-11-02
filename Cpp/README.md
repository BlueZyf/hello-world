# using用法
## using namespace std； //释放整个命名空间到当前作用域
namespace通常用来给类或者函数做个区间定义，以使编译器能准确定位到适合的类或者函数。譬如说，自行实现了一个函数test(void)，而在该项目的库函数内也定义了一个函数test(void);当你调用test();函数的时候，编译器就困惑了，该调用哪个呢？这个时候namespace的作用就显现出来了。
=================================================
#include <iostream>
using namespace std;
    
// first name space
namespace first_space{
    void func(){
        cout << "Inside first_space" << endl;
    }
}
    
// second name space
namespace second_space{
    void func(){
        cout << "Inside second_space" << endl;
    }
}
    
int main () {
     
// Calls function from first name space.
first_space::func();
       
// Calls function from second name space.
second_space::func(); 
    
return 0;
} 
=================================================

## using std::cout； //释放某个变量到当前作用域

# 模板

# 多态

# 关键字

# 虚函数

