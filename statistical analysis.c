a/* Statistical Analysis
CIS 170 Section 01
Justin Newman*/

#include<stdio.h>
#define MAX 10
void getData(int []);
void sortData(int []);

//main function
int main()
	{
		int nums[MAX];
		float median, mode, average;
		int i=0, range;
		
		getData(nums);
		
		for(i=0;i<9;++i)
			{
				printf("\n%d", nums[i]);
				
			}
		
		sortData(nums);
		
		printf("\n\n");
		
		for(i=0;i<9;++i)
			{
				printf("\n%d", nums[i]);
				
			}

		

		
		getch();
		return 0;
	}
	
//gets data from user and stores it in array "nums"
void getData(int nums[MAX])
	{
		int i=0;
		for(i=0;i<9;++i)
			{
				printf("enter a number");
				scanf("%d",&nums[i]);
			}
	}
	
//sorts data smallest to largest
void sortData(int nums[MAX])
	{
		int temp;
		int i, j;
	
		for(i=0;i<9;++i)
			{
				for(j=i+1;j<9;++j)
					{
						if(nums[i]>nums[j])
							{
								temp=nums[i];
								nums[i]=nums[j];
								nums[j]=temp;
							}
					}
			}
	}

