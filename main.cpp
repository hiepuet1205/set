#include <iostream>
#include <set>

using namespace std;

int main(){
    set<string> word_set;

    string word;

    while(cin >> word){
        word_set.insert(word);
    }

    for(auto const& word : word_set){
        cout << word << endl;
    }
    return 0;
}
