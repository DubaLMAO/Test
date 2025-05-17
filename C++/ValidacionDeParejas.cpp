#include <iostream>
using namespace std;
int main()
{
    int n1, n2, cont=0;
    
    for(;;){
        cin>>n1;
        cin>>n2;
        
        if(n1%2==0 && n2%2!=0 || n1%2!=0 && n2%2==0){
            break;
        }if(n1>1000 && n2>1000 || n1==n2){
                break;
            }else{
                cont++;
            }
    }
    
    for(int i=0; i<cont; i++){
        cout<<"TODAVIA NO"<<endl;
    }
    cout<<"YA"<<endl;
    
    
    return 0;
}