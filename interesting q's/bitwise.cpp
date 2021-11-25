
#include <iostream>
#include <bitset>
using namespace std;

void towerOfHanoi(int n, char from, char to, char mid){
    if(n==1){cout<<from<<to<<"\n";return;}
    towerOfHanoi(n-1, from, mid, to);
    cout<<from<<to<<"\n";
    towerOfHanoi(n-1, mid, to, from);
}
int reduce_to_2pow(unsigned int n){
    if(!(n&(n-1)))return (int)n;
    reduce_to_2pow(n&n-1);
}
int joshephus(int n){
    int p = reduce_to_2pow(n);
    cout<<p<<"   ";
    int l = n-p;
    return 2*l+1;
}
int joshephusBIN( unsigned int n){
    cout<<bitset<8>(n)<<"rr";
    n = n^reduce_to_2pow(n);
    cout<<bitset<8>(n)<<"rr";
    n = n<<1;
    cout<<bitset<8>(n)<<"rr";
    n = n|1;
    cout<<bitset<8>(n)<<"rr";
    return (int)n;
}


int main()
{
    // int n = 3; // Number of disks
    // towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods
    // cout<<joshephusBIN(3)<<"\n";
    // cout<<joshephusBIN(4)<<"\n";
    // cout<<joshephusBIN(5)<<"\n";
    // cout<<joshephusBIN(6)<<"\n";
    // cout<<joshephusBIN(7)<<"\n";
    // cout<<joshephusBIN(41)<<"\n";
    
    
    return 0;
}
