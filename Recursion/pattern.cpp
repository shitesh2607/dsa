// * * * * *
// * * * * 
// * * *  
// * *  
// * 
//  

#include <iostream>
using namespace std;

void pattern(int row, int col){
    if(row==0){
        return;
    }
    
    if(col<row){
        cout<<"* ";
        pattern(row, col+1);
    }else{
        cout<<endl;
        pattern(row-1, 0);
    }
}

int main()
{
    pattern(6, 0);
    return 0;
}
