#ifndef CLIENT_H   
#define CLIENT_H  
#include <string> 
using namespace std;

class Client // ����� �������
{
private:
	string name;   //������� �.�
	string flower; //������
	string service; //��� ������
	string date;  //���� ���������

public:
	Client(string n, string f, string s, string d);
	~Client();
	string getName(); //�������� ���
	string getFlower();//�������� ������
	string getService();//�������� ��� ������
	string getDate();//�������� ���� ��������
};
#endif
