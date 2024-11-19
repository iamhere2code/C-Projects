//Quiz

/*#include <iostream>
int main () {
    bool answer = 0;
    int score = 0;
    std::cout<<"Quiz: For True enter 1 and for False enter 0\n";
    std::cout<<"Question 1: 34 > 23 && 12 < 67?";
    std::cin>>answer;
    if (answer == true) score ++;
    std::cout<<"Question 2: 10 == 10 || 21 > 67?";
    std::cin>>answer;
    if (answer == true) score ++;
    std::cout<<"Question 3: 34 >= 23 && 12 < 67?";
    std::cin>>answer;
    if (answer == true) score ++;
    std::cout<<"Your score is "<<score<<"/3"<<std::endl;
    return 0;
}*/

//General Knowledge Questions Quiz

/*#include <iostream>
#include <string>
int main () {
    std::string name;
    bool answer = 0;
    int score;
    std::cout<<"Hello! What is your name? ";
    std::cin>>name;
    std::cout<<"In this quiz, you will say whether an answer is true (1) or false (0)"<<std::endl;
    std::cout<<"Question 1: New York City is the capital of New York"<<std::endl;
    std::cin>>answer;
    if (answer == false) score++;
    std::cout<<"Question 2: London is the capital of England"<<std::endl;
    std::cin>>answer;
    if (answer == true) score++;
    std::cout<<"Question 3: Your name is "<<name<<"-a"<<std::endl;
    std::cin>>answer;
    if (answer == false) score++;
    std::cout<<"Congrats, "<<name<<"! You got a score of "<<score<<"/3.";
}*/

//BMI Calculator
/*#include <iostream>
#include <string>
int main() {
    bool metric;
    float weight;
    float height;
    float BMI;
    std::string status;
    std::cout<<"Hello, welcome to the BMI calculator. First of all, are you using metric (enter 1 for yes and 0 for no)? ";
    std::cin>>metric;
    std::cout<<"Now what is your weight? ";
    std::cin>>weight;
    std::cout<<"Now what is your height (enter in inches if imperial)? ";
    std::cin>>height;
    if (metric == false){
        weight = weight /  2.205;
        height = height / 39.37;
    }
    BMI = weight/(height * height);
    if (BMI < 18.5) {
        status = "Underweight";
    }
    else if (BMI >= 18.5 && BMI <= 25.5){
        status = "Healthy";
    }
    else {
        status = "Overweight";
    }
    std::cout<<"Your BMI is "<<BMI<<" and this means you are "<<status<<"."<<std::endl;
    return 0;
}*/

//Changing strings
#include <iostream>
#include <string>
/*int main(){
    std::string word = "king";
    word[0] = 'w';
    std::cout<<word;
}*/
int main() {
    std::string fullName;
    std::cout<<"Type your full name: ";
    std::getline (std::cin,fullName);
    std::cout<<"Your full name is "<<fullName;
}





