// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <sstream>
#include <iostream>
#include <iomanip>

using namespace std;

struct Dlist
{

	int info;
	Dlist* next, * prev;

};


int main()
{

	Dlist* head, * p, * r;
	int x, k, y;
	int max, i, a, b;
	float sr;
	head = new Dlist;
	cin >> x;
	head->info = x;
	head->next = NULL;
	head->prev = NULL;
	p = head;

	a = 0;
	k = 0;

	cin >> x;
	while (x)
	{
		r = new Dlist;
		r->info = x;
		r->next = NULL;
		r->prev = p;
		p->next = r;
		p = r;
		cin >> x;

	}

	p = head->next;
	k = 0;

	while (p != NULL)
	{
		a = 0;
		b = 0;

		i = 1;

		while (i <= p->info)
		{

			if (p->info % i == 0) a++;
			i++;

		}

		i = 1;

		while (i <= p->prev->info)
		{

			if (p->prev->info % i == 0) b++;
			i++;

		}

		if ((a == 2) && (b != 2))
		{

			r = new Dlist;
			r->info = pow(p->info, 2);
			r->next = p->next;
			r->prev = p;
			p->next = r;
			p = r;
			
		}

		p = p->next;

	}

	p = head;

	while (p != NULL)
	{

		cout << p->info << setw(3);
		p = p->next;
	}

}