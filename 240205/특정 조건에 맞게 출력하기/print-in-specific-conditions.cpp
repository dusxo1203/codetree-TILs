#include <iostream>
using namespace std;

int arr[102];
int main() {
    // 여기에 코드를 작성해주세요.
    for(int i=0;i<102;i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
        {
            break;
        }
    }
    for(int i=0;i<102;i++)
    {
        if(arr[i]==0)
        {
            break;
        }
        else if(arr[i]%2==1)
        {
            cout<<arr[i]+3<<' ';
        }
        else
        {
            cout<<arr[i]/2<<' ';
        }
    }
    return 0;
}