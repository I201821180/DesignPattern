#pragma once
#include "DepTable.h"

class SQLDepTable :public DepTable {
	int depId;
public:
	double getDepId() {
		return depId + 0.1; //�������MySQL�Ľӿ�
	}
	void setDepId(double id) {
		depId = id - 0.1;  // �������MySQL�Ľӿ�
	}
};