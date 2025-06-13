#include "Worker.h"
#include"Timer.h"

void Worker::doSomething()
{
	Timer timer;

	std::cout << "Worker : doSomething()" << endl;
	timer.elapsed();
}

