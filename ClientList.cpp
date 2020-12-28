#include "stdafx.h" 
#include "ClientList.h" 

ClientList::~ClientList()             //деконструктор удал€ющий данные о клиенте
{
	while (!setPtrsClients.empty()) // удаление всех жильцов
	{	 // удаление указателей из контейнера 
		iter = setPtrsClients.begin();
		delete *iter;
		setPtrsClients.erase(iter);
	}
}


void ClientList::insertClient(Client* ptrT) {  //добавление нового покупател€ в список
	setPtrsClients.push_back(ptrT);
}

void ClientList::display()     //отображение списка клиентов
{
	cout << "\nѕокупатель, Ќаименование цветка, Ќазвание услуги, ƒата:\n";
	cout << "\n";
	if (setPtrsClients.empty())  //если список пуст
		cout << "«аписей по клиентам не обнаружено\n" << endl;
	else
	{
		iter = setPtrsClients.begin();
		while (iter != setPtrsClients.end()) //вывести все строки списка
		{
			cout << (*iter)->getName() << ", " << (*iter)->getFlower() << ", " << (*iter)->getService() << ", " << (*iter)->getDate() << endl;
			*iter++;
		}
	}
}
