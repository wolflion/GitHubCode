##  内容
#### 14.1 概述
+ LINQ(Language Integrated Query)技术是.NET提供的一组数据访问技术。
+ Anders Hejlsberg & Peter Golde
+ 从数组aBunchOfWords查询出长度为5的字符串`var result = from s in aBunchOfWords where s.Length==5 select s;`

####  14.2 LINQ简介
+ 在LINQ查询中，数据源必须支持 **泛型IEnumerable(T)接口**。
+ 为了避免使用泛型语法，可以使用 **匿名类型**来声明查询，即使用 **var**关键字来声明查询。
+ 基本查询操作
	+ 获取数据源（）
	+ 筛选（where）
	+ 排序（orderby ascending/descending）
	+ 分组（group + into）
	+ 联接（join/）
		+ LINQ中的外键在对象模型中表示为包含项集合的属性。
	+ 投影
		+ 当select子句生成除源元素副本以外的内容时，该操作称为 **“投影”**。
+ 例14-1 将多个输入联接到一个输出序列。
+ 例14-2 将内存中的对象转换为XML。
+ **Lambda表达式**
	+ 格式 `(参数列表) => 表达式或语句块`

####  14.3 LINQ到ADO.NET
+ LINQ到SQL基础
+ 对话模型及其创建（DataContext类）
+ 查询数据库
	+ 聚合查询（Average,Count,Max,Min,Sum）
	+ InsertOnSubmit()方法将其加入到对应集合中
+ 更改数据库
+ 存储过程
	+ 通过应用FunctionAttribut属性和ParameterAttribute属性将方法指定为存储过程。

####  14.4 LINQ到XML
+ LINQ到XML中的类
	+ 类XElement
	+ 类Xattribute
	+ 类Xdocument
+ 构造XML树
	+ 函数构造XML树（例14-7 利用函数构造方式构造XML树）
	+ 通过分析创建XML树 （例14-8；例14-9 从文件中加载XML）
	+ 从XmlReader创建树
	+ 利用XmlWriter填充XML树
+ 序列化树
+ 查询XML树
+ 修改XML树
	+ 添加
	+ 修改
	+ 删除

##  问题
+ LINQ有什么好处？
+ 如何应对数据库更改丢失？
	+ 确保调用了SubmitChanges来将结果保存到数据库中，不调用该方法，所有的工作都是白做的。

##  练习


##  履历
+ 20160513学习并记下笔记{LINQ和XML还不是太熟呢，只是了解了一下，例子也没执行，花了50min}