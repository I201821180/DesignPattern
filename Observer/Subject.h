#pragma once
// ���󱻹۲��ߣ��ṩ���۲��߶�Ҫʵ�ֵĽӿ�

#include "Observer.h"


class Subject {
public:
	virtual void attach(Observer*) = 0;
	virtual void dettach(Observer*) = 0;
	virtual void notify() = 0;
};