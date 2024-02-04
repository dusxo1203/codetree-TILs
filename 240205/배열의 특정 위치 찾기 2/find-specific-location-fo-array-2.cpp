#include <iostream>
using namespace std;

int arr[10];
int sum1,sum2;
int main() {
    // 여기에 코드를 작성해주세요.
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<10;i++)
    {
        if(i%2==0)
        {
            sum1 +=arr[i];
        }
        if(i%2==1)
        {
            sum2 +=arr[i];
        }
    }
    if(sum1>=sum2)
    {
        cout<<sum1-sum2;
    }
    else
    {
        cout<<sum2-sum1;
    }
    return 0;
}