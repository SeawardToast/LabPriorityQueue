#include <stdio.h>
#include "heap.h"
#include "priority_queue.h"
using namespace std;
int main() {
	/*
	heap<int> h;
	cout << h.size() << endl;
	cout << h.is_empty() << endl;
	h.insert(4);
	h.insert(5);
	h.insert(2);
	h.insert(6);
	h.insert(8);
	h.insert(3);
	h.remove();
	h.remove();
	h.remove();
	cout << "CALLING PRINT" <<endl;
	h.print();
	 */
	 priority_queue<int> q;
	 cout << "Pushing 3, 4, 5 to priority queue" << endl;
	 q.push(3);
	 q.push(4);
	 q.push(5);
	 cout << "Printing priority queue" << endl;
	 q.print();
	 cout << "Popping priority queue" << endl;
	 q.pop();
	 cout << "Printing priority queue" << endl;
	 q.print();
	 cout << "Calling top: " << q.top() << endl;
	 cout << "Is the queue empty? " << q.empty() << endl;
	 cout << "What is the size of the queue? " << q.size() << endl;

}
