#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_word(char *str);
char **strtow(char *str);

/**
 * word_len - ...
 * @str: ..
 * Return: the index marking thr end of the intial word
 * pointed to by str
 */

int word_len(char *str)
{
int index = 0, len = 0;

while (*(str + index) && *(str + index) != ' ')
{
len++;
index++;
}

return (len);
}

/**
 * count_word - ...
 * @str: ..
 * Return: the number of words cintained within str
 */

int count_word(char *str)
{
int index = 0, word = 0, len = 0;

for (index = 0; *(str + index); index++)
len++;

for (index = 0; index < len; index++)
{
if (*(str + index) != ' ')
{
word++;
index += word_len(str + index);
}
}

return (word);
}


/**
 * strtow - ...
 * @str: ..
 * Return: if str = NULL, str = "", or the function fails - NULL
 * otherwise - a pointer to an array of string
 */

char **strtow(char *str)
{
char **string;
int index = 0, word, w, letter, l;

if (str ==  NULL || str[0] == '\0')
return (NULL);

word = count_word(str);
if (word == 0)
return (NULL);

string = malloc(sizeof(char *) * (word + 1));
if (string == NULL)
return (NULL);

for (w = 0; w < word; w++)
{
while (str[index] == ' ')
index++;

letter = word_len(str + index);

string[w] = malloc(sizeof(char) * (letter + 1));

if (string[w] == NULL)
{
for (; w >= 0; w--)
free(string[w]);

free(string);
return (NULL);
}

for (l = 0; l < letter; l++)
string[w][l] = str[index++];

string[w][l] = '\0';
}
string[w] = NULL;

return (string);
}
