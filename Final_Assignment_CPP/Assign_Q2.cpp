#include <iostream>
#include <string>
using namespace std;

class charInput
{
	public:
	    virtual void add(char c) 
	    {
	    	 data += c;
	    }

	    string getValue() 
	    {
	    	return data; 
	    }
	
	    string data;
};

class numInput : public charInput 
{
	public:
		
		void add(char c)
		{
			if (('0' <= 'c') && (c <= '9'))
         			charInput::add(c);
		}
};

int main()
{
    	char x;
    	charInput* input = new numInput();
    	//cin>>x;
    	//input->add(x);
    	input->add('1');
    	input->add('a');
    	input->add('0');
   	cout << input->getValue();
	cout<<endl;
     	return 0;
}

