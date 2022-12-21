#include <iostream>

using namespace std;

class Movie
{
private:
    int id;
    string title;
    int ranking;
    int release_date;
    int character_number;
    string comment;
    int ticket_price;
public:
    getId()
    {
        return id;
    }
    getTitle()
    {
        return title;
    }
    getRanking()
    {
        return ranking;
    }
    getRelease_date() 
    {
        return release_date;
    }
    getCharacter_number()
    {
        return character_number;
    }
    getComment()
    {
        return comment;
    }
    getTicket_price()
    {
        return ticket_price;
    }
    //Конструктор
    Movie()
    {
    }
    Movie(int id, string title, int ranking, int release_date, int character_number, string comment, int ticket_price)
    {
        id = id;
        title = title;
        ranking = ranking;
        release_date = release_date;
        character_number = character_number;
        comment = comment;
        ticket_price = ticket_price;
    }


    void printMovieDataInConsole()
    {
        cout << "\n Id -- " << id << endl;
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

    Cinema(string name, string location)
    {
        name = name;
        location = location;
    }

    void movieAdd(Movie movie)
    {
        arr[NumberOfMovies] = movie;
        NumberOfMovies++;
    }

    void seeAllBookByYear()
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
            arr[i].printMovieDataInConsole();
        }
    }
};

enum Type {
    ACTION = 1;
    COMEDY,
    DRAMA,
    FANTASY,
    ALL
};


int main()
{


    Type action = ACTION;
    Type comedy = COMEDY;
    Type drama = DRAMA;
    Type fantasy = FANTASY;
    Type all = ALL;

    int choose;
    cout << "\n Action - 1";
    cout << "\nComedy - 2";
    cout << "\nDrama - 3";
    cout << "\nFantasy - 4";
    cout << "\nAll - 5";
    cout << "\nChoose (1,2,3,4,5) -- ";
    cin >> choose;



    if (choose == action) {
        Movie First_Movie_Action(1, "Titan", 9, 2022, 1, "omg", 33);
        First_Movie_Action.printMovieDataInConsole();
        Movie Second_Movie_Action(10, "Wolf", 6, 2023, 10, "omg!!", 330);
        Second_Movie_Action.printMovieDataInConsole();

        Cinema cinema_action();
        cinema_action.movieAdd(First_Movie_Action);
        cinema_action.movieAdd(Second_Movie_Action);
        cinema_action.seeAllBookByYear();

    }
    else if (choose == comedy) {
        Movie First_Movie_Comedy(2, "Tools", 5, 2021, 2, "ohhhh", 433);
        First_Movie_Comedy.printMovieDataInConsole();
        Movie Second_Movie_Comedy(21, "Big Mom", 10, 1998, 6, "amazing!", 200);
        Second_Movie_Comedy.printMovieDataInConsole();

        Cinema cinema_action();
        cinema_action.movieAdd(First_Movie_Comedy);
        cinema_action.movieAdd(Second_Movie_Comedy);
        cinema_action.seeAllBookByYear();

    }
    else if (choose == drama) {
        Movie First_Movie_Drama(3, "Time", 10, 2020, 3, "perfect", 333);
        First_Movie_Drama.printMovieDataInConsole();
        Movie Second_Movie_Drama(3, "Wast Time", 17, 2021, 6, "------", 333);
        Second_Movie_Drama.printMovieDataInConsole();

        Cinema cinema_action();
        cinema_action.movieAdd(First_Movie_Drama);
        cinema_action.movieAdd(Second_Movie_Drama);
        cinema_action.seeAllBookByYear();
    }
    else if (choose == fantasy) {
        Movie First_Movie_Fantasy(4, "Lucky", 10, 2007, 4, "WOW!!!", 346);
        First_Movie_Fantasy.printMovieDataInConsole();
        Movie Second_Movie_Fantasy(18, "18", 18, 2008, 18, "Masterpiece!!!", 180);
        Second_Movie_Fantasy.printMovieDataInConsole();

        Cinema cinema_action();
        cinema_action.movieAdd(First_Movie_Fantasy);
        cinema_action.movieAdd(Second_Movie_Fantasy);
        cinema_action.seeAllBookByYear();
    }
    else if (choose == all) {

        Cinema cinema();
        cinema.movieAdd(First_Movie_Action);
        cinema.movieAdd(Second_Movie_Action);
        cinema.movieAdd(First_Movie_Comedy);
        cinema.movieAdd(Second_Movie_Comedy);
        cinema.movieAdd(First_Movie_Drama);
        cinema.movieAdd(Second_Movie_Drama);
        cinema.movieAdd(First_Movie_Fantasy);
        cinema.movieAdd(Second_Movie_Fantasy);
        cinema.seeAllBookByYear();
    }

    return 0;
}