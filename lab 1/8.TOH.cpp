#include <stdio.h>
void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        printf(" Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    // Move n-1 disks from source to auxiliary
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Move nth disk from source to destination
    printf(" Move disk %d from %c to %c\n", n, source, destination);

    // Move n-1 disks from auxiliary to destination
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int n;

    printf(" Enter the number of disks: ");
    scanf("%d", &n);
	printf("\t***TOWER OF HONOI***\n");
    printf(" The moves involved are:\n");
    towerOfHanoi(n, 'A', 'B', 'C');  // A = Source, B = Auxiliary, C = Destination

    return 0;
}

