//
//  record.cpp
//  IN2029-PC
//
//  Created by Mahdi Malkawi on 20/11/2021.
//

#include "record.hpp"

record::record(){} //Default constructor

/* Constructor that creates a record of type record with a score that is
 inputted within the parameter and pushed back onto the degue container.*/
record::record(double score){
    scores.push_back(score);
}
/* Function that takes a double value as input and then pushes the value onto
 the deque container.*/
void record::add_score(double score){
    scores.push_back(score);
}

/* Member function that checks what the best score ever added to the record is*/
double record::best_score() const{

    double best_score = 0;
    
    /* Range based iterator loop which will iterate through the deque container
    of scores.*/
    for (const auto &it : scores){
        
      
        double score = it;
        
        if (score > best_score){
            best_score = score;
        }
    }
    return best_score;
}

/*Member function that calculates the overall average over all scores. */
double record::overall_average() const{
    
    
    if (scores.size() == 0){
        return 0;
    }
    
    double sum = 0;
    
    //Unsigned count as count will only increase.
    unsigned long count;
    
    /* Condition to loop through container and add scores at point count.*/
    for (count = 0; count < scores.size(); ++count){
        sum+= scores[count];
    }
    return sum / count; //Return the average by dividing sum by count.
}

// Member function that calculates the recent average which is up to ten scores.
double record::recent_average() const{
    if (novice()){ //Checks if novice, if so just return overall_average.
        return overall_average();
    }
    
    double sum = 0;
    unsigned short int count; //Unsigned short int as count that goes up to ten.
     
    for (count = scores.size() - 10; count < scores.size(); ++count){
        sum += scores[count];
    }
    return sum / count;//Return the recent average by dividing sum by count.

}

bool record::novice() const{
    return scores.size() <= 10;
}
