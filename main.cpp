/* Name: main.cpp
 * Author: Waleed Qawasmi
 * Used to test implementation of segment and hasher.
 */

#include <iostream>
#include <stdlib.h>
#include "hasher.h"
#include "linearsegment.h"

int main(int argc, char **argv) {
  if( argc < 3 ) {
    std::cout << "Not enough arguments.\n" << argv[0] << " <file> <block size>" << std::endl;
    return -1;
  }

  std::cout << "Running.\n" << std::endl;
  std::ifstream file (argv[1], std::ios::binary);

  // Linear segment
  LinearSegment ls(&file, atoi(argv[2]));
  LinearSegment::blockNode* head = ls.segment();

  file.close();
}
