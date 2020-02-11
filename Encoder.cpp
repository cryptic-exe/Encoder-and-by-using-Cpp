#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <fstream>

using namespace std;
void decode(int key[],int encoded[],int size);

using namespace std;
int main() {
  int limit,val,keycount=1001;
  string str;
  char str1[30];
  ofstream outfile;
  outfile.open("afile.dat",ios::app);

  cout<<"Enter the string : ";
  getline(cin,str);
  limit = str.length();

  int key[limit],encoded[limit];
   srand(time(NULL));
   for(int i=0; i<limit; i++)
   key[i]=rand() % 10;
   cout<<"Encoded:\n";
   for(int i=0;i<limit;i++){
     encoded[i]=(key[i]+str[i]);
     cout<<char(encoded[i]);
   }
   //inputting data into file
   outfile <<"key"<<keycount<<" = ";
   for(int i=0;i<limit;i++)
   outfile<<key[i]<<" ";
   outfile<<endl;
   outfile.close();


   // ifstream infile;
   // infile.open("key.txt");
   // infile>>key;
   // cout<<key<<endl;
   // decode(key,encoded,limit);

   return 0;
}

void decode (int key[],int encoded[], int size){
  int decoded[size];
  cout<<"\nDecoded"<<endl;
  for(int i=0;i<size;i++){
    decoded[i]=encoded[i]-key[i];
    cout<<char(decoded[i]);
   }
  }
