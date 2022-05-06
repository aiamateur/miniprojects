#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum Suit {clubs, diamonds, hearts, spades};

const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class Card
{
    private:
    int number;
    Suit suit;

    public:
    Card()
    {

    }

    void set(int n, Suit s)
    {
        number = n;
        suit = s;
    }


    void display();

    void get();
};

void Card::display()
{
    if(number >= 2 && number <= 10)
    {
        cout << number;
    }else
    {
        switch(number)
        {
            case jack: cout << "J" ; break;
            case queen: cout << "Q" ; break;
            case king: cout << "K" ; break;
            case ace: cout << "A" ; break;
        }
    }
    switch(suit)
    {
        case clubs: cout << static_cast<char>(5) ; break;
        case diamonds: cout << static_cast<char>(4) ; break;
        case hearts: cout << static_cast<char>(3) ; break;
        case spades: cout << static_cast<char>(6) ; break;
    }
}

void Card::get()
{
    if(number >= 2 && number <= 10)
    {
        cout << number;
    }else
    {
        switch(number)
        {
            case jack: cout << "J" ; break;
            case queen: cout << "Q" ; break;
            case king: cout << "K" ; break;
            case ace: cout << "A" ; break;
        }
    }
    switch(suit)
    {
        case clubs: cout << "C" ; break;
        case diamonds: cout << "D" ; break;
        case hearts: cout << "H" ; break;
        case spades: cout << "S" ; break;
    }
}

int main()
{
    const int NUMHANDS = 4;
    const int NUMCARDS = 13;
    Card deck[52];
    Card hands[NUMHANDS][NUMCARDS];
    int j;

    cout << endl;

    //Step 1: Set the cards
    for(j = 0; j < 52; j++)
    {
        int num = (j % 13) + 2;
        Suit su = Suit(j/13);
        deck[j].set(num, su);
    }

    //Step 2: Display an ordered deck
    cout << endl;
    cout << "Ordered deck" << endl;
    for(j = 0; j < 52; j++)
    {
        deck[j].display();
        cout << " ";
        if((j + 1) % 13 == 0)
          cout << endl;
    }

    //Step 3: Shuffle the cards
    srand(time(NULL));
    for(j = 0; j < 52; j++)
    {
        int k = rand() % 52;
        Card temp = deck[j];
        deck[j] = deck[k];
        deck[k] = temp;
    }

    //Step 4: Display the shuffled cards
    cout << endl;
    cout << "Shuffled deck" << endl;
    for(j = 0; j < 52; j++)
    {
        deck[j].display();
        cout << ", ";
        if((j + 1) % 13 == 0)
          cout << endl;
    }

    //Step 5: Deal 13 cards each to 4 hands
    cout << endl;
    cout << "Deal hands" << endl;
    for(int i = 0; i < NUMHANDS; i++)
    {
        for(j = 0; j < NUMCARDS; j++)
        {
           hands[i][j] = deck[13*i + j];
        }

    }

    //Step 6: Display the hands
    cout << endl;
    cout << "Deal hands" << endl;
    for(int i = 0; i < NUMHANDS; i++)
    {
        for(j = 0; j < NUMCARDS; j++)
        {
           hands[i][j].get();
           //hands[i][j].display();
           cout << " ";
        }
        cout << endl;

    }

    return 0;
}
