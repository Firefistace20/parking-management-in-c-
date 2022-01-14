//PARKING MAINTAIN MINI PROJECT
#include <iostream>

#include <conio.h>

using namespace std;
int Menu ();
void bus ();
void cycle ();
void riksha ();
void DELETE ();
void showDetail ();
int nor = 0, nob = 0, noc = 0, amount = 0, count = 0;
int
main ()
{
  while (1)
    {
      switch (Menu ())
	{
	case 1:
	  bus ();
	  break;
	case 2:
	  cycle ();
	  break;
	case 3:
	  riksha ();
	  break;
	case 4:
	  showDetail ();
	  break;
	case 5:
	  DELETE ();
	  break;
	case 6:
	  exit (0);
	default:
	  cout << "\n INVALID CHOICE: " << endl;
	}

    }
  return 0;
}

int
Menu ()
{
  int ch;
  cout << "\n1-> ENTER BUS    : " << endl;
  cout << "\n2 ENTER CYCLE  : " << endl;
  cout << "\n3 ENTER RIKSHA : " << endl;
  cout << "\n4 ENTER STATUS : " << endl;
  cout << "\n5 DELETE DATA  : " << endl;
  cout << "\n6 exit  : " << endl;
  cout << "ENTER THE CHOICE : " << endl;
  cin >> ch;
  return (ch);
}

void
bus ()
{
  cout << "ENTRY SUCCESSFULL " << endl;
  nob++;
  amount = amount + 100;
  count++;
}

void
riksha ()
{
  cout << "ENTRY SUCCESSFULL " << endl;
  nor++;
  amount = amount + 50;
  count++;
}

void
cycle ()
{
  cout << "ENTRY SUCCESSFULL " << endl;
  noc++;
  amount = amount + 20;
  count++;
}

void
DELETE ()
{
  nob = 0;
  noc = 0;
  nor = 0;
  amount = 0;
  count = 0;
}

void
showDetail ()
{
  cout << "\n NUMBER OF BUSES   : " << nob << endl;
  cout << "\n NUMBER OF CYCLE   : " << noc << endl;
  cout << "\n NUMBER OF RIKSHA  : " << nor << endl;
  cout << "\n NUMBER OF VEHICLE : " << nob + noc + nor << endl;
  cout << "\n TOTAL GAIN AMOUNT : " << amount << endl;
}
