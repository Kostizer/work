#include "stdafx.h" 
#include "UserInterface.h" 
using namespace std;

UserInterface::UserInterface()
{
	ptrClientList = new ClientList;
	ptrIncomeList = new IncomeList;
	ptrExpenseList = new ExpenseList;
}


UserInterface::~UserInterface()
{
	delete ptrClientList;
	delete ptrIncomeList;
	delete ptrExpenseList;
}



void UserInterface::interact()  //����������� �������� ����
{
	while (true)
	{

		cout << "\n";
		cout << " �������:\n";
		cout << " i - ��� ����� ������\n";
		cout << " s - ��� ������ ������\n";
		cout << " o - ��� ������ �� ���������\n";
		ch = getaChar();
		system("cls");
		if (ch == 'i')       // ���� ����� ������
		{
			cout << "\n";
			cout << "|       ���� ������       |\n";
			cout << "|_________________________|\n";
			cout << "  1 - ���� ������ �������  \n";
			cout << "  2 - ���� ������ \n";
			cout << "  3 - ���� �������� \n";
			ch = getaChar();
			system("cls");
			switch (ch)
			{

			case '1': ptrClientInputScreen = new ClientInputScreen(ptrClientList);
				ptrClientInputScreen->setClient();
				delete ptrClientInputScreen;
				break;
				break;
			case '2': ptrIncomeInputScreen = new IncomeInputScreen(ptrIncomeList);
				ptrIncomeInputScreen->inputIncome();
				delete ptrIncomeInputScreen;
				break;
			case '3': ptrExpenseInputScreen = new ExpenseInputScreen(ptrExpenseList);
				ptrExpenseInputScreen->inputExpense();
				delete ptrExpenseInputScreen;
				break;
			default: cout << "������ �����\n";
				break;
			}
		}
		else if (ch == 's')       //���� ������ ������
		{
			cout << "\n";
			cout << "|       ����� ������       |\n";
			cout << "|__________________________|\n";
			cout << " 1 - ����� ������ �������� \n";
			cout << " 2 - ����� ������ �������  \n";
			cout << " 3 - ����� ������ �������� \n";
			cout << " 4 - ����� �������� ������  \n";

			ch = getaChar();
			system("cls");
			switch (ch)
			{
			case '1': ptrClientList->display();
				break;
			case '2':ptrIncomeList->display();
				break;
			case '3': ptrExpenseList->display();
				break;
			case '4':ptrAnnualReport = new AnnualReport(ptrIncomeList, ptrExpenseList);
				ptrAnnualReport->display();
				delete ptrAnnualReport;
				break;
			default: cout << "������ �����\n";
				break;

			}
		}

		else if (ch == 'o')  //����� �� ���������
			return;
		else     cout << "������! ��������� ����\n";
	}
	delete ptrClientInputScreen;
}
