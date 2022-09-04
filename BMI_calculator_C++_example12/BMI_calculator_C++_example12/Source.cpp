#include<iostream>
using namespace std;

void main()
{
	//BMI calculator
	//weight (KG)
	//underweight <18.5
	//Normal weight 18.5 24.9
	//overweight >25

	float weight, height, bmi;

	cout << "please enter your weight" << endl;
	cin >> weight;
	cout << "please enter your height" << endl;
	cin >> height;

	bmi = weight / height * height;

	cout << "Your BMI is " << endl;

	if (bmi < 18.5)
		cout << "You are underweight" << endl;
	else if (bmi < 25)
		cout << " You are overweight" << endl;
	else 
		cout << " you are normal weight" << endl;

	
	system("pause>30");
}
