/** Wave volume counting application
* Alpha version
* coded by AXM
* Licence CC0
*/

#include <iostream>
using namespace std;
int main()
{
	int samplerate = 0;
	int lenght = 0;
	int bits = 0;
	int channels=1;
		cout << "Enter bits number in file" << endl;
	cin >> bits;
	cout << "Enter samplerate" << endl;
	cin >> samplerate;
	cout << "Enter file lenght in seconds" << endl;
	cin >> lenght;
	cout << "Enter number of channels" << endl;
	cin >> channels;
	int volume= samplerate * bits * lenght * channels / 8 / 1024 / 1024;
	cout << "approximate volume in MBs: " << volume << "MB" << endl;
	return 0;
}

