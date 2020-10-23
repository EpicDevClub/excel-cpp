#include<iostream>
using namespace std;
const int size = 10; 
class bubblesort  
{
	private:
		int numbers[size]; 
		
	public:
		
	 void setnumbers() 
	 	{
	 		cout<<"Enter Numbers: \n";
	 		
	 		for(int i=0; i<size; i++)
	 			{
	 				cin>>numbers[i];
				}
	 	}
	 	
	 void sortac() 
	 	{
	 		for(int x = 1; x <size; x++) 
			 	 			{
	 					for(int y=0; y<(size-x); y++) 
	 						{
	 							if(numbers[y]>numbers[y+1]) 
	 								{
	 									int z;   
										z = numbers[y];
										numbers[y] = numbers[y+1];
										numbers[y+1] = z;	
									}
							}
				}
			
			cout<<"Acsending order: ";	

				for(int p=0; p<size; p++) 
					{
						cout<<numbers[p]<<"   ";
					}
		}
		
	void sortdec()
	 	{
	 		for(int x = 1; x <size; x++)
	 			{
	 					for(int y=0; y<(size-x); y++)
	 						{
	 							if(numbers[y]<numbers[y+1]) 
	 								{
	 									int z;
										z = numbers[y];
										numbers[y] = numbers[y+1];
										numbers[y+1] = z;	
									}
							}
				}
			
			cout<<"\nDescending order : ";	

				for(int p=0; p<size; p++)
					{
						cout<<numbers[p]<<"   ";
					}
		}

};
int main()
{
	bubblesort b1;
	
	b1.setnumbers();
	b1.sortac();
	b1.sortdec();
}
