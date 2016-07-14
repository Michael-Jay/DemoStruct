/*************************************************************************
> File Name: Stack.cpp
> Author: Michael Jay
> mail: xuchuanwork@foxmail.com
> Created Time: 2016年07月13日 星期三 14时24分26秒
> Function: 
 ************************************************************************/

#include "Stack.h"
#include "../require.h"

using namespace std;

void Stack::Link::init(void* dat, Link* nxt){
	data = dat;
	next = nxt;
}

void Stack::init(){
	head = 0;
}

void Stack::push(void* dat){
	Link* tmpLink = new Link;
	tmpLink->init(dat, head);
	head = tmpLink;
}

void* Stack:: peek(){
	require(head != 0, "Stack empty");
	return head->data;
}

void* Stack::pop(){
	if(head==0)
		return 0;
	void* result =  head->data;
	Link* oldHead = head;
	head = head->next;
	delete oldHead;
	return result;
}

void Stack::cleanUp(){
	require(head==0, "Stack not empty");

}
