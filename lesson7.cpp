// Comparison operator
// Grade system project
#include <iostream>
//using main space std when we are finished with our products
/*int main()
{
    int marks;
    std::cout<<"Enter your Computer Science marks: ";
    std::cin>>marks;
    if (marks >= 90){
        std::cout<<"Grade A"<<std::endl;
    }
    else if (marks >= 80){
        std::cout<<"Grade B"<<std::endl;
    }
    else if (marks >= 70){
        std::cout<<"Grade C"<<std::endl;
    }
    else if (marks >= 60){
        std::cout<<"Grade D"<<std::endl;
    }
    else {
        std::cout<<"Fail";
    }
}*/
//temperature checking
/*int main(){
    int temp;
    std::cout<<"Enter the temperature: ";
    std::cin>>temp;
    if (temp >= 90){
        std::cout<<"It's hot!"<<std::endl;
    }
    else if (temp >= 70){
        std::cout<<"It's warm!"<<std::endl;
    }
    else if (50 <= temp){
        std::cout<<"It's cool!"<<std::endl;
    }
    else {
        std::cout<<"It's cold!"<<std::endl;
    }
}*/

//find largest number out of three number
/*int main () {
    int num1;
    int num2;
    int num3;
    std::cout<<"Enter your three numbers: ";
    std::cin>>num1>>num2>>num3;
    if (num1 > num2 && num2 > num3){
        std::cout<<"Number One is the biggest";
    }
    else if (num2 > num1 && num2 > num3){
        std::cout<<"Number Two is the biggest";
    }
    else if (num3 > num2 && num3 > num1 ){
        std::cout<<"Number Three is the largest";
    }
    else if (num1==num2 || num1 == num3 || num2 == num3){
        std::cout<<"Two of the numbers are equal";
    }
}*/

//age elligibility
/*int main () {
    bool testPassed;
    int age;
    std::cout<<"Enter your age: "<<std::endl;
    std::cin>>age;
    std::cout<<"Did you pass your test? "<<std::endl;
    std::cin>>testPassed;
    if (age > 16 && testPassed) {
        std::cout<<"You can get your drivers liscence"<<std::endl;
    }
    else if (age >= 16 && !testPassed) {
        std::cout<<"You need to go pass your test"<<std::endl;
    }
    else if (age < 16 && testPassed) {
        std::cout<<"You need to wait until you are older"<<std::endl;
    }
    else {
        std::cout<<"You are not elligibile";
    }
}*/

//login system
#include <string>
int main() {
    std::string username = "hello123";
    std::string password = "python321";
    std::string enterUsername;
    std::string enterPassword;
    std::cout<<"Enter your username: ";
    std::cin>>enterUsername;
    std::cout<<"Enter your password: ";
    std::cin>>enterPassword;
    if (enterUsername == username && password == enterPassword){
        std::cout<<"Login successful";
    }
    else if (enterUsername == username && password != enterPassword){
        std::cout<<"Incorrect password";
    }
    else if (enterUsername != username && password == enterPassword){
        std::cout<<"Incorrect username";
    }
    else {
        std::cout<<"Incorrect password and username";
    }
}







