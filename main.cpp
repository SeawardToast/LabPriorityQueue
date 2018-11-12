#include <stdio.h>
#include "heap.h"
#include "priority_queue.h"
using namespace std;
int main() {
	heap<int> h;
	cout << h.size() << endl;
	cout << h.is_empty() << endl;
	h.insert(4);
		cout << h.size() << endl;

}
