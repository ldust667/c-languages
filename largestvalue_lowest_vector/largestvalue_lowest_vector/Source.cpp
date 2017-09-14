#include<iostream>
#include<vector>

//5values
using namespace std;




vector<int> calculateLow(vector<int> num);
void calculateHigh(vector<int> num);
int globalLow=0;
int globalHigh=0;
int globalLow1 = 0;
int globalHigh1 = 0;
int globalLow2 = 0;
int globalHigh2 = 0;
int globalLow3 = 0;
int globalHigh3 = 0;
int globalLow4 = 0;
int globalHigh4 = 0;
vector<int> numbers = { 1,4,5,2,3 };


int main() {
	

	
	
	
	calculateLow(numbers);
	
	return 0;
}
vector<int> calculateLow(vector<int> num) {

	int loop=0;

	
		for (int i = 0; i <=4; i++)
		{
			//check for int[0]
			if (i != 0) {
				if (num[0] > num[i])
				{
					globalHigh++;
				}
				else {
					globalLow++;
				}
			}
			if (globalHigh == 4) {
				cout << "vector[0] is the highest";
			}
				if (globalLow == 4) {
			cout << "vector[0] is the lowest";
			
		}
				
				
				//check for int[1]
				if (i != 1) {
					if (num[1] > num[i])
					{
						globalHigh1++;
					}
					else {
						globalLow1++;
					}
				}
				if (globalHigh1 == 4) {
					cout << "vector[1] is the highest";

				}
				if (globalLow1 == 4) {
					cout << "vector[1] is the lowest";

				}
				
				
				
				//check for int[2]
				if (i != 2) {
					if (num[2] > num[i])
					{
						globalHigh2++;
					}
					else {
						globalLow2++;
					}
				}
				if (globalHigh2 == 4) {
					cout << "vector[2] is the highest";

				}
				if (globalLow2 == 4) {
					cout << "vector[2] is the lowest";

				}


//check for int[3]
				if (i != 3) {
					if (num[3] > num[i])
					{
						globalHigh3++;
					}
					else {
						globalLow3++;
					}
				}
				if (globalHigh3 == 4) {
					cout << "vector[3] is the highest";

				}
				if (globalLow3 == 4) {
					cout << "vector[3] is the lowest";

				}

				
				//check for int[4]

				if (i != 4) {
					if (num[4] > num[i + 1])
					{
						globalHigh4++;
					}
					else {
						globalLow4++;
					}
				}
				if (globalHigh4 == 4) {
					cout << "vector[4] is the highest";

				}
				if (globalLow4 == 4) {
					cout << "vector[4] is the lowest";


				}
		}
		
		
		



	/*	for (int i = 0; i <= 4; i++)
		{
			if (i != 1) {
				if (num[1] > num[i])
				{
					globalHigh1++;
				}
				else {
					globalLow1++;
				}
			}
			if (globalHigh1 == 4) {
				cout << "vector[1] is the highest";
				
			}
			if (globalLow1 == 4) {
				cout << "vector[1] is the lowest";
			
			}

		}

		for (int i = 0; i <= 4; i++)
		{
			if (i != 2) {
				if (num[2] > num[i])
				{
					globalHigh2++;
				}
				else {
					globalLow2++;
				}
			}
			if (globalHigh2 == 4) {
				cout << "vector[2] is the highest";

			}
			if (globalLow2 == 4) {
				cout << "vector[2] is the lowest";

			}

		}
		for (int i = 0; i <= 4; i++)
		{
			if (i != 3) {
				if (num[3] > num[i])
				{
					globalHigh3++;
				}
				else {
					globalLow3++;
				}
			}
			if (globalHigh3 == 4) {
				cout << "vector[3] is the highest";

			}
			if (globalLow3 == 4) {
				cout << "vector[3] is the lowest";

			}
		}
		for (int i = 0; i <= 4; i++)
		{
			if (i != 4) {
				if (num[4] > num[i + 1])
				{
					globalHigh4++;
				}
				else {
					globalLow4++;
				}
			}
			if (globalHigh4 == 4) {
				cout << "vector[4] is the highest";

			}
			if (globalLow4 == 4) {
				cout << "vector[4] is the lowest";

			
			}
		}*/


		

				

				return num;
			}
			/*try {
				numbers[0] = globalLow;
			}
			catch (exception e) {
				cout << "Your minimum has been reached" << endl;
				break;
			}*/


			//void calculateHigh(int number) {
				//number++;
				//globalHigh = number;
		
	