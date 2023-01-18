//
//  random.c
//  
//
//  Created by Gia Maio on 1/18/23.
//

#include "random.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/* seed the randomizer */
int randchar(){
  return ((rand() % ('Z' + 1 - 'A') + 'A'));
}
