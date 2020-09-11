#include <iostream>

using namespace std;
int main()
{
	char a[20];
	
	cout<<"Input String : ";
	cin>>a;
	
	cout<<"Reverse String : ";
	for(int i = strlen(a); i >= 0; i--)
	{
		cout << (char)toupper(a[i]);
	}
	cout << endl;
	system("pause");
	return 0;
}