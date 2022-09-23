#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Give n ";
    cin>>n;
    int prod=1;
    int sum=0;
    while(n!=0){
        int a=n%10;
        prod=prod*a;
        sum=sum+a;

        n=n/10;
    }
    cout<<"product is "<<prod<<endl;
    cout<<"sum is "<<sum<<endl;
    int Difference=prod-sum;
    cout<< "Difference is "<< Difference<<endl;
}
