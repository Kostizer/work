// work.cpp : Defines the entry point for the console application.
//

#include "stdafx.h" 
#include "UserInterface.h"
#include <locale>
#include <clocale>

int main(){
	setlocale(LC_ALL, "rus");//Сункци§ setlocale() зада™т локализацию программы.  
	system("chcp 1251 > nul");
	UserInterface theUserInterface;
	theUserInterface.interact();
	return 0;
}
