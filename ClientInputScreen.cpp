#include "stdafx.h" 
#include "ClientInputScreen.h" 

void ClientInputScreen::setClient()  //���� ��������
{
	cout << "������� ��� ���������� (��������� �.�.): " << endl;
	getaLine(addName);
	cout << "������� �������� ������ (����, ����������): " << endl;
	getaLine(addFlower);
	cout << "������� ��� ������ (���������, ��������): " << endl;
	getline(cin, addService);
	cout << "������� ���� ��������� (24.11.2020): " << endl;
	getaLine(addDate);
	Client* ptrClient = new Client(addName, addFlower, addService, addDate);
	ptrClientList->insertClient(ptrClient);    //�������� ������� � ������       

}
