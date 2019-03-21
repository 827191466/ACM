#include<iostream>
#include<iomanip>
using namespace std;
struct celltype {
	int element;
	celltype * next;
};
typedef celltype * LIST;
typedef celltype *position;
//基本操作
//在位置p的后面插入一个元素，其值为x
void insert(position p, int x)
{

	LIST q = new celltype;
	if (q == NULL)
	{
		cout << "ERROR" << endl;
		return;
	}
	q->element = x;
	q->next = p->next;
	//	p->next = p->next;
	p->next = q;
}

//删除元素p的后一个元素
void Delete(position p)
{
	if (p->next == NULL)
	{
		cout << "ERROR!" << endl;
		return;
	}

	LIST q = p->next;
	p->next = p->next->next;	//p->next = q->next;
	delete q;
}


LIST end(LIST h)
{
	LIST temp = h;
	while (1)
	{
		if (temp->next == NULL)
			break;
		temp = temp->next;
	}
	return temp;
}

LIST previous(LIST h, position p)
{
	LIST temp = h;
	while (1)
	{
		if (temp->next == p)
			break;
		temp = temp->next;
	}
	return temp;
}

void makenull(LIST h)
{
	//	while(h->next!=NULL)
	//	Delete(h);
	LIST p;
	while (h->next != NULL)
	{
		p = h->next;
		h->next = p->next;
		delete p;
	}
	delete h;	//将整个表清空 
}

//遍历
void ShowList(LIST &L) {
	position p;
	p = L->next;
	while (p != NULL) {
		cout << p->element << " ";
		p = p->next;
	}
	cout << endl;
}

//合并成一个新的表
LIST UnionList(LIST &L1, LIST &L2) {
	LIST L3 = new celltype;
	position p1, p2, p3;
	p1 = L1;
	p2 = L2;
	p3 = L3;
	int min1 = p1->next->element;
	int min2 = p2->next->element;
	while (p1 != NULL || p2 != NULL) {
		LIST temp = new celltype;
		p3->next = temp;
		p3 = temp;
		if (p2 == NULL || min1 <= min2) {
			temp->element = min1;
			p1 = p1->next;
			if (p1 != NULL)
				min1 = p1->element;
		}
		else if (p1 == NULL || min1 > min2) {
			temp->element = min2;
			p2 = p2->next;
			if (p2 != NULL)
				min2 = p2->element;
		}
	}
	p3->next = NULL;
	ShowList(L3);
	return L3;
}

//测试
int main() {
	LIST L1 = new celltype;
	LIST L2 = new celltype;
	LIST L3;
	L1->next = NULL;
	L2->next = NULL;
	insert(L1, 10);
	insert(L1, 7);
	insert(L1, 4);
	insert(L1, 2);
	insert(L2, 14);
	insert(L2, 8);
	insert(L2, 3);
	L3 = UnionList(L1, L2);
	ShowList(L1);
	ShowList(L2);
	ShowList(L3);
	system("pause");
	return 0;
}