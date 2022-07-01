//
//  record.hpp
//  IN2029-PC
//
//  Created by Mahdi Malkawi on 20/11/2021.
//

#ifndef record_hpp
#define record_hpp

#include <deque>

//Class Record, with private and public member functions.
class record{
    
//Deque container that stores doubles,called scores.
private:
    std::deque<double> scores;
    
public:
    record(); //Empty constructor for class record.
    
    record(double score);/*Constructor that takes a double value as input and
                          creates a record.*/
    
    void add_score(double score);//Member function that adds a double score.
    
    double best_score() const;//Member function that locates the best score.
    
    double overall_average() const;/*Member function that calculates the overall
                                   average over all scores. */
    
    double recent_average() const;/* Member function that calculates the recent
                                   average which is up to ten scores.*/
    
    bool novice() const;//Checks if fewer than ten scores have been recorded.
};

#endif /* record_hpp */
