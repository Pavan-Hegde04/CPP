#include <iostream>
using namespace std;
 
template <class T>
class Test
{
	public:
	   Test()
	   {
	       // Initialization of data members
	       cout << "General template object \n";
	   }
	   // Other methods of Test
};
 
template <>
class Test <int>
{
	public:
	   Test()
	   {
	       // Initialization of data member
	       cout << "Specialized template object\n";
	   }
};
 
int main()
{
    Test<int> a;
    Test<char> b;
    Test<float> c;
    return 0;
}
