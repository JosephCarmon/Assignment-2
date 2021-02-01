/*
 * Assignment2.cpp
 *
 *  Created on: Jan 27, 2021
 *      Author: Joe
 */
#include <iostream>
#include "Assignment2Class"



using namespace std;

int iPosition;
int iArray[] = { 1,2,3,4,5};

int iArray2[5];


void SetPosition(int &);

Assignment2 Asn2;

int main(int argc, char* argv[])
{

	cout << endl << argc <<endl;
	cout << endl << argv[0];
	cout << endl << argv[1];

	iPosition = 2;
	cout << endl << &iPosition;
	cout << endl << iPosition;
	SetPosition(iPosition);
	cout << endl << iPosition;

	for( int iVal =0; iVal <= 4; iVal++  )
	{
		cout << endl << iArray[iVal];
        cout <<endl;

        Asn2.SetArrayPosition(iVal, iVal);


	}

	cout << "Array 2";

	for( int iVal =0; iVal <= 4; iVal++  )
	{

		cout << endl << Asn2.GetArrayPosition(iVal);



	}

	cout << "Array 1 Position 1";
	cout << endl << Asn2.GetArray1Position(1);


}

void SetPosition(int &iPos)
{

	cout << endl << &iPos;
	cout << endl << iPos;
	 iPos = 4;


}


