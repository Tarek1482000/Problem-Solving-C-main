/*
 * Handle Error checking of the send data using checksum Algorithm.c
 *
 *  Created on: Sep 29, 2023
 *      Author: tarek
 */
#include <stdio.h>
typedef unsigned char   u8;
typedef unsigned short  u16;
typedef unsigned long   u32;


// Function to calculate the one's complement checksum
 u16 calculateChecksum(u8 data[], int length)
{
	 u32 sum = 0;

    // Sum all 16-bit words in the data
    for (int i = 0; i < length; i += 2)
    {
    	u16 word = ((u16)data[i] << 8) + (u16)data[i + 1];

        sum += word;
    }

    // Fold 32-bit sum to 16 bits
    while (sum >> 16)
    {
        sum = (sum & 0xFFFF) + (sum >> 16);
    }

    return (u16)(~sum); // Take one's complement of the sum
}

int main() {
    u8 data[] = {0x12, 0x34, 0x56, 0x78}; // Example data
    int length = sizeof(data) / sizeof(data[0]);

    // Calculate the checksum
    u16 checksum = calculateChecksum(data, length);

    // Print the calculated checksum
    printf("Checksum: 0x%04X\n", checksum);

    // Simulate data transmission with error
    data[2] = 0x99; // Modify a byte to introduce an error

    // Recalculate the checksum for received data
    u16 receivedChecksum = calculateChecksum(data, length);

    // Check if the received checksum matches the calculated checksum
    if (receivedChecksum == checksum)
    {
        printf("Checksum verification passed. Data is error-free.\n");
    } else
    {
        printf("Checksum verification failed. Data may have errors.\n");
    }

    return 0;
}
