
//=================================================================================
// Name         : DS Assignment#2 
// Author       : Zein Mukhanov
// Version      : 1.0
// Date Created : 05-Nov-2022
// Date Modified: 
// Description  : Starter Code for Contact Management System using BST Tree in C++
// Copyright © 2022 Khalid Mengal and Mai Oudah. All rights reserved.
#include<sstream>
//=================================================================================
#include<iostream>
#include<cstdlib>
#include<fstream>
#include "myvector.h"
#include "contact.h"
#include "contactbst.h"

//==========================================================
void listCommands()
{
	cout<<"----------------------------------"<<endl;
	cout<<"import <path>      :Import contacts from a CSV file"<<endl
		<<"export <path>      :Export contacts to a CSV file"<<endl
		<<"add                :Add a new contact"<<endl
		<<"update <key>       :Update a contact's details"<<endl
		<<"remove <key>       :Delete a contact"<<endl
		<<"searchFor <key>    :Search for a contact"<<endl
		<<"markFav <key>      :Mark as favourite"<<endl
		<<"unmarkFav <key>    :Unmark as favourite"<<endl
		<<"printASC           :Print contacts in ascending order"<<endl
		<<"printDES           :Print contacts in descending order"<<endl
		<<"printFav           :Print all favourite contacts"<<endl
		<<"help               :Display the available commands"<<endl
		<<"exit               :Exit the program"<<endl;
}
//==========================================================

// to be completed with ALL the necessary method definitions

//==========================================================
int main(void)
{
    ContactBST myContactBST;
    
      listCommands();
      string user_input;
      string command;
      string key;

      while (true)
      {
          listCommands();
          cout << ">";
          
          // declaring the variables of the type string
          string user_input, command, parameter1, parameter2;
          
          // reading the user input from the console
          getline(cin, user_input);

          // parsing the user input into command and parameter(s)
          stringstream sstr(user_input);
          getline(sstr, command, ' ');
          getline(sstr, parameter1, ' ');
          getline(sstr, parameter2, ' ');
            
          // getting the root of the tree
          Node *root = myContactBST.getRoot();
          
          //
          if (command == "import" || command == "i")
          {
              int numberContact = myContactBST.importCSV(root, parameter1);
              if(numberContact != -1) cout << numberContact << endl;
          }
          else if (command == "export" || command == "e")
          {
              int numberContact = myContactBST.exportCSV(root, parameter1);
              if(numberContact != -1) cout << numberContact << endl;
          }
          else if(command  == "add" || command == "a")
          {
              string fname, lname, email, phone, city, country, fav;
             
              //reading the contact info from the user input
              cout << "Please enter the details of the contact:" << endl;
              cout << "First Name: ";
              cin >> fname;
              cout << "Last Name: ";
              cin >> lname;
              cout << "Email: ";
              cin >> email;
              cout << "Phone#: ";
              cin >> phone;
              cout << "City: ";
              cin >> city;
              cout << "Country: ";
              cin >> country;
              cout << "Do you want to add the contact in your favourites (y/n)?: ";
              cin >> fav;
              
              Contact newContact = Contact(fname, lname, email, phone, city, country, fav == "y");
              myContactBST.add(root, key, newContact);
          }
          
          else if (command == "edit" || command == "e")
          {
              
          }
          
            myBST.printTree();
          else if (command == "height")
            cout << "Height = " << myBST.height(root) << endl;
          else if (command == "min")
          {
            Node *min = myBST.findMin(root);
            cout << "Min. key = "
                 << ((min != nullptr) ? to_string(min->getKey())
                                      : " does not exist")
                 << endl;
          }
          else if (command == "max")
          {
            Node *max = myBST.findMax(root);
            cout << "Max. key = "
                 << ((max != nullptr) ? to_string(max->getKey())
                           
    
	return 0;
}
