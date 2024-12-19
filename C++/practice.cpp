// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int trows;
    cin>>trows;
    
    for(int rowno = 1; rowno <=trows; rowno++){
        for(int spc=1; spc<=trows-rowno; spc++){
            cout<<' ';
        }
            int no = rowno;
        for(int spc=1; spc<=rowno; spc++){
            cout<<no++;
            // no++;
        }
        no--;
        for(int spc=1; spc<=rowno-1; spc++){
            cout<<--no;
        }
        cout<<endl;
    }
    // for(int rowno = 1; rowno <=(trows-1)/2; rowno++){
    //     for(int spc=1; spc<=rowno; spc++){
    //         cout<<' ';
    //     }
    //     for(int spc=1; spc<=trows-2*rowno; spc++){
    //         cout<<'*';
    //     }
    //     cout<<endl;
    // }


    return 0;
}