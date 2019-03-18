#include <stdio.h>
#include <iostream>
#include <deque>  
#include <string>
#include <ctime>  

#include "cards.h"

using namespace std;

int main ()
{  

    cout << "Content-type: text/html\n\n" << endl;

	srand( time(0) );

   	Pack koloda;
   	koloda.shuffle();

	string strPack = koloda.getAsString();
	cout << strPack << endl;
}
