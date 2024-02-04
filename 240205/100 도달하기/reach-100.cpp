#include <iostream>
using namespace std;

int n;
int arr[102];

int main() {

    cin>>n;
    arr[0]=1;
    arr[1] = n;
    for(int i=2;i<102;i++)
    {
        arr[i] = arr[i-2]+arr[i-1];
        if(arr[i]>100)
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
        cout<<arr[i]<<' ';
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}