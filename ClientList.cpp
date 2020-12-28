#include "stdafx.h" 
#include "ClientList.h" 

ClientList::~ClientList()             //������������� ��������� ������ � �������
{
	while (!setPtrsClients.empty()) // �������� ���� �������
	{	 // �������� ���������� �� ���������� 
		iter = setPtrsClients.begin();
		delete *iter;
		setPtrsClients.erase(iter);
	}
}


void ClientList::insertClient(Client* ptrT) {  //���������� ������ ���������� � ������
	setPtrsClients.push_back(ptrT);
}

void ClientList::display()     //����������� ������ ��������
{
	cout << "\n����������, ������������ ������, �������� ������, ����:\n";
	cout << "\n";
	if (setPtrsClients.empty())  //���� ������ ����
		cout << "������� �� �������� �� ����������\n" << endl;
	else
	{
		iter = setPtrsClients.begin();
		while (iter != setPtrsClients.end()) //������� ��� ������ ������
		{
			cout << (*iter)->getName() << ", " << (*iter)->getFlower() << ", " << (*iter)->getService() << ", " << (*iter)->getDate() << endl;
			*iter++;
		}
	}
}
