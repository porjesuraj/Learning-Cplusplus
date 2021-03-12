//============================================================================
// Name        : 2.cpp
// Author      : suraj
// Version     :
// Copyright   : cltr+c
// Description : Hello World in C++, Ansi-style
//============================================================================

/*Write a Matrix class. Allocate memory dynamically in parameterized constructor.
Also write paramterless constructor. Write Accept () and Print () functions.
Also provide Add(), Subtract(), Multiply() and Transpose() function.*/

#include <iostream>
using namespace std;
enum operation
{
	accept_record = 1,print_record,add_opt
};

class matrix
{
private:
	int row;
	int column;
	int **mat;
public:
	matrix()
   {
	this->row = 3;
	this->column = 3;
	this->mat = mat;
   }
	matrix(int r,int c)
   {   int i;
	mat = new int*[row];
	for(i=0;i<r;i++)
	{
		mat[i] = new int[column];
	}
	this->row = r;
	this->column = c;
    }
	~matrix()
	{   int i;
		for(i=0;i<row;i++)
		delete [] mat[i];
		delete [] mat;

	}

	void acceptMatrix();
	void printMatrix();
	void addMatrix(matrix m1,matrix m2);
};

    void matrix::acceptMatrix()
   {
    	int i,j;
    	for(i = 0;i<row;i++)
    	{
    		for(j=0;j<column;j++)
    		{
    			cout<<"add element to matrix";
    			cout<<"["<<i<<"]"<<"["<<j<<"] = ";
    			cin>>mat[i][j];
    		}
    	}

   }

    void matrix::printMatrix()
    {
    	    	int i,j;
    	    	for(i = 0;i<row;i++)
    	    	{
    	    	for(j=0;j<column;j++)
    	    	{
    	    //cout<<"matrix"<<"["<<i<<"]"<<"["<<j<<"] = ";
    	    	cout<<mat[i][j]<<" ";
    	    	}
    	    	}

           }
   /* void matrix::addMatrix(matrix m1,matrix m2)
    {
    	int m3[row][column];
    	cout<<"addition of two matrix \n ";
    				int i,j;
    		      for(i=0;i<row;i++)
    		      {
    		    	  for(j=0;j<column;j++)

    		    		  {
    		    		 m1.[i][j] + m2.[i][j];

    		    		  }
    		      }
    } */
    int menu_list(void)
    {
    	int choice;
    		cout<<"\n 0.exit \n 1.accept element of matrix \n 2.print element of matrix \n 3.add elements of matrix \n ";
    		cin>>choice;
    	   return choice;
    }

int main()
{   int row, column;
	cout<<"enter the no of rows";
cin>>row;
cout<<"enter no of columns";
cin>>column;
cout<<"matrix is = "<<row<<"*"<<column<<endl;

	matrix m1(row,column);
	matrix m2(row,column);
	int choice;

	while((choice = menu_list()) != 0)
	{
		switch(choice)
		{

		case accept_record:
	cout<<" enter element in  matrix \n ";
		m1.acceptMatrix();
		m2.acceptMatrix();
			 break;

		 case print_record:
			cout<<"to print element in  matrix \n  ";
		m1.printMatrix();
		m2.printMatrix();
	    break;

		case add_opt:
			 //m3.addMatrix(m1,m2);

	      break;
		//case print_result:
			//cout<<"print add result matrix 3 "<<m3.printMatrix();

	   break;
		}
	}
	return 0;
}
