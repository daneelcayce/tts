// tts.cpp
// by Daneel Alexander <xandernaut@gmail.com>

/* a hacky wrapper for espeak; I use this as an
assistive communication method while nonverbal. */

# include <stdio.h>
# include <iostream>
# include <string>

using namespace std;

int tts(){
string input;
cout << "say> ";
getline(cin, input);
string command = "espeak -v en+klatt3 \"" + input + "\"";
system(command.c_str());
return 0;
}

int main(){
bool state = false;
while (state == false)
	tts();
return 0;
}
