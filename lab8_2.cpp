#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
    
    string code;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": ";
    cin >> code;
    cin.ignore();
    
    string str1(1,code[0]);
    string str2(1,code[1]);
    string s = str1 + str2;
    int c = stoi(s);
    
    cout << "Fahsai: I think you may be GEAR " << c-12 << ". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\nFahsai: What movie do you want to watch?\n";
    string movie;
    cout << name << ": ";
    getline(cin,movie);

    string day;
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": ";
    getline(cin,day);

    string speech;
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you.\n";
    cout << name << ": ";
    getline(cin,speech);

    cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/";

    return 0;
}



