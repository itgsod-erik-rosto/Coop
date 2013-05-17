#include <cstdlib>
#include <iostream>
#include <fstream>


int ch1;
int ch2;




int li;
int tl;
bool doonce=false;

using namespace std;

string action;

string view="View";
string del="Delete";
string edit="Edit";

struct List
{
       string supplier;
       string prodloc;
       string cat;
       string country;
       int rscore;
       int nrev;
       
       bool isCreated;
       
       void editList();
       void removeList();
       void printAll();
       }list[100];
       
       void List::editList()
       {
        }
        void List::removeList()
        {
             
         }
         
       void List::printAll()
       {
            cout << "Supplier: ";
            cout << supplier;
            cout << endl;
            
            cout << "Production location: ";
            cout << prodloc;
            cout << endl;
            
            cout << "Category: ";
            cout << cat;
            cout << endl;
            
            cout << "Country: ";
            cout << country;
            cout << endl;
            
            cout << "Risk score: ";
            cout << rscore;
            cout << endl;
            
            cout << "Next revision: ";
            cout << nrev;
            cout << endl;
        }
        
        void seeList()
        {
             
             while (li<tl)
             {
                   cout << endl;
                                       cout << li << " - " << list[li].supplier;
        
                                       li++;
                                       }
                     
                     li=0;
                     cout << endl;
                     cout << endl;
                     cin >> action >> ch2;
                     
        if (action==view)
        {
        list[ch2].printAll();
        cout << endl;
        }
        
        else if (action==del)
        {
        list[ch2].removeList();
        cout << endl;
        }
        
        else if (action==edit)
        {
        list[ch2].editList();
        cout << endl;
        }
                     cout << endl;
                                        ch1=0;
         }
         void editList()
         {
              
              
              ch1=0;
          }
          void delList()
          {
               ch1=0;
           }
           
 void addList(int li)
{
  
     cout << "Supplier: ";
     cin >> list[li].supplier;
     
     cout << "Production location: ";
     cin >> list[li].prodloc;
     
     cout << "Category: ";
     cin >> list[li].cat;
     
     cout << "Country: ";
     cin >> list[li].country;
     
     cout << "Risk score: ";
     cin >> list[li].rscore;
     
     cout << "Next revision: ";
     cin >> list[li].nrev;
     
     cout << endl;
     
     cout << "List created! ";
     cout << endl;
     cout << endl;
     
     tl++;
     
     ch1=0;
 }
 
int main(int argc, char *argv[])
{
    while (ch1==0)
{
    cout << "1. Lists, 2. Add lists. ";
    cout << endl;
    cin >> ch1;
    cout << endl;

    if (ch1==2)
    {
           addList(tl);
               }
               
    if (ch1==1)
    {
               if (tl>0)
           seeList();
           else 
           {
                cout << "No saved lists. ";
                cout << endl;
                cout << endl;
                ch1=0;
            }
               }

               }
    system("PAUSE");
    return EXIT_SUCCESS;
}
