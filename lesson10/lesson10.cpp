#include <iostream>
using namespace std;

int main()
{
	/*cout << "task1\n";
int a[5] = { 1,2,3,4,5 };
for (int i = 4; i >= 0; i--)
{
	cout << (a[i]) << " ";
}*/

/*cout << "task2\n";
int b[20] = {};
srand(time(0));
for (int i = 0; i < 20; i++)
{
	b[i]= rand() % 20;
}
for (int j = 0; j < size(b); j++)
{
	if (j%2==0) {
		cout << (b[j]) << " ";
	}
}*/
	/*cout << "task3\n";
	int c[10] = {};
	srand(time(0));
	int cemm = 0, sayy = 0;

	for (int i = 0; i < 10; i++)
	{
		c[i] = rand() % 41 - 20;
	}
	for (int j = 0; j < size(c); j++)
	{
		if ((c[j]) > 0) {
			cout << (c[j]) << " ";
			cemm += (c[j]);
			sayy++;
		}
	}
	cout << "ededi orta:" << cemm / sayy;*/
	/*cout << "task4\n";
	int d[20] = {};
	srand(time(0));
	int sifir = 0, musbet = 0,menfi=0;

	for (int i = 0; i < 20; i++)
	{
		d[i] = rand() % 21 - 10;
	}
	for (int j = 0; j < size(d); j++)
	{
		if ((d[j]) > 0) {
			cout << (d[j]) << " ";
			musbet++;
		}
		else if ((d[j]) < 0) {
			cout << (d[j]) << " ";
			menfi++;
		}
		else {
			sifir++;
		}
	}
	cout << "sifirlarin sayi:" << sifir;
	cout << "musbetlerin sayi:" << musbet;
	cout << "menfilerin sayi:" << menfi;*/
	/*cout << "task5\n";
	int e[10] = {};
	srand(time(0));
	int cem = 0, cem_t = 0, say = 0;

	for (int i = 0; i < 10; i++)
	{
		e[i] = rand() % 10;
	}
	for (int j = 0; j < size(e); j++)
	{
		if (j % 2 == 0) {
			cout << (e[j]) << " ";
			cem += (e[j]);
		}
		else {
			cout << (e[j]) << " ";
			say++;
			cem_t += (e[j]);
		}
	}
	cout << cem << endl;
	cout << cem_t / say << endl;*/
	/*cout << "task6\n";
	int f[10] = {};
	srand(time(0));
	int punkt = 0, herf = 0, reqem = 0;

	for (int i = 0; i < 10; i++)
	{
		f[i] = rand() % 256;
	}
	for (int j = 0; j < size(f); j++)
	{
		if ((j>=65 && j<=90 )|| (j >= 97 && j <= 122)) {
			cout << char(j) << " ";
			herf++;
		}
		else if(j >= 30 && j <= 39){
			cout << char(j) << " ";
			reqem++;
		}
		else {
			cout << char(j) << " ";
			punkt++;
		}
	}
	cout << "herf;" << herf;
	cout << "reqem;" << reqem;
	cout << "punkt;" << punkt;*/
	/*cout << "task7\n";
	int x[50] = {};
	srand(time(0));
	for (int i = 0; i < 50; i++)
	{
		x[i] = rand() % 100;
	}
	int y , beraber_say=0;
	cin>>y;
	for (int i = 0; i < 50; i++)
	{
		cout << (x[i]) << " ";
		if ((x[i])==y)
		{
			
			beraber_say++;
		}
	}
	cout <<"say;"<< beraber_say;*/
	/*
	cout << "task8\n";
	int n[10] = {};
	srand(time(0));
	int uc = 0, bes = 0, yeddi = 0;

	for (int i = 0; i < 10; i++)
	{
		n[i] = rand() % 100;
	}
	for (int j = 0; j < size(n); j++)
	{
	if (j % 3 == 0) {
		cout << j << " ";
		uc++;
	}
	if (j % 5 == 0) {
		cout << j << " ";
		bes++;
	}
	if (j%7==0) {
		cout << j << " ";
		yeddi++;
	}
	else {
		cout << j << " ";
	}
	}
	cout << "uc;" << uc;
	cout << "bes;" << bes;
	cout << "yeddi;" << yeddi;*/
	/*cout << "task9\n";
	int m[10] = {};
	srand(time(0));
	int uc_tek = 0;

	for (int i = 0; i < 10; i++)
	{
		m[i] = rand() % 100;
	}
	for (int j = 0; j < size(m); j++)
	{
		if (j % 3 == 0 && j % 5 != 0) {
			cout << j << " ";
			uc_tek++;
		}
		else {
			cout << j << " ";
		}
	}
	cout << "uc;" << uc_tek;*/
	cout << "task10\n";
	int z[10] = {};
	srand(time(0));
	int task10 = 0,menfi = -1;
	for (int i = 0; i < 10; i++) {
		z[i] = rand() % 40 - 10;
	}
	for (int j = 0; j < 10; j++) {
		cout << z[j] << " ";
	}
	cout << endl;
	for (int j = 0; j < 10; j++) {
		if (z[j] < 0) {
			menfi = j;
			break;
		}
	}
	if (menfi != -1) {
		for (int j = menfi + 1; j < 10; j++) {
			task10 += z[j];
		}
	}
	cout << "cem;" << task10 << endl;

}

