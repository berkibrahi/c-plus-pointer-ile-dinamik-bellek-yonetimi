#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	 int *ptr=new int(5);
	 *(ptr+1)=0;
	  *(ptr)=4;
	   *(ptr+2)=11;
	    *(ptr+3)=5;
	     *(ptr+4)=18;
	     for(int i=0;i<5;i++){
	     	cout<<"  "<<ptr[i];
		 }
		 delete ptr;
	 cout<<endl;
 for(int i=0;i<5;i++){
	     	cout<<"  "<<ptr[i];
		 }
	 
	return 0;
}
