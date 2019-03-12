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


  int *pointA;
  int *pointB;
  
  pointA = &a;
  pointB = &b;     //Enables use of either (&a, &b) or (pointA, pointB)
 

  cout << "What am I doing wrong ☹ \n\n";

  cout << "Before Swap: a = "<< a <<", b = " << b <<endl <<endl;

 
 
  myswap(pointA, pointB); 		// Could either use (&a, &b) or (pointA, pointB)

  cout << "After Swap: a = " << a << ", b = " << b << endl;


}
