//
//  table.cpp
//  IN2029-PC
//
//  Created by Mahdi Malkawi on 20/11/2021.
//

#include "table.hpp"

#include <algorithm>

table::table(){}//Default constructor.

/* Adds a new score for the named player */
void table::add_score(const std::string &name, double score){
    
    /*Creates a record by reference in which the name is the key for the hash
     map and it hashes to the default specified by the compiler.*/
    record& record = player_records[name];
    
//Calls record member function to add the score which is taken as a parameter.
    record.add_score(score);
}

//Returns the total number of players for whom a score is recorded.
int table::num_players() const{
    
    /*The return type and method are cast with brackets to tell the compiler
     that I know that an implicit conversion is occuring in which at a point, I
     will be losing some data. However, it is not a concern for this project as
     I wont exceed the limit.*/
    return (int) (player_records.size());
}
/* Compares recent averages, by taking a pair in which it takes the name, and
 a player record and returns a bool expression to be used in the sort
 algorithm.*/
bool compare_recent_averages(const std::pair<std::string, record>& player1,
                             const std::pair<std::string, record>& player2){
    
    /* Compares players records, by selecting the second parameter of the pair
     as the comparison, which will be used to return true or false to be used
     in the sorting function.*/
    return player1.second.recent_average() < player2.second.recent_average();
}
//Returns the names of the players in descending order of recent averages.
std::vector<std::string> table::best_recent() const{
    
    /* Creating a vector which contains a pair of types, such that to hold a
     string which is the players name and a record. */
    std::vector<std::pair<std::string, record>> player_records2;
    
    /* Range based for loop to go through all the player records and insert the
     values into player_records2. This is done as we dont want to operate on
     original container as we are modifying placements. */
    for (const auto &it : player_records){
        player_records2.push_back(it);
    }
    /* Sorts the players by comparing scores.*/
    sort(player_records2.begin(), player_records2.end(),
         compare_recent_averages);
    
    /*Create a vector container which holds the players names.*/
    std::vector<std::string> players;
    
    /* Range based for loop which will push back players names, which is
     indicated by ".first".*/
    for (const auto &it : player_records2){
        players.push_back(it.first);
    }
    return players; //Returns the players.
}

/*Returns the average of the best scores of all players.*/
double table::average_best() const{
    double sum_best = 0;
    unsigned long count = 0;
    
    /* Range based for loop which iterates through player_records*/
    for (const auto &it : player_records){
        
        /* Goes through each player record and selects ".second" which is used
         to define what we are specifiying as I have defined a pair, so it takes
         scores.*/
        sum_best += it.second.best_score();
        ++count; //Increment the counter so we can use it to divide the sum.
    }
    return sum_best /count; //Divides the sum of the best_score to give average.
}

/*Returns the name of the player with the highest overall_average.*/
std::string table::best_overall() const{
       
    std::string best_player;
    double best_score = 0; 
    
    /* Range based for loop to iterate through player records.*/
    for (const auto &it : player_records){
        /* The overall_average() member function is called on the record, to
         return the overall average in which it is stored in the variable of the
         same name.*/
        double overall_average = it.second.overall_average();
        
        if (overall_average > best_score){
            best_score = overall_average;
            best_player = it.first;
        }
    }
    return best_player; //Returns the best player.
}

/* Boolean check to check if player is novice by calling record member function
 ".novice()" on the scores recorded.*/
bool is_novice(std::pair<std::string, record> player){
    return player.second.novice();
}

/*Returns the number of novice players. Also, used a cast around what is being
 returned as I understand that int doesn't go as high as a table.*/
int table:: novice_count() const{
    return (int) (count_if(player_records.cbegin(), player_records.cend()
                           ,is_novice));
}
