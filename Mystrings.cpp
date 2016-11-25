#include <stdio.h>
#include "Mystrings.h"

int my_strlen(char* str)
{
	int counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return counter;
}

int word_count(char* str)
{
	int word_number = str[0] == '\0' ? 0 : 1;
	int index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == 32)
		{
			word_number++;
		}
		index++;
	}
	return word_number;
}

int upper_count(char* str)
{
	int upper_counter = 0;
	int index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 65 && str[index] <= 90)
		{
			upper_counter++;
		}
		index++;
	}
	return upper_counter;
}

int isupper(char letter)
{
	if (letter >= 65 && letter <= 90)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

char toupper(char letter)
{
	if (letter >= 97 && letter <= 122)
	{
		letter -= 32;
		return letter;
	}
	else
	{
		return letter;
	}

}

char* capitalize(char* str)
{
	if (!isupper(str[0]))
	{
		str[0] = toupper(str[0]);
	}
	int index = 0;
	while (str[index] != '\0')
	{	
		if (str[index - 1] == 32 && !isupper(str[index]))
		{
			str[index] = toupper(str[index]);
		}

		index++;
	}
	return str;
}

void char_flipper(char *first_char, char *second_char)
{
	char temp_char = *first_char;
	*first_char = *second_char;
	*second_char = temp_char;
}

char* my_strflip(char* str)
{
	int lenght = my_strlen(str);
	for (int i = 0; i < lenght / 2; i++)
	{
		char_flipper(&str[i], &str[lenght - 1 - i]);
	}
	return str;
}



