#include "stdafx.h" 
#include "Client.h" 

Client::Client(string n, string f, string s, string d) : name(n), flower(f), service(s), date(d)
{
}

Client::~Client()

{
}

string Client::getName()  //��������� �����
{
	return name;
}
string Client::getFlower() //��������� �������� ������
{
	return flower;
}

string Client::getService() //��������� ������
{
	return service;
}

string Client::getDate()  //��������� ����
{
	return date;
}
