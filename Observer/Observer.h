#pragma once
// ����۲��ߣ��������۲��߶�Ҫʵ�ֵĽӿ�

#include <string>
using namespace std;

class Observer {
public:
	virtual void update(const string& news) = 0;
};
