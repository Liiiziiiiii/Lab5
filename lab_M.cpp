#include <iostream>

using namespace std;

class Movie
{
public:
    int id;
    string title;
    int ranking;
    int release_date;
    int character_number;
    string comment;
    int ticket_price;

    //Конструктор
    Movie()
    {
    }
    Movie(int Id, string Title, int Ranking, int Release_date, int Character_number, string Comment, int Ticket_price)
    {
        id = Id;
        title = Title;
        ranking = Ranking;
        release_date = Release_date;
        character_number = Character_number;
        comment = Comment;
        ticket_price = Ticket_price;
    }


    void print_1()
    {
        cout << "\nId -- " << id << endl;
        cout << "   Title -- " << title << endl;
        cout << "   Ranking -- " << ranking << endl;
        cout << "   Release date --" << release_date << endl;
        cout << "   Character_number -- " << character_number << endl;
        cout << "   Comment -- " << comment << endl;
        cout << "   Ticket price -- " << ticket_price << endl;
    }
};

class Cinema
{
public:
    string name;
    string location;
    Movie arr[99];
    Movie arr2[1];
    int NumberOfMovies = 0;

    Cinema(string Name, string Location)
    {
        name = Name;
        location = Location;
    }

    void MovieAdd(Movie Movie_)
    {
        arr[NumberOfMovies] = Movie_;
        NumberOfMovies++;
    }

    void SeeAllBook_ByYear()
    {
        for (int i = 1; i < NumberOfMovies; i++)
        {
            for (int j = 1; j < NumberOfMovies; j++)
            {
                if (arr[j].release_date > arr[j - 1].release_date)
                {
                    arr2[0] = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = arr2[0];
                }
            }
        }

        cout << "------------------------------------------------Sort By Year-----------------------------------------------------------" << endl;
        for (int i = 0; i < NumberOfMovies; i++)
        {
            arr[i].print_1();
        }
    }
};

enum type {
    Action = 1,
    Comedy,
    Drama,
    Fantasy,
    All
};


int main()
{


    type action = Action;
    type comedy = Comedy;
    type drama = Drama;
    type fantasy = Fantasy;
    type all = All;

    int choose;
    cout << "\n Action - 1";
    cout << "\nComedy - 2";
    cout << "\nDrama - 3";
    cout << "\nFantasy - 4";
    cout << "\nAll - 5";
    cout << "\nChoose (1,2,3,4,5) -- ";
    cin >> choose;



    if (choose == action) {
        Movie a(1, "Titan", 9, 2022, 1, "omg", 33);
        a.print_1();
        Movie a_1(10, "Wolf", 6, 2023, 10, "omg!!", 330);
        a_1.print_1();

        Cinema cinema_action("BestName", "InTheMiddleOfNowhere");
        cinema_action.MovieAdd(a);
        cinema_action.MovieAdd(a_1);
        cinema_action.SeeAllBook_ByYear();

    }
    else if (choose == comedy) {
        Movie b(2, "Tools", 5, 2021, 2, "ohhhh", 433);
        b.print_1();
        Movie b1(21, "Big Mom", 10, 1998, 6, "amazing!", 200);
        b1.print_1();

        Cinema cinema_action("BestName", "InTheMiddleOfNowhere");
        cinema_action.MovieAdd(b);
        cinema_action.MovieAdd(b1);
        cinema_action.SeeAllBook_ByYear();

    }
    else if (choose == drama) {
        Movie c(3, "Time", 10, 2020, 3, "perfect", 333);
        c.print_1();
        Movie c1(3, "Wast Time", 17, 2021, 6, "------", 333);
        c1.print_1();

        Cinema cinema_action("BestName", "InTheMiddleOfNowhere");
        cinema_action.MovieAdd(c);
        cinema_action.MovieAdd(c1);
        cinema_action.SeeAllBook_ByYear();
    }
    else if (choose == fantasy) {
        Movie p(4, "Lucky", 10, 2007, 4, "WOW!!!", 346);
        p.print_1();
        Movie p1(18, "18", 18, 2008, 18, "WOW!!!", 180);
        p1.print_1();

        Cinema cinema_action("BestName", "InTheMiddleOfNowhere");
        cinema_action.MovieAdd(p);
        cinema_action.MovieAdd(p1);
        cinema_action.SeeAllBook_ByYear();
    }
    else if (choose == all) {

        Movie a(1, "Titan", 9, 2022, 1, "omg", 33);
        Movie a_1(10, "Wolf", 6, 2023, 10, "omg!!", 330);
        Movie b(2, "Tools", 5, 2021, 2, "ohhhh", 433);
        Movie b1(21, "Big Mom", 10, 1998, 6, "amazing!", 200);
        Movie c(3, "Time", 10, 2022, 3, "perfect", 333);
        Movie c1(3, "Wast Time", 17, 2021, 6, "------", 333);
        Movie p(4, "Lucky", 10, 2005, 4, "WOW!!!", 346);
        Movie p1(18, "18", 18, 2005, 18, "WOW!!!", 180);


        Cinema cinema("BestName", "InTheMiddleOfNowhere");
        cinema.MovieAdd(a);
        cinema.MovieAdd(b);
        cinema.MovieAdd(c);
        cinema.MovieAdd(p);
        cinema.MovieAdd(a_1);
        cinema.MovieAdd(b1);
        cinema.MovieAdd(c1);
        cinema.MovieAdd(p1);
        cinema.SeeAllBook_ByYear();
    }

    return 0;
}