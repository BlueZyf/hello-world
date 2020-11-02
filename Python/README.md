# 20200819 Python 中的 if __name__ == '__main__' 该如何理解
  ①Python 则有不同，它属于脚本语言，不像编译型语言那样先将程序编译成二进制再运行，而是动态的逐行解释运行。也就是从脚本第一行开始运行，没有统一的入口
  ②一个 Python 源码文件除了可以被直接运行外，还可以作为模块（也就是库）被导入。不管是导入还是直接运行，最顶层的代码都会被运行（Python 用缩进来区分代码层次）。而实际上在导入的时候，有一部分代码我们是不希望被运行
  ③if __name__ == '__main__' 就相当于是 Python 模拟的程序入口。Python 本身并没有规定这么写，这只是一种编码习惯。由于模块之间相互引用，不同模块可能都有这样的定义，而入口程序只能有一个。到底哪个入口程序被选中，这取决于 __name__ 的值


# 关于 import
  python中，每个py文件被称之为模块，每个具有__init__.py文件的 #目录# 被称为包
## 绝对导入
  Python 编译器对于绝对导入的处理是从当前目录、sys.path、环境变量 PYTHONPATH 中搜索需要导入的包。

## 相对导入
============================
package/                   |
    __init__.py            |
    subpackage1/           |
        __init__.py        |
        moduleX.py         |
        moduleY.py         |
    subpackage2/           |
        __init__.py        |
        moduleZ.py         |
    moduleA.py             |
============================
如果要在moduleX.py中相对导入其他模块，要这么写：

from .moduleY import spam
from .moduleY import spam as ham
from . import moduleY
from ..subpackage1 import moduleY
from ..subpackage2.moduleZ import eggs
from ..moduleA import foo

