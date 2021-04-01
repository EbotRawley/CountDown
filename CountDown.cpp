#include<iostream>
#include<windows.h>

using namespace std;

int main(){
    int x;
    cout << "Enter coutdown number : ";
    cin >> x;
	for (int i = x; i >= 0; i--){
		Sleep(1000);
		system("cls");
		Beep(1000, 100);
		cout << "\n\t\t" << i;
			if(i == 0)
		{
			for(int i=1990; i<=2000; i+=5){
			Beep(i, 100);
			Sleep(50);
			}
			Sleep(500);
			system("cls");
			cout << "\n\n\t\t Hacked !";
			cout << "\n\n";
		}
	}
	return 0;
}
