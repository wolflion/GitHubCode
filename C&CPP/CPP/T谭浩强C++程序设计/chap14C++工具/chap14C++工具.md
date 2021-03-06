##  缘起

##  内容
###  14.1 异常处理
+ 14.1.1 异常处理的任务
    + 人们希望程序不仅在正确的情况下能正常运行，而且 **在程序有错的情况下也能作出相应的处理**，而不致使程序莫名其妙地终止，甚至出现死机的现象。
    + **异常处理**指的是对运行时出现的差错以及其他例外情况的处理。
+ 14.1.2 异常处理的方法
    + **C++采取的办法是：** 如果在执行一个函数过程中出现异常，可以不在本函数中立即处理，而是发出一个信息，传给它的上一级（即调用它的函数），它的上级捕捉到这个信息后进行处理。如果上一级，一直到最高级都不处理，最后只好异常终止程序的执行。
    + *如果在每一个函数中都设置处理异常的程序段，会使程序过于复杂和庞大。*
    + 例14.1 给出三角形的三边a,b,c，求三角形的面积。只有a+b>c，b+c>a，c+a>b时才能构成三角形。设置异常处理，对不符合三角形条件的输出警告信息，不予计算。
    + 例14.2 在函数嵌套的情况下检测异常处理
+ 14.1.3 在函数声明中进行异常情况指定
    + `double triangle(double,double,double) throw(double);`//表示triangle函数只能抛出double类型的异常信息。
    + `double triangle(double,double,double) throw(int,double,float,char);`//表示triangle函数可以抛出int，double，float或char类型的异常信息。
    + `double triangle(double,double,double) throw();`//声明一个不能抛出异常的函数。
+ 14.1.4 在异常处理中处理析构函数
    + 例14.3 在异常处理中处理析构函数