#pragma once
class playground
{
public:
	playground(int max_count = 5);
	bool addcount();
	bool decreasecount();
	int getcurrencount();
private:
	int max_count;
	int current_count;
};

