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



void UserInterface::interact()  //отображение главного меню
{
	while (true)
	{

		cout << "\n";
		cout << " Введите:\n";
		cout << " i - для ввода данных\n";
		cout << " s - для вывода данных\n";
		cout << " o - для выхода из программы\n";
		ch = getaChar();
		system("cls");
		if (ch == 'i')       // меню ввода данных
		{
			cout << "\n";
			cout << "|       Ввод данных       |\n";
			cout << "|_________________________|\n";
			cout << "  1 - Ввод нового клиента  \n";
			cout << "  2 - Ввод оплаты \n";
			cout << "  3 - Ввод расходов \n";
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
			default: cout << "Ошибка ввода\n";
				break;
			}
		}
		else if (ch == 's')       //меню вывода данных
		{
			cout << "\n";
			cout << "|       Вывод данных       |\n";
			cout << "|__________________________|\n";
			cout << " 1 - Вывод списка клиентов \n";
			cout << " 2 - Вывод списка доходов  \n";
			cout << " 3 - Вывод списка расходов \n";
			cout << " 4 - Вывод годового отчета  \n";

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
			default: cout << "Ошибка ввода\n";
				break;

			}
		}

		else if (ch == 'o')  //выход из программы
			return;
		else     cout << "Ошибка! Повторите ввод\n";
	}
	delete ptrClientInputScreen;
}
