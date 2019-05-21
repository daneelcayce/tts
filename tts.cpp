// tts.cpp
// by Daniel Alexander <xandernaut@gmail.com>

/* a very hacky wrapper for the "say" command; I use this as an
assistive communication method while nonverbal. */

# include <stdio.h>
# include <iostream>
# include <string>

using namespace std;

int tts(){
string input;
cout << "say> ";
getline(cin, input);
string command = "say \"" + input + "\"";
//std::cout << input << endl;
system(command.c_str());
return 0;
}

int main(){
bool state = false;
while (state == false)
	tts();
return 0;
}
