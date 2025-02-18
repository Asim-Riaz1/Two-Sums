#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3, num4;
    cout<<"Enter Nums"<<endl;
    cin>>num1>>num2>>num3>>num4;
    int nums[] = {num1, num2, num3, num4};
    int target;
    cout<<"Enter target: ";
    cin>>target;
    int size = sizeof(nums) / sizeof(nums[0]);
    int result = 0;
    bool found = false;
        for(int i = 0; i < size - 1; i++)
        {
            result = nums[i] + nums[i+1];
            if (result == target)
            {
                cout<<"Pairs Found: ["<<nums[i]<<", "<<nums[i+1]<<"]";
                found = true;
                break;
            }
            
        }
        
        
    

}