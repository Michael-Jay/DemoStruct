/*************************************************************************
> File Name: Stack.h
> Author: Michael Jay
> mail: xuchuanwork@foxmail.com
> Created Time: 2016年07月13日 星期三 14时24分26秒
> Function: 
 ************************************************************************/

#ifndef STACK_H
#define STACK_H

struct Stack{
	struct Link{
		void* data;
		Link* next;
		void init(void* dat, Link* nxt);
	}* head;

	void init();
	void push(void* dat);	//压栈，需要传入该数据的指针
	void* peek();	//取出栈顶元素指针，但保留在栈中
	void* pop();	//弹出栈顶元素指针，并去除栈顶元素
	void cleanUp();
};


#endif
