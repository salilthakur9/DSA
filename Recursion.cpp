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



#include<iostream>
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

}