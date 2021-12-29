#include <iostream>
#include <memory>
#include <vector>

using namespace std;

int main(){

    string token = "Token";
    string vcsCommand = "cd \"$(find \"$(cd ..; pwd)\" -name \"Control\")\" && ./vcs.sh " + token;

    //zoeken naar de control folder en de de file uitvoeren
    system(vcsCommand.c_str());
}
