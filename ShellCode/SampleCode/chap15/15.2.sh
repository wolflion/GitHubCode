#!/bin/bash
#filename:15.2给用户一个提示菜单，根据用户的选择进行相应的操作
echo "Please choose:(1-3,or ^C)"
echo "1 vi"
echo "2 x-window"
echo "3 print-file"
echo "Ctrl+c quit"
read xyz
if[ $xyz = 1 ] 
	then
	vi
	exit 1
elif [ $xyz = 2 ]; then
	startx
	exit 1
elif [ $xyz = 3 ]; then
		echo " //Please enter filename:"	
		read filename
		lp $filename &
		exit 1
else
echo "-------------"		
/bin/sh 15.2
fi
