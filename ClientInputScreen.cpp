#include "stdafx.h" 
#include "ClientInputScreen.h" 

void ClientInputScreen::setClient()  //ввод клиентов
{
	cout << "Введите имя Покупателя (Андрианов А.Г.): " << endl;
	getaLine(addName);
	cout << "Введите название цветка (Роза, Хризантема): " << endl;
	getaLine(addFlower);
	cout << "Введите вид услуги (Упаковать, Украсить): " << endl;
	getline(cin, addService);
	cout << "Введите дату обращения (24.11.2020): " << endl;
	getaLine(addDate);
	Client* ptrClient = new Client(addName, addFlower, addService, addDate);
	ptrClientList->insertClient(ptrClient);    //добавить клиента в список       

}
