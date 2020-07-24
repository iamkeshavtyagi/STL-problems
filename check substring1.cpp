#include<iostream>
#include<string>
using namespace std;
int main(){
            std::string object("There are two needles in this haystack with needles.");

            std::string subject("needle");

            std::size_t found = object.find(subject);

            if(found != std::string::npos)

                std::cout<<"first 'needle' found at:"<< found<<'\n';

            return 0;

}
