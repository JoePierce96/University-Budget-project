#include <iostream>
using namespace std;

// create budget program that takes monthly expenses from monthly income
// create structure define data types
// define variables to hold user inputs
// get user inputs
// calculate budgets

struct MonthlyBudget
{
	double rent,
		utilities,
		transport,
		food,
		clothes,
		washing,
		misc;

	MonthlyBudget(double r = 0, double u = 0, double t = 0, double f = 0, double c = 0, double w = 0,
		double m = 0)
	{
		rent = r;
		utilities = u;
		transport = t;
		food = f;
		clothes = c;
		washing = w;
		misc = m;
	}
		   
};

void getAmount(MonthlyBudget&);
void displayAmount(MonthlyBudget&, MonthlyBudget&);

int main()
{
	MonthlyBudget utlty(935.42, 15, 200, 300, 25, 12, 50);
	MonthlyBudget user;

	getAmount(user);
	displayAmount(user, utlty);

	system("pause");
	return 0;
}

void getAmount(MonthlyBudget& user)
{
	cout << endl << "Please enter your monthly expenses:\n";
	cout << endl << "Rent: ";
	cin >> user.rent;
	cout << endl << "Utilities: ";
	cin >> user.utilities;
	cout << endl << "Transport: ";
	cin >> user.transport;
	cout << endl << "Food: ";
	cin >> user.food;
	cout << endl << "Clothes: ";
	cin >> user.clothes;
	cout << endl << "Washing: ";
	cin >> user.washing;
	cout << endl << "Misc: ";
	cin >> user.misc;
}

void displayAmount(MonthlyBudget& user, MonthlyBudget& utlty)
{
	cout << endl << "Here are your individual totals for the month:\n";
	cout << endl << "Rent: " << "£ " << user.rent << endl;
	if (user.rent > utlty.rent)
	{
		cout << "Your rent expenses were over budget\n";
	}
	else
	{
		cout << "Your rent expenses were under budget\n";
	}

	cout << endl << "Utilities: " << "£ " << user.utilities << endl;
	if (user.utilities > utlty.utilities)
	{
		cout << "Your utility expenses were over budget\n";
	}
	else
	{
		cout << "Your utility expenses were under budget\n";
	}

	cout << endl << "Transport: " << "£ " << user.transport << endl;
	if (user.transport > utlty.transport)
	{
		cout << "Your transport expenses were over budget\n";
	}
	else
	{
		cout << "Your transport expenses were under budget\n";
	}

	cout << endl << "Food: " << "£ " << user.food << endl;
	if (user.food > utlty.food)
	{
		cout << "Your food expenses were over budget\n";
	}
	else
	{
		cout << "Your food expenses were under budget\n";
	}

	cout << endl << "Clothes: " << "£ " << user.clothes << endl;
	if (user.clothes > utlty.clothes)
	{
		cout << "Your clothes expenses were over budget\n";
	}
	else
	{
		cout << "Your clothes expenses were under budget\n";
	}

	cout << endl << "Washing: " << "£ " << user.washing << endl;
	if (user.washing > utlty.washing)
	{
		cout << "Your washing were over budget\n";
	}
	else
	{
		cout << "Your washing were under budget\n";
	}

	cout << endl << "Misc: " << "£ " << user.misc << endl;
	if (user.misc > utlty.misc)
	{
		cout << "Your misc expenses were over budget\n";
	}
	else
	{
		cout << "Your misc expenses were under budget\n";
	}

	double userBudget = user.rent + user.clothes + user.food + user.misc + user.transport + user.utilities + user.washing;
	double utltyBudget = utlty.rent + utlty.clothes + utlty.food + utlty.misc + utlty.transport + utlty.utilities + utlty.washing;

	cout << endl << "Total expenses for the month: £ " << userBudget;
	if (userBudget > utltyBudget)
	{
		double deficit = userBudget - utltyBudget;
		cout << "Your expences exceed you monthly budget by: £ \n" << deficit << endl;
	}
	else
	{
		double surplus = utltyBudget - userBudget;
		cout << "Your expences are under your monthly budget by: £ " << surplus << endl;
	}
}