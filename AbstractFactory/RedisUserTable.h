#pragma once
#include "UserTable.h"

class RedisUserTable :public UserTable {
	int userId;
public:
	int getUserId() {
		return userId + 2;  //�������redis�Ľӿ�
	}
	void setUserId(int id) {
		userId = id - 2;  //�������redis�Ľӿ�
	}
};
