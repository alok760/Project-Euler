#include<stdio.h>

char e[20];

void encrypt(char a[], int d) {
int i = 0;
while (a[i] != '\0') {
	if (a[i] >= 'A' && a[i] <= 'Z') {
		e[i] = ((a[i] + d - 'A' + 26) % 26) + 'A';
	}
	else if (a[i] >= 'a' && a[i] <= 'z') { 
		e[i] = ((a[i] + d - 'a' + 26) % 26) + 'a';
	}
	i++;
}
printf("Encrypted text = %s\n", e);
}

void decrypt(char a[], int d) {
int i = 0;
while (a[i] != '\0') {
	if (a[i] >= 'A' && a[i] <= 'Z') {
		e[i] = ((a[i] - d - 'A' + 26) % 26) + 'A';
	}
	else if (a[i] >= 'a' && a[i] <= 'z') {
		e[i] = ((a[i] - d - 'a' + 26) % 26) + 'a';
	}
	i++;
}
printf("Decrypted text = %s\n", e);
}

void main() {
encrypt("ElDorado", 5);
decrypt(e, 5);
}
