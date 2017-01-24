#include <iostream>
#include <string>
#include <deque>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <locale>
#include <Windows.h>
#include <cmath>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <sstream>
#include <fstream>
#include <math.h>
#include <stdlib.h>
#include <cstring>
#include <thread>
#include <unistd.h>

using namespace std;

int fact(int N)
{
    if (N == 0)
        return 1;
    else 
        return N * fact(N - 1); 
}


void foo (char *s, int j)
{
	ofstream f1;
	char str[255],a[255];
	int i=0;
	string s1;
		itoa(j,a,10);
		s1=a;
		s1=s1+".txt";
		i=0;
		while (s[i+1]!=NULL)
			i++;
		cout<<"POTOK1"<<endl;
		f1.open(s1, ios_base::out);
		f1<<"Текущая строка: "<<str<<"\n";
		f1<<"Количество возможных перестоновок: "<<itoa(fact(i), str, 10)<<"\n";
		f1.close();
}



void bar (char *s, int j)
{
		ofstream f1;
	char str[255],a[255];
	int i=0;
	string s1;
		itoa(j,a,10);
		s1=a;
		s1=s1+".txt";
		i=0;
		while (s[i+1]!=NULL)
			i++;
		cout<<"POTOK1"<<endl;
		f1.open(s1, ios_base::out);
		f1<<"Текущая строка: "<<str<<"\n";
		f1<<"Количество возможных перестоновок: "<<itoa(fact(i), str, 10)<<"\n";
		f1.close();
}



int main (int argc, char *argv[])
{
	FILE *in, *in2;
	ofstream f1;
	cout<<"LOADING....DONE"<<endl;
	
	in = fopen("in.txt", "r");
	in2 = fopen("in2.txt", "r");
	fclose(in2);
	f1.open(in2 , ios_base::); 
	while (!feof(in))
	{
			s = fgets(str,sizeof(str),in);
			f1 << s << "\n";
			
	}
	 

	ofstream f1;
	char str[255],a[255];
	int i=0,j=0;
	char *s,*s2;
	string s1;

	while(!feof(in))
	{
	
		s = fgets(str,sizeof(str),in);
		j++;
		thread t1 (foo, s, j);
		sleep(3);
		s2 = fgets(str,sizeof(str),in);
		thread t2 (bar, s2, j);
		j++;
		sleep(3);
	}

	fclose(in);
	
}

