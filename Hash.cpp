//1. hash array to check the occurence of the element or number
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]] +=1;
    }

    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<< hash[num]<<endl;
    }
    return 0;
}*/


//2. hash array to check the occurence of the element or number
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements you want to print in the array: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }

    int q;
    cout<<"enter how many queries you want: "<<endl;
    cin>>q;

    while(q--){
        int num;
        cout<<"enter the number: ";
        cin>>num;
        cout<<endl;
        if(num>=0 && num<=13){
            cout<<"the number of "<<num<<" occurence is: "<<hash[num]<<endl;
        }else{
            cout<<"false input.";
        }
    }
    return 0;
}*/