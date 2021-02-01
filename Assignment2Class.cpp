/*
 * Assignment2Class.cpp
 *
 *  Created on: Jan 27, 2021
 *      Author: Joe
 */
#include "Assignment2Class"


void Assignment2::SetArrayPosition(int &iPos, int &iVal)
{

	iArray2[iPos] = iVal;


}

int Assignment2::GetArrayPosition(int &iPos)
{

	return iArray2[iPos];

}

int Assignment2::GetArray1Position(int iPos)
{

	return iArray[iPos];

}

void Assignment2::SetArray1Position(int &iPos, int &iVal)
{

	iArray[iPos] = iVal;

}

Assignment2::Assignment2()
{
    int iPos = 1;
    int iVal = 6;
	SetArray1Position(iPos, iVal);

}

Assignment2::~Assignment2()
{


}

