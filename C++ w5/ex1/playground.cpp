#include "playground.h"
playground::playground(int max_count) :current_count(0)
{
	playground::max_count = (max_count >= 1) ? max_count : 5;
}

bool playground::addcount()
{
	if (current_count >= max_count) {
		return false;
	}
	else {
		return current_count = current_count + 1;
	}
	
}

bool playground::decreasecount()
{
	if (current_count <=0) {
		return false;
	}
	else {
		return current_count = current_count - 1;
	}
	
}
int playground::getcurrencount()
{
	return current_count;
}
