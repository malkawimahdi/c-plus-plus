//
//  table.hpp
//  IN2029-PC
//
//  Created by Mahdi Malkawi on 20/11/2021.
//

#ifndef table_hpp
#define table_hpp

#include "record.hpp"

#include <string>
#include <vector>
#include <unordered_map>

class table{
    
private:
//A hash map called player_records which contains the players name and a record.
    std::unordered_map<std::string,record> player_records;
    
public:
    table(); //Default constructor.
    
    /* Adds a new score for the named player*/
    void add_score(const std::string &name, double score);
    
    /*Returns the total number of players for whom a score is recorded. */
    int num_players()const;
    
    //Returns the names of the players in descending order of recent averages.
    std::vector<std::string> best_recent() const;
    
    //Returns the average of the best scores of all players.
    double average_best() const;
    
    //Returns the name of the player with the highest overall_average.*/
    std::string best_overall() const;
    
    int novice_count() const; //Returns the number of novice players. 
};
#endif /* table_hpp */
