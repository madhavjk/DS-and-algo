#include <iostream>
#include <cmath>
#include <climits>
using namespace std;


bool checkEquilibrium(int arr[], int n)
{
	int sum = 0;

	for(int i = 0; i < n; i++)
	{
		sum += arr[i];
	}

	int l_sum = 0;

	for(int i = 0; i < n; i++)
	{
		if(l_sum == sum - arr[i])
			return true;

		l_sum += arr[i];

		sum -= arr[i];
	}

	return false;
}
    


int main() {
	
      int arr[] = {3, 4, 8, -9, 20, 6}, n = 6;
      
      printf("%s",checkEquilibrium(arr, n)? "true" : "false");

    
}


====================================================================================
#include <iostream>
#include <cmath>
#include <climits>
using namespace std;


bool checkEquilibrium(int arr[], int n)
{
	for(int i  = 0; i < n; i++)
	{
		int l_sum = 0, r_sum = 0;

		for(int j = 0; j < i; j++)
			l_sum += arr[j];

		for(int j = i + 1; j < n; j++)
			r_sum += arr[j];

		if(l_sum == r_sum)
			return true;
	}

	return false;
}
    


int main() {
	
      int arr[] = {3, 4, 8, -9, 20, 6}, n = 6;
      
      printf("%s",checkEquilibrium(arr, n)? "true" : "false");

    
}


================================================================

#include <iostream>
#include <cmath>
#include <climits>
using namespace std;


int prefix_sum[10000]; 

void preSum(int arr[], int n)
{


	prefix_sum[0] = arr[0];

	for(int i = 1; i < n; i++)
	{
		prefix_sum[i] = prefix_sum[i - 1] + arr[i];
	}
	
	
}

int getSum(int prefix_sum[], int l, int r)
{
	if(l != 0)
		return prefix_sum[r] - prefix_sum[l - 1];
	else
		return prefix_sum[r];
}
    


int main() {
	
      int arr[] = {2, 8, 3, 9, 6, 5, 4}, n = 7;

      preSum(arr, n);

     cout<<getSum(prefix_sum, 1, 3)<<endl;
     
     cout<<getSum(prefix_sum, 0, 2)<<endl;
    
}