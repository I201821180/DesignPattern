#pragma once
#include "UserTable.h"

class SQLUserTable :public UserTable {
	int userId;
public:
	int getUserId() {
		return userId+1; //�������MySQL�Ľӿ�
	}
	void setUserId(int id) {
		userId = id-1;  //�������MySQL�Ľӿ�
	}
};
