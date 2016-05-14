##  内容

#### 12.1 数据管理
+ **数据驱动代码**
+ 数据访问
	+ 规模问题 
	+ 状态问题 {HTTP是一个无状态的协议；使得Web应用程序需要在单一请求中执行所有的工作。}

#### 12.2 配置数据库
+ 建立SQL Server数据库
+ 在Visual Studio中浏览和修改数据库
	+ “视图”|“服务器资源管理器”|“数据连接”节点
+ SQL命令行工具
	+ `D:\Microsoft SQL Server\X64\100\Tools\Binn\sqlcmd.exe`
	+ “开始”|“所有程序”|“VS2010”|“Visual Studio Tools”|“Visual Studio命令提示(2010)”使用sqlcmd工具。


#### 12.3 基本的SQL
+ 增删改查
+ “视图”|“服务器资源管理器”|“数据连接”节点|右击选择“新建查询”

#### 12.4 ADO.NET
+ ADO.NET结构
	+ 包含和管理数据的类：DataSet,DataTable,DataRow和DataRelation等。
	+ 连接数据源的类：Connection,Command和DataReader等。
+ ADO.NET命名空间
	+ System.Data  【提供对表示ADO.NET结构的类的访问】
	+ System.Data.Common  【包含由各种.NET数据提供共享的类】
	+ System.Data.OleDb 【用于OLEDB的.NET数据提供器】
	+ System.Data.sqlClient  【用于SQL Server的.NET数据提供器】
	+ System.Data.SqlClient
	+ System.Data.OracleClient
	+ System.Data.Odbc
+ 数据提供器类
	+ Connection
	+ Command
	+ DataReader
	+ DataAdapter


####  12.5 直接数据访问
+ 创建Connection
+ 创建Command
	+ `SqlCommand myCommand = new SqlCommand("select * from DataTable",connection);`
+ DataReader
	+ 使用DataReader对象可以将数据源的数据取出后显示给使用者。
	+ 由于Command对象会自动产生DataReader对象，所以只要声明一个指到DataReader对象的变量来接收即可；
	+ DataReader对象只能配合Command对象使用，而且DataReader对象在操作的时候Connection对象是保持连接的状态。
+ `例12-1 通过ADO.NET对象以直接数据访问模式从数据库获取数据。`

#### 12.6 不连接的数据访问
+ 不连接的数据访问
	+ 将会在内存中的DataSet对象中保存数据的副本，在数据库连接断开后仍然能够操作的数据。
+ 使用DataAdapter
	+ 表示一组数据命令和一个数据库连接，用于填充DataSet和更新数据源。
+ DataSet
	+ 在从数据库完成数据抽取后，DataSet就是数据的存放池，它是各种数据源中的数据在计算机内存中映射成的缓存。
+ 以不连接的方式获取数据
	+ 每个DataAdapter对象支持4种数据库操作命令
	+ DataAdapter对象提供了一个名为Fill的方法
+ `例12-2 通过ADO.NET对象以不连接的方式从数据库获取数据。`


##  问题
+ DataSet和DataReader有什么区别？
+ 一段程序中为什么不能同时创建多个DataReader？
+ **以前可能也零星看过，怎么也建构不了知识体系？**这个需要好好解决下。


##  练习
+ 使用DataReader从X数据库中获取X表的所有信息，并显示出来。
+ 使用DataSet从X数据库中获取X表的所有信息，并显示出来。


##  履历
+ 20160512学习并记下笔记{目前只是一个大概印象，很多细节和类的用法需要到时再查呢？}