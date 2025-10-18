#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct contact{
	char name[50];
	char number[15];
	char email[50];
}Contact;
void printContact(Contact c){
	printf("Name: %s\n", c.name);
	printf("Number: %s\n", c.number);
	printf("E-mail: %s\n", c.email);
}
void menu(){
	printf("What you wanna do:\n");
	printf("1-Create a contact\n");
	printf("2-Remove a contact\n");
	printf("3-Save data\n");
	printf("4-Load data\n");
	printf("5-Show contacts\n");
	printf("6-Exit\n");
}
Contact createContact(char name[], char num[], char email[]){
	Contact newContact;
	strcpy(newContact.name,name);
	strcpy(newContact.number,num);
	strcpy(newContact.email,email);
	return newContact;
}
void removeContact(Contact** cts, int idx, int* len){
	for (int i = 0; i < *len; i++){
		if (i >= idx && i+1 != *len){
			strcpy((*cts)[i].name,(*cts)[i+1].name);
			strcpy((*cts)[i].number,(*cts)[i+1].number);
			strcpy((*cts)[i].email,(*cts)[i+1].email);
		}
	}
	*cts = (Contact*)realloc(*cts,--(*len) * sizeof(Contact));
}
void saveContact(Contact* c, int len){
	FILE* svFile = fopen("sv.dat", "w");
	for (int i = 0;i<len;i++)
		fprintf(svFile,"%s\n%s\n%s\n", c[i].name, c[i].number, c[i].email);
	fclose(svFile);
}
int main(){
	int opt, len = 0;
	Contact *contacts = (Contact*)malloc(sizeof(Contact));
	while(1){
		menu();
		scanf("%d", &opt);
		switch(opt){
			case 1:
				char name[50], number[15], email[50];
				getchar();
				printf("Put the contact's name\n");
				fgets(name, 50, stdin);
				name[strlen(name) - 1] = '\0';
				printf("Put %s's number\n", name);
				fgets(number,15,stdin);
				number[strlen(number)- 1] = '\0';
				printf("Finally, put the %s's email\n", name);
				fgets(email,50,stdin);
				email[strlen(email) - 1] = '\0';
				contacts = (Contact*)realloc(contacts,(len + 1)*sizeof(Contact));
				contacts[len++] = createContact(name,number,email);
				break;
			case 2:
				int index = -1;
				char nameToRm[50];
				getchar();
				printf("Put the contact's name to remove\n");
				fgets(nameToRm,50,stdin);
				nameToRm[strlen(nameToRm) - 1] = '\0';
				for (int i = 0; i < len; i++){
					if(strcmp(nameToRm,contacts[i].name) == 0)
						index = i;
				}if (index > -1){
					removeContact(&contacts, index, &len);
					printf("Your contact was successfully removed\n");
				}else
					printf("Contact not found\n");
				break;
			case 3:
				getchar();
				saveContact(contacts, len);
				printf("The data was saved\n");
				break;
			case 4:
				getchar();
				char nameToLd[50], numberToLd[15], emailToLd[50];
				FILE* ldFile = fopen("sv.dat", "r");
				if (ldFile == NULL){
					printf("Can't access the save file\n");
					break;
				}
				while (fgets(nameToLd,50,ldFile) != NULL){
					nameToLd[strlen(nameToLd) - 1] = '\0';
					fgets(numberToLd,15,ldFile);
					numberToLd[strlen(numberToLd) - 1] = '\0';
					fgets(emailToLd,50,ldFile);
					emailToLd[strlen(emailToLd) - 1] = '\0';
					contacts = (Contact*)realloc(contacts,(len + 1)*sizeof(Contact));
					contacts[len++] = createContact(nameToLd,numberToLd,emailToLd);
				}
				fclose(ldFile);
				printf("Load successfully completed\n");
				break;
			case 5:
				char junk[5];
				getchar();
				printf("In pauses press Enter to continue\n");
				for (int i = 0; i<len; i++){
					printf("Contact %d\n", i+1);
					printContact(contacts[i]);
					fgets(junk,5,stdin);
				}
				break;
			case 6:
				return 0;
			default:
				printf("invalid option\n");
				break;
		}
	}
	return 0;
}
