##  内容
+ 基本序列容器 向量vector，列表list，双向队列deque
+ 关联容器 set和map

###  5.1 向量vector
+ vector常用构造函数
    + `vector();`
    + `vector(vector&& _Right);`
    + `vector(size_type Count);`
    + `vector(size_type _Count, const Type& val);`
    + `template<class InputIterator> vector(InputIterator _First,InputIterator _Last); // 以迭代器_First和_Last之间的元素初始化该向量`
+ 例5-1 测试vector中的构造函数
+ 读向量容器元素的操作
    + `reference front();  const_reference front() const;` 返回第一个元素
    + `reference back();  const_reference back() const;` 返回最后一个元素
+ 各种用于改变向量容器中数据的成员函数
    + `clear()`
    + `erase(position)`
    + `insert()`
    + `push_back(elem)`
    + `pop_back()`
    + `resize(num)`
    + `resize(num,elem)`
+ 例5-2 编写一个程序
+ 表5-4：计算向量容器大小的操作
    + `bool empty() const;`
    + `size_type max_size() const;`
+ 例5-3 编程程序，测试“表5-4：计算向量容器大小的操作”的成员函数，了解其功能
+ 例5-4 编写一个在vector上使用C++11新规则的程序。
+ [cplusplus-vector](http://www.cplusplus.com/reference/vector/)
+ [C++ vector用法](http://www.cnblogs.com/wang7/archive/2012/04/27/2474138.html)  *不过，这个开始看还行，现在来看，差不多都会了，算法部分接触得少。*

###  5.2 


### 5.4 STL关联式容器