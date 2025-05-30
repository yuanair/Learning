#include <iostream>
#include <thread>
using namespace std;
class A{
	public:
		A() {}
};
int main() {
	thread thread([]() -> void {
		cout << "Hello, thread!" << endl;
	});
	cout << "Hello, world!" << endl;
	thread.join();
	return 0;
}
