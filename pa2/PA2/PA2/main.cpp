#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Customer
{
private:

	int Customer_id;
	int arrival_time;
	int time_to_check_out;
	int departure_time;
	int total_wait;
	int line_number;

public:

	void set_Customer_id(int);
	void set_arrival_time(int);
	void set_time_to_check_out(int);
	void set_departure_time(int);
	void set_total_wait(int);
	void set_line_number(int);

	int get_Customer_id(void);
	int get_arrival_time(void);
	int get_time_to_check_out(void);
	int get_departure_time(void);
	int get_total_wait(void);
	int get_line_number(void);
	
};
void Customer::set_Customer_id(int id)
{
	Customer_id = id;
}

void Customer::set_arrival_time(int arrival)
{
	arrival_time = arrival;
}

void Customer::set_time_to_check_out(int checkout)
{
	time_to_check_out = checkout;
}

void Customer::set_departure_time(int depart)
{
	departure_time = depart;
}

void Customer::set_total_wait(int wait)
{
	total_wait = wait;
}

void Customer::set_line_number(int line)
{
	line_number = line;
}

int Customer::get_Customer_id(void)
{
	return Customer_id;
}

int Customer::get_arrival_time(void)
{
	return arrival_time;
}

int Customer::get_time_to_check_out(void)
{
	return time_to_check_out;
}

int Customer::get_departure_time(void)
{
	return departure_time;
}

int Customer::get_total_wait(void)
{
	return total_wait;
}

int Customer::get_line_number(void)
{
	return line_number;
}




int main()
{


	return 0;
}