//A c program for a library system :
/*     AUTHOR: AURA
      REG NO : BSE-05-0180/2024
      GROUP  : BSE GROUP 3
YEAR OF STUDY: Y1 S2
*/
#include<iostream>
using namespace std;

float bookID;
int duedate, returndate, daysoverdue;

int main(){

//Prompts for the user to enter book details :
   cout<<"Enter book ID : ";
   cin>>bookID;

   cout<<"Enter the Due date : ";
   cin>>duedate;

   if(duedate<=0 || duedate>=32){
   cout<<"Invalid date! Enter the correct date"<<endl; //Conditions if wrong date is entered :
   return 1;
   }

   cout<<"Enter return date : ";
   cin>>returndate;
//Formula of determining days overdue :
   daysoverdue = returndate-duedate;

//Statements to match conditions :
   if(daysoverdue>0 && daysoverdue<=7){
   cout<<"You have to pay 20 shillings"<<endl;
   }else if(daysoverdue>=8 && daysoverdue<=14){
   cout<<"You have to pay 50 shillings"<<endl;
   }else if(daysoverdue>=15){
   cout<<"You have to pay 100 shillings"<<endl;
   }else{
   cout<<"Error! please try again"<<endl;
   }
   return 0;
}
