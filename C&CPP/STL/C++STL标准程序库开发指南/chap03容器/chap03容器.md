##  内容
### 3.3 序列式容器--vector类模板
+ 定义`template <class T, class Allocator=allocator<T>> class vector;`
+ 3.3.1 vector类基础
    + vector对象定义 `vector<string> myvt;`  如果没有通过`reserve()`设置容器的大小，是不能直接赋值的。  【向量的类型也可以是自定义的结构体类型】
    + vector类对象初始化 `myvt.push_back();`
    + 容器的大小和容量  `size()`是现有的元素数量；`capacity()`是容器中实际能够容纳的元素数量。还有`resize()`再进行分配
+ 3.3.2 vector类的成员函数
    + 判断向量是否为空 `empty()`
    + 遍历 `myvt.at(i)`; `myvt[i]`; 还有就是用迭代器`::iterator iter; for(iter=myvt.begin;iter!=myvt.end();iter++) {temp=*iter; cout<<temp<<;}`
    + 使用算法  `for_each()`，`count_if()`
+ 3.3.3 vector高级编程
    + 元素访问 `at(),[],front(),back()`
    + 迭代器相关函数 `begin(),end()`
    + 元素查找 `find()`和`find_if()`
    + vector型容器中的字符串处理
    + 元素排序  `sort()`
    + 插入元素  `push_back()`插入最后一个；`insert()`插入任意位置
    + 删除元素  `pop_back()`删除最后一个，`erase()`删除任意区间或指定位置，`clear()`删除全部
    + 对象交换 `swap()`
    + vector<bool>类

###  3.4 序列式容器--list类模板
+ 3.4.1 list的定义和容量
    + list的定义和构造函数
    + 元素的赋值