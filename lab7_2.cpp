#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
 
    string name;
    getline(cin, name); 
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";

    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    string studentID;
    
    getline(cin, studentID);
    cout << "Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.\n";

    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    
    string movie;
    getline(cin, movie); 
    cout << "Fahsai: So....which day are you free to go with me?\n";
    
    string day;
    getline(cin, day); 
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you.\n";
    
  
    cout << "Fahsai: May the Force be with you krub\n";
    cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/\n";
    
    return 0;
}
