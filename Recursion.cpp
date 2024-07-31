//1. print name as number of times we want using recursion.
/*#include<iostream>
using namespace std;
void pname(int i, int n){
    if(i>n)return;
    cout<<"salil"<<endl;
    pname(i+1, n);
}
int main(){
    int i=1,n;
    cin>>n;
    pname(i, n);
    return 0;
}*/


//2. print linearly from 1 to n.
/*#include<iostream>
using namespace std;
void pnum(int i, int n){
    if(i>n)return;
    cout<<i<<endl;
    pnum(i+1, n);
}
int main(){
    int i=1,n;
    cin>>n;
    pnum(i, n);
    return 0;
}*/


//3. print linearly from n to 1.
/*#include<iostream>
using namespace std;
void pnum(int i){
    if(i<1)return;
    cout<<i<<endl;
    pnum(i-1);
}
int main(){
    int n;
    cin>>n;
    pnum(n);
    return 0;
}*/


//4. print 1 to n linearly but using backtrack.
/*#include<iostream>
using namespace std;
void pnum(int i){
    if(i<1)return;
    pnum(i-1);
    cout<<i<<endl;
}
int main(){
    int n;
    cin>>n;
    pnum(n);
    return 0;
}*/


//5. print n to 1 linearly but using backtrack.
/*#include<iostream>
using namespace std;
void pnum(int i){
    if(i<1)return;
    cout<<i<<endl;
    pnum(i-1);
}
int main(){
    int n;cin>>n;
    pnum(n);return 0;
}*/


//6. print sum of n numbers using parameterized recursion.
/*#include<iostream>
using namespace std;
void func(int i,int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    func(i-1,sum+i);
}
int main(){
    int i;cin>>i;
    func(i,0);
    return 0;
}*/


//7. functional recursion sum of N numbers.
/*#include<iostream>
using namespace std;
int func(int n){
    if(n==0)return 0;
    return n+func(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<func(n);
}*/


//8. functional recursion factorial of input number.
/*#include<iostream>
using namespace std;
int func(int n){
    if(n==1)return 1;
    return n*func(n-1);
}
int main(){
    int n;cin>>n;
    cout<<func(n);
    return 0;
}*/


//9. using recursion reverse an array.
/*#include<iostream>
using namespace std;
void func(int arr[],int l,int r){
    if(l>=r)return;
    swap(arr[l],arr[r]);
    func(arr,l+1,r-1);
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    func(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/


//10.
/*#include<iostream>
using namespace std;
void func(int arr[], int l, int r){
    if(l>=r)return;
    swap(arr[l],arr[r]);
    func(arr,l+1,r-1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    func(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/


//11. check palandrome through functional recursion.
/*#include<iostream>
using namespace std;
bool func(int i, string& s){
    if(i>= s.size())return true;
    if(s[i] != s[s.size()-i-1])return false;
    func(i+1,s);
}
int main(){
    string s="madam";
    cout<<func(0, s);
    return 0;
}*/