

#include<bits/stdc++.h>
using namespace std;

  #define TOTAL_ELEMENTS sizeof(array) / sizeof(array[0])
  int array[] = {23,34,12,17,204,99,16};

  int main()
  {
      int d;

      for(d=-1;d < (TOTAL_ELEMENTS-2);d++)
          cout<<array[d+1]<<endl;

      return 0;
  }
