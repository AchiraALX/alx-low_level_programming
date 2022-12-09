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
  * time_update - finds ne time up
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
