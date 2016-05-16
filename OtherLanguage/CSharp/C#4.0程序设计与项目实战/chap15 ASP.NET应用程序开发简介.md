##  内容

#### 15.1 ASP.NET简介
+ ASP.NET应用程序的标准定义是：文件，页面，处理器，模块和可执行代码的组合，并且它们能够从服务器上的一个虚拟目录中被引用。
+ 每个ASP.NET应用程序都运行在一个单独的应用程序域，应用程序域是内存中的独立区域。
+ 安装和配置IIS
	+ “控制面板”|“管理工具”|“Internet信息服务”|“默认网站”|“新建”|“虚拟目录”
+ ASP.NET页面与服务器交互，传递Web页面的过程

#### 15.2 ASP.NET简介
+ 创建和配置ASP.NET应用程序的方法
	+ Properties【关于应用程序项目特性集控制的文件】
	+ 引用【应用程序要使用到组件信息】
	+ Account【应用程序访问账户的信息】
	+ App_Data【应用程序数据信息】
	+ Script【脚本资源】
	+ Styles【样式表信息】
	+ About.aspx【自动生成的页面，可以在其中编写关于应用程序说明的信息】
	+ Default.aspx【自动生成的页面，一般作为应用访问入口】
	+ Globe.asas【全局数据处理程序】
	+ Site.master【自动生成的母版页，程序员可以根据自己的需要进行改写】
	+ Web.config【配置文件，对应用程序进行配置】
+ Web.config
	+ \<authentication>节：配置ASP.NET身份验证支持。
	+ \<authorization>节：控制对URL资源的客户端访问。
	+ \<compilation>节：配置ASP.NET使用的所有编译设置。
	+ \<customErrors>节：有关自定义错误的信息。不适用于XML Web services中发生的错误。
	+ \<httpRuntime>节：配置ASP.NET HTTP运行库设置。
	+ \<pages>节：标识特定于页的配置设置。
	+ \<sessionState>节：为当前应用程序配置会话状态设置。
	+ \<trace>节：配置ASP.NET跟踪服务，主要用来测试哪里出错。

#### 15.3 ASP.NET控件

#### 15.4 ASP.NET内置对象
+ Response对象
+ Request对象
+ Server对象【提供对服务器上的方法和属性的访问】
+ ViewState对象
+ Cookies对象：是一种能让网站服务器把少量数据储存到客户端的硬盘或内存中，或是从客户端的硬盘读取数据的一种技术。
+ Session对象：为当前用户会话提供信息，还提供对可用于存储信息的会话范围的缓存的访问，以及控制如何管理会话的方法。
+ Application对象：定义ASP.NET应用程序中的所有应用程序对象通用的方法，属性和事件。


#### 15.5 创建和使用Web服务
+ 创建Web服务
	+ `[WebMethod]`
+ 使用

## 问题

## 练习

## 履历
+ 20160516学习并记下笔记{创建和调用Webservice要自己练习一下，N久前创建的时候，没写Webmethod方法，导致报错，不知道原因。}
