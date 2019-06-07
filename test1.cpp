#include<iostream>
#include<math.h>
#include<conio.h>
#include<fstream>
using namespace std;
class hash1
{
    int a;
    public:void added()
            {

            }
};

void heylo(int n)
{
	char ch;
	do
	{
	switch(n)
	{
		case 1: cout<<"Added\n";
			    break;
		case 2: cout<<"Deleted\n";
                break;
		case 3: cout<<"chumma sorted";
                break;
		default : cout<<"use brainz dumbo";
	}
	cout<<"Do u wanna continue ?"<<endl;
	cin>>ch;
	}while( ch=='Y' || ch=='y');
	cout<<"Ended";

	//exit(0);

}

int main()
{
	hash1 ob1,ob2;
	int a;
	cout<<"***** MAIN MENU FOR SONGS *****"<<endl;
	cout<<"1.ADD SONGS"<<endl;
	cout<<"2.DELETE SONGS"<<endl;
	cout<<"3.SORT SONGS"<<endl;
	cout<<"Enter option"<<endl;
	cin>>a;
	heylo(a);
	//getch();
	return 0;
       //	getch();
}
