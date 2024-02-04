#include <iostream>
using namespace std;

int n,j;
int arr[102];
int out[102];
int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0&&arr[i]>0)
        {
            out[j]=arr[i];
            j++;
            
        }
    }
    for(int i=0;i<j;i++)
    {
        cout<<out[i]<<' ';
    }
    return 0;
}