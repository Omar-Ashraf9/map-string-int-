#include <iostream>
#include <map>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;
void print(map<string,int> temp)
{
    map<string, int>::iterator it;
    cout << "The words in map \t the number of occurrences: " << endl;

    for (it = temp.begin(); it != temp.end(); it++)
    {
        cout << it->first << "\t\t\t\t\t" << it->second << endl;
    }
}
void add_to_map(map<string,int> &my_map)
{
    string input;

    cout << "Enter the words that you would like to save in map , write ""done"" if you finish" << endl;

/// Enter the words and put it in the map.

    while (cin >> input){
        if(input == "done"){
            break;
        }
        ++my_map[input];
    }
}
void delete_key_start_with_a(map<string,int> my_map)
{
    map<string, int>::iterator it;
    map<string,int> temp;

    for (it = my_map.begin(); it != my_map.end(); it++)
    {
        if((it->first.at(0) == 'a') || (it->first.at(0) == 'A'))
        {
            continue;
        }
        temp.insert ( pair<string,int>(it->first,it->second));

    }
    print(temp);
}
int main()
{

    char choice;
    int input;
    map<string,int> my_map;
    cout << "\n\t\t what do want to do?" << endl;
    while (true){
    cout << endl;
    cout<<"\n\t\t*********************************   Menu   ************************************"<<endl;
    cout<<"\t\t*                                                                               *";
    cout<<"\n\t\t*          1-To add words                                                       *";
    cout<<"\n\t\t*          2-to delete words start with letter (A)                              *";
    cout<<"\n\t\t*          3-to print all words in map                                          *";
    cout<<"\n\t\t*          4- to terminate the program                                          *";
    cout<<"\n";
    cin >> choice;
    switch(choice)
    {
    case '1':{
        add_to_map(my_map);
       }break;
    case '2':{
        delete_key_start_with_a(my_map);
        }break;
    case '3':{
        print(my_map);
        }break;
    case '4':{
        cout << "Thanks for using the program :)" << endl;
        exit(0);
        }break;
    default:{
        cout << "Error! , invalid input :(" << endl;
        }break;
    }
    }

    return 0;
}
