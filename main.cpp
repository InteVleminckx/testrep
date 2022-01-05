#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class A {
public:

    A& operator=(const A& rhs){

        cout << "iegs" << endl;

    }

};


int main(){

//    string name = "InteVleminckx";
//    string repoName = "newRepo";
//    string createGitRepo = "curl -u \"" + name + "\" https://api.github.com/user/repos -d \'{\"name\":\"" + repoName + "\"}\'";
//
//    string token = "InteVleminckx9";
//
//
////    string vcsCommand = "cd \"$(find \"$(cd ..; pwd)\" -name \"Control\")\" && ./vcs.sh " + token;
//    string vcsCommand = "cd \"$(find \"$(cd ..; pwd)\" -name \"Control\")\" && ./vcs.sh " + name;
//
//    //zoeken naar de control folder en de de file uitvoeren
//    system(vcsCommand.c_str());
//
//    system("git push");
//    system("echo Inte Vleminckx");

    A a;

    A* b = &a;

    return 0;
}
