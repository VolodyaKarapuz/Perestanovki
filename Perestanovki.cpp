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

using namespace std;

long double fact(int N)
{
    if (N == 0)
        return 1;
    else 
        return N * fact(N - 1); 
}

int main (int argc, char *argv[])
{
	FILE* out;
	FILE* in;
	FILE* in2;

	cout<<"LOADING....DONE"<<endl;
	
	in = fopen("in.txt", "r");
	out = fopen("out.txt", "w");

	ifstream f;
	ofstream f1;
	char* s;
	char str[255],a[255];
	int i=0,j=0;
	string s1;
	stringstream ss;
	


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
		
		cout<<"POTOK2"<<endl;
		f1.open(s1, ios_base::out);
		f1<<str<<"\n";
		f1<<itoa(fact(i), str, 10)<<"\n";
		f1.close();
	}

	fclose(in);
	
}

