#include <iostream>
using namespace std;
namespace NS1 
{
	int i;
	namespace NS2 
	{ // a nested namespace
		int j;
	}
}
using namespace NS1;
using namespace NS2;
int main()
{
	i = 19;
	
	// NS2::j = 10; Error, NS2 is not in view
	j = 10; // this is right
	cout << i << " "<< j << "\n";
	
	// use NS1
	
	
	/* Now that NS1 is in view, NS2 can be used to
	refer to j. */
	
	cout << i * j;
	cout<<endl;
	return 0;
}
