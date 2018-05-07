/*
Jacob Palmer
5/3/2018
*/

#include <iostream>
#include <cstring>

using namespace std;
int main(int argc, char *argv[]) {
	int year[12][5] = {{2008, 1996, 1984, 1972, 1960},
	{2009, 1997, 1985, 1973, 1961},
	{2010, 1998, 1986, 1974, 1962},
	{2011, 1999, 1987, 1975, 1963},
	{2012, 2000, 1988, 1976, 1964},
	{2013, 2001, 1989, 1977, 1965},
	{2014, 2002, 1990, 1978, 1966},
	{2015, 2003, 1991, 1979, 1967},
	{2016, 2004, 1992, 1980, 1968},
	{2017, 2005, 1993, 1981, 1969},
	{2018, 2006, 1994, 1982, 1970},
	{2019, 2007, 1995, 1983, 1971}};
	int yearBorn = 0;
	int yearZodiac = 0;
	string rat = {People who are born in the year of the Rat are intelligent, charming, quick-witted, practical, ambitious, and good at economizing as well as social activities. The weaknesses are that the Rats are likely to be timid, stubborn, wordy, greedy, devious, too eager to get power and love to gossip.};
	string ox = 1;
	string tiger = 2;
	string rabbit = 3;
	string dragon = 4;
	string snake = 5;
	string horse = 6;
	string goat = 7;
	string monkey = 8;
	string rooster = 9;
	string dog = 10;
	string pig = 11;
	string zodiac = 0;	
	
	if (zodiac = 1){
		for (int r = 0; r < 12; r ++){
			for (int c = 0; c < 5; c ++){
				if (int [r][c] = yearBorn){
					yearZodiac = int r;
				
					if (yearZodiac == 0){
						cout << rat << endl;
					}
					else if (yearZodiac == 1){
						cout << ox << endl;
					}
					else if (yearZodiac == 2){
						cout << tiger << endl;
					}
					else if (yearZodiac == 3){
						cout << rabbit << endl;
					}
					else if (yearZodiac == 4){
						cout << dragon << endl;
					}
					else if (yearZodiac == 5){
						cout << snake << endl;
					}
					else if (yearZodiac == 6){
						cout << horse << endl;
					}
					else if (yearZodiac == 7){
						cout << goat << endl;
					}
					else if (yearZodiac == 8){
					cout << monkey << endl;
					}
					else if (yearZodiac == 9){
						cout << rooster << endl;
					}
					else if (yearZodiac == 10){
						cout << dog << endl:
					}
					else if (yearZodiac == 11){
						cout << pig << endl;
					}			
								
				}	
			}
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
