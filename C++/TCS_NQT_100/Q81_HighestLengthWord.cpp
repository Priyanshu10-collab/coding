#include<bits/stdc++.h>
using namespace std;

// Function to find the longest word in the string
void MaxLengthWords(string str, string &maxWord)
{
    // Get the length of the string
    int len = str.length();
    int i = 0, j = 0;

    // Initialize variables for tracking the min and max word length
    int min_length = len, max_length = 0, max_start = 0;

    // Traverse through the string to find the longest word
    while (j <= len)
    {
        // Increase j until we reach a space or the end of the string
        if (j < len && str[j] != ' ')
            j++;

        else
        {
            // Calculate the length of the current word
            int curr_length = j - i;

            // If the current word is longer than the previous longest, update max length
            if (curr_length > max_length)
            {
                max_length = curr_length;
                max_start = i;
            }
            j++; // Move past the space
            i = j; // Update the start of the next word
        }
    }

    // Extract the longest word from the string
    maxWord = str.substr(max_start, max_length);
}

// Driver code
int main()
{
    // Input string
    string str = "Google Docs";

    // Variable to store the longest word
    string maxWord;

    // Call the function to find the longest word
    MaxLengthWords(str, maxWord);

    // Output the result
    cout << "Largest Word is: " << maxWord << endl;

    return 0;
}