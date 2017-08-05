#include <iostream>
#include <Windows.h>
#include <string.h>
using namespace std;

int main(int argc, char* argv[])
{

	MessageBox(NULL,
		L"    Welcome to this App    \nCopyright (c) 2017 DreamTraveler",
		L"Welcome",
		MB_ICONINFORMATION | MB_OK);

	//name?
	printf("computer  >What your name?");

	char name[] = "Bob";
	printf("\nusers  >");
	scanf("%s", &name);

	printf("\ncomputer  >Hello %s\n", name);

	//theme
	{
		cout << "\ncomputer  >please choose s theme \n1.windows\n2 hanker\n3 MacOS\n";
		char a[] = { 0 };
		cout << name << "  >";
		cin >> a;
		if (strcmp(a, "1") == 0)
		{
			system("color 07");
		}
		else if (strcmp(a, "2") == 0)
		{
			system("color 02");
		}
		else if (strcmp(a, "3") == 0)
		{
			system("color F5");
		}
		else
		{
			cout << "\acomputer  >Errow!defult:1\n";
		}
	}

	system("cls");

	cout << "\ncomputer  >Try help!" << endl;

	//用户输入
	char input[] = { 0 };

	//无限循环
	while (1)
	{
		Sleep(500);
		cout << name << "  >";
		cin >> input;

		//input Hi!
		if (strcmp(input, "Hi!") == 0)
		{
			cout << "computer  >Hello!" << endl;
		}
		//input help
		else if (strcmp(input, "help") == 0)
		{
			printf("Hi!   Say hello\n");               Sleep(300);
			printf("time  The system time\n");         Sleep(300);
			printf("exit  exit this app\n");           Sleep(300);
			printf("errow exit\n");					   Sleep(300);
			printf("date  The system date\n");         Sleep(300);
			printf("cls   clear\n");                   Sleep(300);
		}

		//input exit
		else if (strcmp(input, "exit") == 0)
		{
			cout << "computer  >Bye-Bye!";						Sleep(300);
			return 0;
		}

		//input time
		else if (strcmp(input, "time") == 0)
		{
			{
				cout << "Loading |";			Sleep(400);
				cout << "\b/";					Sleep(400);
				cout << "\b-";					Sleep(400);
				cout << "\b\\";					Sleep(400);
				cout << "\b\b\b\b\b\b\b\b\b";
			}
			SYSTEMTIME sys;
			GetLocalTime(&sys);
			printf("computer  >Time:%02d:%02d:%02d.%03d      \n", sys.wHour, sys.wMinute, sys.wSecond, sys.wMilliseconds);
		}

		//input data
		else if (strcmp(input, "date") == 0)
		{
			{
				cout << "Loading |";			Sleep(400);
				cout << "\b/";					Sleep(400);
				cout << "\b-";					Sleep(400);
				cout << "\b\\";					Sleep(400);
				cout << "\b\b\b\b\b\b\b\b\b";
			}
			SYSTEMTIME sys;
			GetLocalTime(&sys);
			printf("computer  >Date:%4d/%02d/%02d        \n", sys.wYear, sys.wMonth, sys.wDay, sys.wMilliseconds);
		}

		//input errow
		else if (strcmp(input, "errow") == 0)
		{
			return -1;
		}

		//cls
		else if (strcmp(input, "cls") == 0)
		{
			system("cls");
		}

		//BadInput
		else
		{
			cout << "\acomputer  >Bad input！\n";
		}
	}
	return 0;
}