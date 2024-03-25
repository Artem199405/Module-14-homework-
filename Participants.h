#pragma once

#include <string>
#include "Messages.h"

using namespace std;

//class Messages;

class Participants
{
private:
	

	int _size; // Максимальное количество присланных сообщений
	int _count; // Количество присланных сообщений
	string _login, _password, _name;
	Messages* _messages;

public:
	//Конструктор
	Participants();

	// Деструктор
	~Participants();

	// Добавление нового сообщения
	void recordMessage(string, string);

	// Чтение присланных сообщений
	void showMessages();

	// Сеттеры
	void setLogin(string);

	void setPassword(string);

	void setName(string);

	// Геттеры
	string getLogin();

	string getPassword();

	string getName();
};