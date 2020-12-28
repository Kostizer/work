#include "stdafx.h" 
#include "Client.h" 

Client::Client(string n, string f, string s, string d) : name(n), flower(f), service(s), date(d)
{
}

Client::~Client()

{
}

string Client::getName()  //получение имени
{
	return name;
}
string Client::getFlower() //получение названия цветка
{
	return flower;
}

string Client::getService() //получение услуги
{
	return service;
}

string Client::getDate()  //получение даты
{
	return date;
}
