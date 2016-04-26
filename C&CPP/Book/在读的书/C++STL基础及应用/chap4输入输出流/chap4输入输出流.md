##  内容
#### 4.1 标准输入输出流
+ 内容 **iostream**
	+ 标准输入流cin(键盘)，标准输出流cout(显示器)
	+ 重载了两种运算符`>>`和`<<`
	+ get系列函数
		+ int get();
		+ istream& get(unsigned char* pszBuf, int nBufLen, char delim='\n');当遇到输入流中的界定符时，get()停止执行，但是并不从输入流中提取界定符，直接在字符串缓冲区尾部加结束标志\0
		+ istream& getline(unsigned char* pszBuf, int nBufLen, char delim='\n');从输入流中提取界定符，但不会把它存储到结果缓冲区中。
	+ 处理流错误
		+ int rdstate(); 状态信息特征值
		+ bool good();
		+ bool eof(); 已到达流的末尾
		+ bool fail(); 流可以继续使用
		+ bool bad(); 流不能继续使用
+ 例子
	+ [e4_1.cpp 标准输入输出流给不同变量赋值]
	+ [e4_3.cpp get,getline 函数简单示例]
	+ [e4_5.cpp 确保输入一个整型数给变量a]

#### 4.2 文件输入输出流
+ 内容 **ifstream**
	+ 文件打开
	+ 文件关闭
	+ 文件读写
		+ 文本文件
		+ 二进制文件
		+ 输入输出流缓冲
		+ 定位输入输出流

#### 4.3 字符串输入输出流
+ 内容 **stringstream**
	+ 直接对 **内存**中的数据进行操作。
	+ `<sstream>`
		+ istringstream
		+ ostringstream
		+ stringstream
+ 例子
	+ [反解字符串给各变量赋值e4_12.cpp]
	+ [合并不同类型的数据到字符串e4_13.cpp]


#### 4.4 综合示例
+ 例子
	+ e4_14.cpp 确保输入一个整型数给变量a

