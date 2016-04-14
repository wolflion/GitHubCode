##  起源
+ 最初目的是对Yahoo-UI进行扩展，由[Jack Slocum](http://jackslocum.com/blog/)开发,参考过Java Swing的实现机制，以及design patterns的影响。
+ 采用XMLHttpRequest(Ajax)对象进行数据的异步交互，使用JavaScript增强用户体验，使用DOM组织内容，使用CSS显示外观，使用XML封装数据。
+ 类似的AJax框架：Prototype,Dojo,DWR,GWT

##  利其器
+ 下载开发工具**sublime**，浏览器测试工具**Firebug**, 最重要是下载[ExtJS](https://www.sencha.com/)。

*当然后期你是用spket，还是webstrom，取决于自己，只是觉得sublime上手较快*

##  Hello World
+ 小小白可以自己练习**html,javascript**来输出hello world.(html里直接输出，html里写函数输出，html里调用js输出)  

+ JavaScript的面向对象技术
+ ExtJS常用函数【**这是ExtJS基础**】
	+ Ext.extend()
	+ Ext.apply()
	+ Ext.onReady()
		+ 只有在Ext框架全部加载完后才能在客户端的代码中使用Ext
		+ 有三个参数，只有**第一个是必须**，表示要执行的函数
		+ 源码在EventManager.js中，实际上是调用了`Ext.EventManager.onDocumentReady`

+ ExtJS组件
	+ 第一个组件都有一个**xtype属性**
	+ 两种调用方式
		+ new `var button = new Ext.Button({}); button.render()`
		+ 配置 `items[{}],`
	+ Ext.Componet类继承于Ext.util.Observable，它是**所有组件的基类**。
	+ Ext.ViewPort，它代表整个浏览器的显示区域。不需要指定renderTo，它直接渲染到页面的body区域，所以在一个页面中就一个ViewPrt实例。                                                                        

##  API文档
+ 在下载的文件里找到`index.html`看到`API Docs`即可。

##  代码，参考书籍，下一步计划
+ 在


##  修改履历
+ 20160404 第一版


