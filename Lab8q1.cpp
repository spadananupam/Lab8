#include <iostream>
using namespace std;
class node
{
public:
	int data;
	node *next;
};
class linkedList
{
private:
	node *head;
	node *tail;
public:
	linkedList()
	{
		head = NULL;
		tail = NULL;
	}
	void addNode(int data)
	{
		node *temp = new node();
		temp->data = data;
		temp->next = NULL;
		if (head == NULL)
		{
			head = temp;
			tail = temp;
		}
		else
		{
			tail->next = temp;
			tail = temp;
		}
	}
	void insertNode(int data, int n1)
	{
		node *temp = new node();
		node *t = new node();
		node *t1 = new node();
		t1->data = data;
		t1->next = NULL;
		temp = head;
		for (int i = 1; i<n1 - 1; i++)
		{
			temp = temp->next;
		}
		t = temp->next;
		temp->next = t1;
		t1->next = t;
	}
	void deleteNode(int n1)
	{
		node *temp = new node();
		node *t = new node();
		temp = head;
		for (int i = 1; i<n1; i++)
		{
			temp = temp->next;
		}
		t = temp->next;
		temp = head;
		for (int i = 1; i<n1 - 1; i++)
		{
			temp = temp->next;
		}
		temp = t;
	}
	void displayList()
	{
		if (head == NULL)
		{
			cout << "Nothing";
		}
		else
		{
			node *temp = head;
			while (temp != NULL)
			{
				cout << temp->data;
				cout << " ";
				temp = temp->next;
			}
		}
	}
};
int main()
{
	int data1, data2, data3, data4, data5, d, n1, n2;
	linkedList l;
	cout << "Please enter the data to be added\n";
	cin >> data1;
	l.addNode(data1);
	cout << "Please enter the data to be added\n";
	cin >> data2;
	l.addNode(data2);
	cout << "Please enter the data to be added\n";
	cin >> data3;
	l.addNode(data3);
	cout << "Please enter the data to be added\n";
	cin >> data4;
	l.addNode(data4);
	cout << "Please enter the data to be added\n";
	cin >> data5;
	l.addNode(data5);
	l.displayList();
	cout << "Please enter the data to be inserted\n";
	cin >> d;
	cout << "The position where you want to insert it\n";
	cin >> n1;
	l.insertNode(d, n1);
	l.displayList();
	cout << "Please enter the node which you want to delete\n";
	cin >> n2;
	l.deleteNode(n2);
	l.displayList();
	system("pause");
	return 0;
}