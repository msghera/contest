#include <iostream>
#include <stdio.h>

#define mx 100002
#define unvisited -1
#define visited 1

using namespace std;

class queue{
	int data [mx];
	int entry_pos, delete_pos;
public:
	queue(){
		entry_pos = 0, delete_pos = unvisited;
	}
	int size(){
		return entry_pos - delete_pos + 1;
	}
	void push(int a){
		if(entry_pos == mx) {
			cout<<"Overflow"<<endl;
			return;
		}
		data[entry_pos++] = a;
	}
	int pop(){
		delete_pos++;
		if(entry_pos == delete_pos) {
			cout<<"Underflow"<<endl;
			return unvisited;
		}
		int ret = data[delete_pos];
		return ret;
	}
	void print(){
		cout<<"entry_pos : "<<entry_pos<<" delete_pos :"<<delete_pos<<endl;
	}
};

int main(){
	queue q;
	q.push(1);
	q.print();
	cout<<q.pop()<<endl;
	q.print();
	cout<<q.pop()<<endl;
	q.print();
return 0;}
