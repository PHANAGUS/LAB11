#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    ifstream source;
    source.open("score.txt");

    string t;
    int N=0;
    double sum=0, sumpow=0, mean, sd;
    while(getline(source,t))
    {
        sum += atof(t.c_str());
        sumpow += pow(atof(t.c_str()),2);
        N++;
    }
    mean = sum/N;
    sd = sqrt((sumpow/N)-pow(mean,2));

    cout << "Number of data = " << N << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sd << endl;
}
