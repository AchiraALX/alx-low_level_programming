#include "head.h"

/**
 * is_leap_year - determines whether a year is leap or not
 *
 * @d: initial date
 *
 * Return : bool
 */

 bool is_leap_year(struct date d)
 {
	 bool leap_flag;

	 if ((d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0)
	 {
		 leap_flag = true;
	 }
	 else
	 {
		 leap_flag = false;
	 }

	 return (leap_flag);
 }

/**
 * number_of_days - get days in february following is a leap
 * year or not
 *
 * @d: initial date
 *
 * Return: number of days
 */

 int number_of_days(struct date d)
 {
	 int days;

	 const int days_per_month[12] = {
	 	31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
	 };

	 if (is_leap_year (d) == true && d.month == 2)
	 {
		 days = 29;
	 }
	 else
	 {
		 days = days_per_month[d.month - 1];
	 }

	 return (days);
 }

/**
 * date_update - the function takes today date of type struct
 * date and returns tommorow date, calculates tommorow's date
 *
 * @d: date struct
 *
 * Return: tommorow date
 */

 struct date date_update(struct date d)
 {
	 struct date tommorow;

	 if (d.day != number_of_days (d))
	 {
	 	tommorow.day = d.day + 1;
		tommorow.month = d.month;
		tommorow.year = d.year;
	 }
	 else if (d.month == 12)
	 {
	 	tommorow.day = 1;
		tommorow.month = 1;
		tommorow.year = d.year + 1;
	 }
	 else
	 {
		 tommorow.day = 1;
		 tommorow.month = d.month + 1;
		 tommorow.year = d.year;
	 }

	 return (tommorow);
 };

 /**
  * time_update - finds time up
  *
  * @now: time now
  *
  * Return: what next time
  */

  struct time time_update (struct time now)
  {
	  ++now.seconds;
	  if (now.seconds == 60)
	  {
		  now.seconds = 0;
		  ++now.minutes;

		  if (now.minutes == 60)
		  {
			  now.minutes = 0;
			  ++now.hour;

			  if (now.hour == 24)
			  {
				  now.hour = 0;
			  }
		  }
	  }

	  return (now);
  }

/**
 * concat - concats two strings
 *
 * @result: resultant string
 *
 * @str1: first string
 *
 * @n1: the length of the first string
 *
 * @str2: second string
 *
 * n2: the length of the second string
 */

 void concat(char result[], const char str1[], int n1, const char str2[], int n2)
 {
	 for (i = 0; i < n1; ++i)
	 {
		 result[i] = str1[i];
	 }
	 for (j = 0; j < n2; ++j)
	 {
		 result[n1 + j] = str2[j];
	 }
 }

/**
 * string_length - gets the length of character string
 *
 * @string: the string
 *
 * Return: lenth of a string
 */

 int string_length (const char string[])
{
	int count = 0;
	while ( string[count] != '\0' )
	{
		++count;
	}

	 return (count);
 }

/**
 * concat_r - concatenates two strings
 *
 * @str1: the first string
 *
 * @str2: the second string
 *
 * @result: concatenated string
 *
 * Return: void
 */

 void concat_r(char result[], const char str1[], const char str2[])
 {
	 for (i = 0; str1[i] != '\0'; ++i)
	 {
		 result[i] = str1[i];
	 }

	 for (j = 0; str2[j] != '\0'; ++j)
	 {
		 result[i + j] = str2[j];
	 }

	 result[i + j] = '\0';
 }

/**
 * equal_strings - compares two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: true if the two string are the same and false if otherwise
 */

 bool equal_strings(const char s1[], const char s2[])
 {
	 bool are_equal;

	 while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	 {
	 	++i;
	 }

	 if (s1[i] == '\0' && s2[i] == '\0')
	 {
		 are_equal = true;
	 }
	 else
	 {
		 are_equal = false;
	 }

	 return (are_equal);
 }
