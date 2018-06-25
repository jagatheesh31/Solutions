#include<iostream>
#include<vector> 

using namespace std;

class Solution 
{
	public:
		int missingNumber(vector<int>& nums) 
		{
		    cout <<"size : " << nums.size() << "\n";
			int size = nums.size() ;
			size++ ;
			int sum = (size * (size+1) ) /2 ;
			
			cout <<"sum : " << sum << "\n";
			int i, actualSum = 0 ;
			for(i = 0 ; i < nums.size() ; i++)
			{
				actualSum = actualSum + nums[i] ;
			}
				
			cout <<"actualSum : " << actualSum << "\n";
			
			return sum - actualSum ;
		}
};

 
int main()
{
    vector<int> vect;
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(4);
    vect.push_back(5);
    vect.push_back(8);
    vect.push_back(6);
    vect.push_back(9);
    vect.push_back(10);
    vect.push_back(11);
  	Solution s ;
    
	int missing = s.missingNumber(vect);

	cout << "Missing :  "<< missing << " \n" ;
  
    // vect remains unchanged after function
    // call
    for (int i=0; i<vect.size(); i++)
       cout << vect[i] << " ";
  
	cout << "\n\n ";
    return 0;
}

