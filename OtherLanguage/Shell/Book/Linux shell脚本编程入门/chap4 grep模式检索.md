##  内容
#### 4.1 grep
+ 检索与输入文件的已有模式列表匹配的行
+ grep是使用换行符分配匹配对象的
+ grep常用选项
	+ -b
	+ -c
	+ -h 不显示文件名
	+ -i 忽略大小写
	+ -l 显示的文件名包括至少1个模式匹配行。显示时每个文件名用newline隔开。 
	+ -n 显示匹配行时，与文件行号一起显示。

#### 4.2 egrep
+ grep的扩展，可以使用其他正则表达式的元字符集。

#### 4.3 fgrep
+ 不能使用正则表达式的元字符集
+ 只能将特殊字符及$字符识别为其本身
+ `fgrep \``[A-Z]\`` fgrep.txt ` 
