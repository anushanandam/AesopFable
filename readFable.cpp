/*Owner: Tanmay*/
#include <iostream>
#include <fstream>
/*Our fable is read from a file rather than written
	directly on the screen.*/

using namespace std;

string readFable()
{

    // Read data from fables.txt
    ifstream file("fables.txt");
    /* Variable setup \newline{}
    str - holds each line of file while looping \newline{}
    file\_contents - contents of entire "fables.txt" \newline{}
    */
    string str;
    string file_contents;

    // Loop until there are no more lines in the file
    while (getline(file, str))
    {
        // Add each line of file to file\_contents to create string with entire file
        file_contents += str;
    }

    //int arrSize = (file_contents.size()+1000);
    //cout << "arrSize: " << arrSize << endl;

    string fable;

    // Create a boolean which we will use later to store whether or not the phrase has any vowels
    bool containsVowel;
    // Loop over every character in file\_contents
    for (int i = 0; i < file_contents.size(); i++)
    {
        // Check each character for punctuation
        if (file_contents[i] == '.' || file_contents[i] == '!' || file_contents[i] == '?')
        {
            char c;
            int start = i;
            int stop;
            // char c - used to loop over sequence of letters separated by spaces (a word or abbreviation)
            // int start - holds position of space character which precedes the word
            // int stop - holds position of punctuation, which is the current index

            while (true)
            {
                if (file_contents[start] == ' ')
                {
                    break;
                }
                start--;
            }

            // Set stop variable to start position so we start the loop at the beginning of the word/abbreviation
            stop = start;
            // Loop forwards from the start position until the stop position, which again is the current index
            while (stop != i)
            {
                // c holds a single character, which at the beginning of the loop is the first letter of the word/abbreviation
                // As the loop goes on, c is the second and third and fourth letter and so on until the word/abbreviation ends
                c = file_contents[stop];
                // Check if c is a vowel
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
                {
                    // If c is a vowel at any time in the loop, then the word has a vowel in it
                    // Set boolean containsVowel to true so we can check for it later
                    containsVowel = true;
                }
                // Increment the stop variable so c becomes the next character in the word/abbreviation
                stop++;
            }

            // Check if the loop found any vowels in the word, and if so, print a newline after it
            // The logic here is that in English, all words have vowels but abbreviations do not follow that rule
            if (containsVowel)
            {
                // Add a new line for lines with punctuation
                fable += file_contents[i];
                fable += '\n';
                // Because punctuation is generally followed by a space, skip the next character in the list
                i++;
                //fable[i] = '\n';
            } else {
                // If the loop did not find any vowels and did not set containsVowel to false, then the punctuation is most likely part an abbreviation and is not the end of a line
                // Print the punctuation with no newline
                fable += file_contents[i];
            }
        }
        else
        {
            // If there is no punctuation, then just display the character
            fable += file_contents[i];
        }
        containsVowel = false;
    }
    // Terminate program


    return fable;
}
