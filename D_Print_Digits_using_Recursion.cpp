#include <iostream>
using namespace std;

void Recursion(int number){

   if (number<10){
    cout<<number<<" ";

    return;
   }
   Recursion(number/10);
   cout<<number%10<<" ";

}
int main() {
   
    int t;
    cin>>t;
    while (t>0)
    {
        int num;
        cin>>num;
        Recursion(num);
        cout<<endl;
        t--;
    }
    
    return 0;
}