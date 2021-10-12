/*
   CH-230-A
   critter.h
   Rajdeep Bastakoti
   r.bastakoti@jacobs-university.de
 */


#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	//std::string gender;
	int hunger;
	int boredom;
	double height;
	double hg2;
	double thirst;
    double int_double(int num);
	int double_int(double val);

public: // business logic methods are public
	// Constructors
	Critter();
	Critter(std::string& newname);
	Critter(std::string& newname,
	int newhunger, int newboredom, double newheight = 10);
	Critter(std::string& newname, int newhunger, int newboredom,
	double newheight, double newthirst);
	
	
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	//void setgender(std::string& newgender); // setter for gender
	void setheight(double newheight); // setter for height
	// getter method
	int getHunger();
	int getBoredom();
	double getheight(); // getter for height
	// service method
	void print();
};