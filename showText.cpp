/*Owner: Tanmay*/
/*The text of our fable is shown on a screen that is 
	right next to that of the animation and which is time synced. */
#include "lab.h"

void showText(cairo_t* cr, std::string s)
{
    /* Create extents object */
    cairo_text_extents_t extents;

    /* Start at beginning of screen */
    int xPos = 0;
    /* Start at 40 due to scaling issues */
    int yChange = 40;

    /* Create empty string variable for the current line */
    std::string line = "";

    /* Move the first line object to the start position */
    cairo_move_to(cr, xPos, yChange);


    /* Loop over each character in s */
    int i = 0;
    while (i < s.size())
    {

        /* Start another loop inside the first one which will put together the lines and make sure they are not too big to display on the screen */
        while (true)
        {
            /* Store the location of the start of the word for later */
            int startOfWord = i;

            /* Start -another- loop which finds the end of each word in the line */
            /* Loop forever until..... */
            while (true)
            {
                //std::cout << "i: " << i << std::endl;
                //std::cout << "s[i]" << s[i] << std::endl;
                /* Increment the index */
                i++;
                /* Until we reach a space, indicating the end of the word */
                if (s[i] == ' ') break;
            }
            //std::cout << "Start of word position: " << startOfWord << std::endl;
            std::string word = "";

            /* Loop forwards now from the start of the word, until the end of the word which is our current index	i */
            for (int j = startOfWord; j < i; j++)
            {
                word += s[j];
            }
            //std::cout << "Word: " << word << std::endl;

            /* Store and compare the extents.width of both the line and the word */
            /* If the word width + the line width exceeds the defined window width in lab.h, then don't add the word to the line, start a new line */
            cairo_text_extents(cr,word.c_str(), &extents);
            int wordWidth = extents.width;
            cairo_text_extents(cr,line.c_str(), &extents);
            int lineWidth = extents.width;
            int combined = wordWidth + lineWidth;

            //std::cout << "wordWidth: " << wordWidth << " lineWidth: " << lineWidth << " combined: " << combined << std::endl;

            /* If the line width + the current word's width is less than "WIDTH" defined in lab.h, then add the word to the current line and show it on the screen */
            if (combined < WIDTH)
            {

                line += " " + word;
                //std::cout << "Line: " << line << std::endl;
                cairo_show_text(cr, word.c_str());
                break;

                /* If not, and adding the current word to the line would exceed WIDTH, then create a new line and make that word the first of the line */
            }
            else
            {
                yChange += extents.height;
                cairo_move_to(cr, xPos-20, yChange);
                cairo_show_text(cr, word.c_str());
                line = word;
                break;

            }
        }
    }
}
