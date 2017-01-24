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


void foo (FILE *in)
{
	ofstream f1;
	char str[255],a[255];
	int i=0,j=0;
	char *s;
	string s1;
	while(!feof(in))
	{
	
		s = fgets (str,sizeof(str),in);
		j++;
		itoa(j,a,10);
		s1=a;
		s1=s1+".txt";
		i=0;
		while (s[i+1]!=NULL)
			i++;
		
		cout<<"POTOK1"<<endl;
		f1.open(s1, ios_base::out);
		f1<<str<<"\n";
		f1<<itoa(fact(i), str, 10)<<"\n";
		f1.close();
	}
}



void bar (FILE *in2)
{
		ofstream f1;
	char str[255],a[255];
	int i=0,j=0;
	char *s;
	string s1;
	while(!feof(in2))
	{
	
		s = fgets (str,sizeof(str),in2);
		j++;
		itoa(j,a,10);
		s1=a;
		s1=s1+".txt";
		i=0;
		while (s[i+1]!=NULL)
			i++;
		
		cout<<"POTOK2"<<endl;
		f1.open(s1, ios_base::out);
		f1<<str<<"\n";
		f1<<itoa(fact(i), str, 10)<<"\n";
		f1.close();
	}
}



int main (int argc, char *argv[])
{
	FILE *in, *in2;
	ofstream f1;
	char str[255],a[255];
	int i=0,j=0;
	string s1;
	char *s,*s2;
	
	in = fopen("in.txt", "r");
	in2 = fopen("in2.txt", "r");

	 
	cout<<"LOADING....DONE"<<endl;
	
		thread t1 (foo, in);
		thread t2 (bar, in2);
		t1.join();
		t2.join();
	

	fclose(in);
	fclose(in2);
	
}

