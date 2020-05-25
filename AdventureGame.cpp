#include <iostream>
using namespace std;

class Player
{
    private:
    string PlayerName;
    string PlayerClass;
    int    PlayerStrength;
    int    PlayerIntelligence;
    int    PlayerCharisma;
    int    PlayerEndurance;
    int    PlayerAgility;
    int    PlayerLuck;

    public:
    //construct player stats and class
    Player(string PN, string PC, int PS, int PE, int PI, int PC, int PA, int PL) :PlayerName(PN), PlayerClass(PC), PlayerStrength(PS), PlayerIntelligence(PI), PlayerCharisma(PC), PlayerEndurance(PE), PlayerAgility(PA), PlayerLuck(PL)
    {
    }

    void DisplayPlayerStats()
    {
        //All Stats Will Range From 1-10
        cout << "Name: " << PlayerName << endl;
        cout << "Class: " << PlayerClass << endl;
        cout << "Strength: " << PlayerStrength << endl;
        cout << "Intelligence: " << PlayerIntelligence << endl;
        cout << "Charisma: " << PlayerCharisma << endl;
        cout << "Endurance: " << PlayerEndurance << endl;
        cout << "Agility: " << PlayerAgility << endl;
        cout << "Luck: " << PlayerLuck << endl;
    }

    void ChooseCharacter()
    {
        string choice;
        cout << "Please Select Your Character (Type Letter At End Of Character Name)" << endl;



    }


};







    int main()
    {
        Player player("", "", 0, 0, 0, 0, 0);
        
        
        
        //Char 1
        cout<<"Name: Sir Edwin Gariss Of The Hold (A)"<<endl;
        cout<<"Class: Knight"<<endl;
        cout<<"Strength: 10"<<endl;
        cout<<"Intelligence: 5"<<endl;
        cout<<"Endurance: 8"<<endl;
        cout<<"Agility: 6"<<endl;
        cout<<"Luck: 5"<<endl<<endl;
        
        
        return 0;
    }