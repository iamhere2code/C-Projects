//concatenation

/*include <iostream>
#include <string>
int main() {
    std::string first_name = "Alisha ";
    std::string last_name = "Faraz";
    //std::string full_name = first_name + " " + last_name;
    std::string full_name = first_name.append(last_name);
    std::cout<<full_name<<std::endl;
    std::cout<<"My full name is " + full_name;
    
    return 0;
}*/

//concatenation

/*#include <iostream>
#include <string>
int main() {
    std::string x = "20";
    //std::string y = "24";
    int y = 24;
    std::string z = x + y;
    std::cout<<z;
    
}*/

//length and size

/*#include <iostream>
#include <string>
int main() {
    std::string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::cout<<"The length of the string is "<<alphabet.length()<<std::endl;
    std::cout<<"The size of the string is "<<alphabet.size();
}*/

//index

#include <iostream>
#include <string>

int main() {
    std::string greeting = "Hello!";
    std::cout<<greeting[1]<<std::endl;
    std::cout<<greeting[(greeting.length() - 1)]<<std::endl;
    greeting[0] = 'M';
    std::cout<<greeting;
    return 0;
}
