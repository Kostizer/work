#ifndef CLIENT_H   
#define CLIENT_H  
#include <string> 
using namespace std;

class Client // класс клиента
{
private:
	string name;   //фамилия и.о
	string flower; //цветок
	string service; //вид услуги
	string date;  //дата обращения

public:
	Client(string n, string f, string s, string d);
	~Client();
	string getName(); //получить имя
	string getFlower();//получить цветок
	string getService();//получить вид услуги
	string getDate();//получить дату обащения
};
#endif
