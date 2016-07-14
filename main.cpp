/*************************************************************************
> File Name: StackTest.cpp
> Author: Michael Jay
> mail: xuchuanwork@foxmail.com
> Created Time: 2016年07月13日 星期三 14时44分59秒
> Function: 
 ************************************************************************/

#include "Stack.h"
#include "../require.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main(int argc ,char** argv)
{
	requireArgs(argc, 1);
	ifstream in(argv[1]);
	assure(in, argv[1]);

	Stack textLines;
	textLines.init();
	string line;

	//读文件，并把每一行保存到Stack中
	while(getline(in, line))
		textLines.push(new string(line));

	//从Stack中弹出每一行，并打印
	string *s;
	while( (s = (string*) textLines.pop() ) != 0){
		cout << *s << endl;
		delete s;
	}

	textLines.cleanUp();
	return 0;
}
