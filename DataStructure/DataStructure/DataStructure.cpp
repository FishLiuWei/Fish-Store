// DataStructure.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include "list.h"
#include "stack.h"
#include "queue.h"
#include "set.h"
#include "chtbl.h"

#include <iostream>
#include <regex>
using namespace std;

int matchImp(const void *key1, const void *key2)
{
	return key1 == key2;
}

int main()
{
#pragma region 单链表
	//int a = 555;
	//List_ *list, l;
	//list = &l;
	//list_init(list, NULL);

	//list_ins_next(list, NULL, &a);

	//int b = *(int *)list->tail->data;

	//cout << list->size << endl;
	//cout << list->head->data << endl;
	//cout << b << endl;
	//list_destory(list);
	//cout << list->size << endl;
#pragma endregion

#pragma region 栈
	//Stack *s=(Stack *)malloc(sizeof(Stack));
	//stack_init(s,NULL);
	//string str = "98k";
	//stack_push(s,&str);

	//string out=*(string *)s->head->data;
	//cout << s->size << endl;
	//cout << out << endl;
	//void * v = &str;
	//stack_pop(s,&v);
	//cout << s->size << endl;
	//cout << out << endl;
#pragma endregion

#pragma region 队列
	//Queue *q = (Queue *)malloc(sizeof(Queue));
	//queue_init(q,NULL);

	//char c1 = '1';
	//char c2 = '2';
	//char c3 = '3';
	//char c4 = '4';
	//char c5 = '5';

	//queue_enqueue(q, &c1);
	//queue_enqueue(q, &c2);
	//queue_enqueue(q, &c3);
	//queue_enqueue(q, &c4);
	//queue_enqueue(q, &c5);

	//char *out=(char *)malloc(sizeof(char));
	//void *addr = (void **)malloc(8);
	//while (q->size!=0)
	//{
	//	out = (char *)queue_peek(q);
	//	cout << *out << endl;
	//	addr = queue_peek(q);
	//	queue_dequeue(q,&addr);
	//}
#pragma endregion

#pragma region 集合
	//Set *set = (Set *)malloc(sizeof(Set));
	//set_init(set,matchImp,NULL);
	//string s = "哈哈哈";
	//set_insert(set,&s);
	//int i=set_is_member(set,&s);
	//cout << i<<endl;
	//Set *set2 = (Set *)malloc(sizeof(Set));
	//set_init(set2, matchImp, NULL);
	//string s2 = "呵呵呵";
	//set_insert(set2, &s2);

	//Set *newSet = (Set *)malloc(sizeof(Set));
	//set_union(newSet,set, set2);
	//string out1 = *(string *)newSet->head->data;
	//string out2 = *(string *)newSet->tail->data;
	//cout << out1 << endl;
	//cout << out2 << endl;
#pragma endregion

#pragma region 哈希表
	CHTbL *hash=(CHTbL *)malloc(sizeof(CHTbL));
	chtbl_init(hash,1, hashpjw, matchImp, NULL);
	string s = "嘿嘿嘿";
	chtbl_insert(hash, &s);
	string s2 = "嘿嘿嘿2";
	chtbl_insert(hash, &s2);

	cout << hash->size << endl;
	cout << *(string *)list_data(hash[1].table->head) << endl;
#pragma endregion


	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
