#include <iostream>
using namespace std;
int main(int argc, const char * argv[])
{
int date = 0;
int month = 0;


while ((month != -1) || (date != -1)){
	cout << "Enter Month (1 - 12)\n(-1 to quit)" << endl;
	cout<<"Enter the Month:"<<endl;
	cin>>month;
	cout<<"Enter the date:"<<endl;
	cin>>date;
if ((date >= 20 && date <= 31 && month==1)||(date <= 18 && date >= 1 && month == 2)){
	cout<<"Your Zodiac Sign is AQUARIUS.."<<endl;
}
else if ((date >= 19 && date <= 31 && month == 2)||(date <= 20 && date >= 1 && month == 3)) {
	cout<<"Your Zodiac Sign is PISCES.."<<endl;
}
else if ((date >= 21 && date <= 31 && month == 3)||(date <= 19 && date >= 1 && month == 4)) {
	cout<<"Your Zodiac Sign is ARIES.."<<endl;
}
else if ((date >= 20 && date <= 31 && month == 4)||(date <= 20 && date >= 1 && month == 5)) {
	cout<<"Your Zodiac Sign is TAURUS.."<<endl;
}
else if ((date >= 21 && date <= 31 && month == 5)||(date <= 20 && date >= 1 && month == 6)) {
	cout<<"Your Zodiac Sign is GEMINI.."<<endl;
}
else if ((date >= 21 && date <= 31 && month == 6)||(date <= 22 && date >= 1 && month == 7)) {
	cout<<"Your Zodiac Sign is CANCER.."<<endl;
}
else if ((date >= 23 && date <= 31 && month == 7) ||(date <= 22 && date >= 1 && month == 8)) {
	cout<<"Your Zodiac Sign is LEO.."<<endl;
}
else if ((date >= 23 && date <= 31 && month == 8)||(date <= 22 && date >= 1 && month == 9)) {
	cout<<"Your Zodiac Sign is VIRGO.."<<endl;
}
else if ((date >= 23 && date <= 31 && month==9)||(date <= 22 && date >= 1 && month == 10)) {
cout<<"Your Zodiac Sign is LIBRA.."<<endl;
}
else if ((date >= 23 && date <= 31 && month == 10)||(date <= 21 && date >= 1 && month == 11)) {
cout<<"Your Zodiac Sign is SCORPIO.."<<endl;
}
else if ((date >= 22 && date <= 31 && month==11)||(date <= 21 && date >= 1 && month == 12)) {
	cout<<"Your Zodiac Sign is SAGUITTARIUS.."<<endl;
}
else if ((date >= 22 && date <= 31 && month == 12)||(date <= 19 && date >= 1 && month == 1)) {
	cout<<"Your Zodiac Sign is CAPRICORN.."<<endl;
}
else {
	cout<<"You Have entered wrong input"<<endl;
}
return 0;
}
cout<<"Enter the Month(Enter -1 to Quit):"<<endl;
cin>>month;
cout<<"Enter the date:"<<endl;
cin>>date;
}