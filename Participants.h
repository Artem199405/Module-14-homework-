#pragma once

#include <string>
#include "Messages.h"

using namespace std;

//class Messages;

class Participants
{
private:
	

	int _size; // ������������ ���������� ���������� ���������
	int _count; // ���������� ���������� ���������
	string _login, _password, _name;
	Messages* _messages;

public:
	//�����������
	Participants();

	// ����������
	~Participants();

	// ���������� ������ ���������
	void recordMessage(string, string);

	// ������ ���������� ���������
	void showMessages();

	// �������
	void setLogin(string);

	void setPassword(string);

	void setName(string);

	// �������
	string getLogin();

	string getPassword();

	string getName();
};