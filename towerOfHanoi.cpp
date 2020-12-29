#include <iostream>
using namespace std;

void diskPuzzle(int,char,char,char);

int main()
{
int n=0;
cout << "Enter a number of disks to play. I'll give necessary moves:";
cin >> n;
diskPuzzle(n,'A','B','C');

return 0;
}


void diskPuzzle(int n,char first,char second,char third)
{

 if(n==0)   //base case
 {
  return;
 }
 else
 {
 diskPuzzle(n-1,first,third,second);
 cout << "Move a disk from post " << first << " to post " << second << endl;
 diskPuzzle(n-1,third,second,first);

 }
}
