#!/bin/bash
#filename:15.1判断是否是符号链接文件
FILENAME=   #定义变量FILENAME，且值为空
echo "Input file name:"
read FILENAME  #从stdin中读入用户的输入值，并存入变量FILENAME中
if [ -L $FILENAME ]  #判断文件是否是链接文件
	then
mv  $FILENAME  /etc
fi