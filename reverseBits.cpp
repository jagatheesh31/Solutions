#include<iostream>
#include <stdint.h>
#include<bitset>
#include<typeinfo>
using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) 
	{ 
		int NoOfBits = sizeof(n)*8 ; 
		uint32_t reverseNumber = n ;
	
		while(n)
		{
			int testnum = n&1 ;

			reverseNumber = reverseNumber | (n&1) ;
			
			n = n >> 1 ;

			NoOfBits-- ; 


			if(n)		
				reverseNumber = reverseNumber << 1 ; 
		}
		cout<<"NoOfBits : "<<NoOfBits << "\n"  ; 
		if(NoOfBits)
			reverseNumber = reverseNumber << (NoOfBits-1) ;


		printBits(reverseNumber);
    }
	
	void printBits(uint32_t number)
	{ 

		int NoOfBits = (sizeof(number)*8) ;

		/*const int testcount = (sizeof(number)*8) ;
		cout<<"Binary Representation of ["<<(int)number<<"] : "\
				<< bitset<testcount>(number)<<"\n";*/

		cout<<"Number of Bits : "<< NoOfBits << "\n" ;
		cout<<"Number to Print :0x"<< hex << number << "\n" ;
		while(NoOfBits)
		{ 
			if(number & (1<<(NoOfBits-1)))
				cout << "1" ;
			else
				cout << "0" ;
			NoOfBits-- ;
		}
		int i ;
		NoOfBits = 32 ;
		cout<<"\n";
		for(i = NoOfBits-1 ; i >=0 ; i--)
		{
			cout<<( (number>>i & 1) ) ;
		}
		cout<<"\n"; 
	}
};

int main()
{ 

	cout<<"Input Number : ";
	Solution s ;
	s.printBits(0xF0000000 ) ;
	s.reverseBits(0xF0000000);
}
