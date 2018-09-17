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




int main()
{


	return 0;
}