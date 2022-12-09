#include <stdio.h>
#include <stdbool.h>

struct date
{
	int month;
	int day;
	int year;
};

bool is_leap_year(struct date d)
{
	bool leap_flag;

	if (d.year % 4 == 0 && d.year % 100 != 0 || d.year % 400 == 0)
	{
		leap_flag = true;
	}
	else
	{
		leap_flag = false;
	}

	return (leap_flag);
}

int num_of_days (struct date d)
{
	int days;
	const int day_per_month[12] = {
		31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
	};

	if (is_leap_year (d) == true && d.month == 2)
	{
		days = 29;
	}
	else
	{
		days = day_per_month[d.month - 1];
	}

	return (days);
}

int main(void)
{
	struct date today, tommorow;

	printf("%s\n", "Enter a date  (mm dd yyyy): ");
	scanf("%i %i %i", &today.month, &today.day, &today.year);

	if (today.day != num_of_days (today))
	{
		tommorow.day = today.day + 1;
		tommorow.month = today.month;
		tommorow.year = today.year;
	}
	if (today.month == 12)
	{
		tommorow.day = 1;
		tommorow.month = 1;
		tommorow.year = today.year + 1;
		printf("%i\n", today.month);
	}
	else
	{
		tommorow.day = 1;
		tommorow.month = today.month + 1;
		tommorow.year = today.year;
	}

	printf("%s %i %i %i\n", "Tommorow's date is ", tommorow.month, tommorow.day, tommorow.year);

	return (0);
}
