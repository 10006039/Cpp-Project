#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, const char * argv[])
{
//Declarations
int date = 0;
int month = 0;
int menu = 0;
cout << "\n Menu";
cout << "\n========";
cout << "\nEnter 1: to see Chinese Zodiac";
cout << "\nEnter 2: to Astrology Zodiac";
cout << "\nEnter 3: to Exit";
cout << "\n========";
cout << "\nEnter selection:";

cin >> menu;

do {
	cout << "1.) Astrology Zodiac" << endl;
	cin >> menu;
	
	if (menu == '1'){
		cout << "You have chosen to see your Astrology Zodiac!" << endl;

//Sentinal Value

while ((month != -1) || (date != -1)){
	cout << "Enter Month (1 - 12)\n(-1 to quit)" << endl;
	cout << "Enter the Month:" << endl;
	cin>>month;
	cout << "Enter the date:" << endl;
	cin >> date;

//Decide which zodiac you are
if ((date >= 20 && date <= 31 && month==1)||(date <= 18 && date >= 1 && month == 2)){	
	cout << "Your Zodiac Sign is AQUARIUS..." 
	<< "Aquarius is the eleventh sign of the Zodiac and associated with future and unuasual ideas." << endl;
	
}
else if ((date >= 19 && date <= 31 && month == 2)||(date <= 20 && date >= 1 && month == 3)) {
	cout << "Your Zodiac Sign is PISCES..." 
	<< "Pisces is the twelfth and last sign of the Zodiac and associaated with human emotions." << endl;
}
else if ((date >= 21 && date <= 31 && month == 3)||(date <= 19 && date >= 1 && month == 4)) {
	cout << "Your Zodiac Sign is ARIES..." 
	<< "Aries is the first sign of the Zodiac abd associated with gresh vigor and new beginnings." << endl;
}
else if ((date >= 20 && date <= 31 && month == 4)||(date <= 20 && date >= 1 && month == 5)) {
	cout << "Your Zodiac Sign is TAURUS..." 
	<< "Taurus is the second sign of the Zodiac and associated with material pleasure." << endl;
}
else if ((date >= 21 && date <= 31 && month == 5)||(date <= 20 && date >= 1 && month == 6)) {
	cout << "Your Zodiac Sign is GEMINI..." 
	<< "Gemini is the third sign of the zodiac and associated with youth and versatality." << endl;
}
else if ((date >= 21 && date <= 31 && month == 6)||(date <= 22 && date >= 1 && month == 7)) {
	cout << "Your Zodiac Sign is CANCER..." 
	<< "Cancer is the fourth sign of the Zodiac and associated with family and domesticity." << endl;
}
else if ((date >= 23 && date <= 31 && month == 7) ||(date <= 22 && date >= 1 && month == 8)) {
	cout << "Your Zodiac Sign is LEO..." 
	<< "Leo is the fifth sign of the Zodiac and associated with the keywords magnanimous, generous, hospitable, caring, and warm." << endl;
}
else if ((date >= 23 && date <= 31 && month == 8)||(date <= 22 && date >= 1 && month == 9)) {
	cout << "Your Zodiac Sign is VIRGO..." 
	<< "Virgo is the sixth sound of the Zodiac and associated with purity and service." << endl;
}
else if ((date >= 23 && date <= 31 && month==9)||(date <= 22 && date >= 1 && month == 10)) {
	cout << "Your Zodiac Sign is LIBRA..." 
	<< "Libra is the seventh sign of the Zodiac and associatied with justice." << endl;
}
else if ((date >= 23 && date <= 31 && month == 10)||(date <= 21 && date >= 1 && month == 11)) {
	cout<<"Your Zodiac Sign is SCORPIO..."
	<< "Scorpio is the eigth sign of the Zodiac and associated with intensity, passion, and power." << endl;
}
else if ((date >= 22 && date <= 31 && month==11)||(date <= 21 && date >= 1 && month == 12)) {
	cout << "Your Zodiac Sign is SAGUITTARIUS..." \
	<< "Saguittarius is the ninth sign of the Zodiac and associated with travel and exspansion." << endl;
}
else if ((date >= 22 && date <= 31 && month == 12)||(date <= 19 && date >= 1 && month == 1)) {
	cout << "Your Zodiac Sign is CAPRICORN..." 
	<< "Capricorn is the tenth sign of the Zodiac and associated with hard work and business affairs." << endl;
}
else {
	cout << "You Have entered wrong input" << endl;
}
return 0;
		}
	}
	
}

}

cout << "Enter the Month(Enter -1 to Quit):" << endl;
cin>>month;
cout << "Enter the date:" << endl;
cin >> date;
}
