#include <iostream>
using namespace std;

int arr[10];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<10;i++)
    {
        if(arr[i]%3==0)
        {
            cout<<arr[i-1];
            break;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}