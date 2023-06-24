#pragma once
#include<string>
#include<iostream>
using namespace std;

struct ListNode
{
	int value;
	struct ListNode* next;
};
void insert(ListNode*& head, int value);
void append(ListNode*& head, int value);

void traverse(ListNode* head);

void destroy(ListNode* head);