#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
void bubbleSort(int arr[], int n);
int main()
{
    fstream f;
    string str[20],str1;
    int num[20],stotal;
    f.open("sup.txt") ;
   if(!f)
   {
    cout<<"Unable to open\n";
   // return 0;
   }
   else
   {    f.seekg(0);
       //cout<<"Opened\n";
       while(!f.eof())
       {
            getline(f,str1);
            stotal ++;
            for(int i=0;i<stotal;i++)
            {
           f>>str[i]>>num[i];
           cout<<str[i]<<" "<<num[i]<<endl;
       }}

   }
   f.close();}
void bubbleSort(int arr[], int n)
 {

      bool swapped = true;

      int j = 0;

      int tmp;

      while (swapped) {

            swapped = false;

            j++;

            for (int i = 0; i < n - j; i++) {

                  if (arr[i] > arr[i + 1]) {

                        tmp = arr[i];

                        arr[i] = arr[i + 1];

                        arr[i + 1] = tmp;

                        swapped = true;

                  }

            }

      }

}




