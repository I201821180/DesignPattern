#pragma once
#include <iostream>
#include "UserTable.h"

class SQLUserTable :public UserTable {
	int userId;
public:
	int getUserId() {
		std::cout << "SQLUserTable getUserId" << std::endl;
		return userId+1; //�������MySQL�Ľӿ�
	}
	void setUserId(int id) {
		std::cout << "SQLUserTable setUserId" << std::endl;
		userId = id-1;  //�������MySQL�Ľӿ�
	}
};
