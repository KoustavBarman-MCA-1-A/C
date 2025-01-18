#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct company
{
	char name[50];
	char address[100];
	char phone[15];
	int noOfEmployees;
};

int main()
{
	struct company myCompany;
	printf("Enter the name of the company: ");
	fgets(myCompany.name, sizeof(myCompany.name), stdin);
	printf("Enter the address of the company: ");
	fgets(myCompany.address, sizeof(myCompany.address), stdin);
	printf("Enter the phone number of the company: ");
	fgets(myCompany.phone, sizeof(myCompany.phone), stdin);
	printf("Enter the number of employees: ");
	scanf("%d", &myCompany.noOfEmployees);
	printf("\n***Company Details***\n");
	printf("Name: %s\n", myCompany.name);
	printf("Address: %s\n", myCompany.address);
	printf("Phone: %s\n", myCompany.phone);
	printf("Number of Employees: %d\n", myCompany.noOfEmployees);
	return 0;
}
