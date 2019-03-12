#include <iostream>

using namespace std;

void myswap(int *ptr1, int *ptr2)
{
  cout <<" " << *ptr1 << " " << *ptr2 <<endl;

  auto temp = *ptr1;

  cout  << temp << " " << *ptr1 << " " << *ptr2 << endl;

  *ptr1 = *ptr2;

  cout  << temp << " " << *ptr1 << " " << *ptr2 << endl;

  *ptr2 = temp;

  cout  << temp << " " << *ptr1 << " " << *ptr2 << endl <<endl;
}


int main()
{
  int a = 25, b = 11;    

  cout << "What am I doing wrong ☹ \n\n";

  cout << "Before Swap: a = "<< a <<", b = " << b <<endl <<endl;

				//swap(a,b); //why does theirs work????   
 
  myswap(&a, &b); 		// but mine doesn't ?!?!?!?!!!???

  cout << "After Swap: a = " << a << ", b = " << b << endl;


}
