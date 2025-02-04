#include <stdio.h>

int main(void) {

puts("a) x = 5 and y = 8");

int x = 5, y = 8;

if (y == 8)
if (x == 5)
puts("@@@@@");
else
puts("#####");
puts("$$$$$");
puts("&&&&&");


puts("\nb) x = 5 and y = 8");

if (y == 8) {
    if (x == 5)
        puts("@@@@@");
} else {
puts("#####");
puts("$$$$$");
puts("&&&&&");
}

puts("\nc) x = 5 and y = 8");

if (y == 8) {
    if (x == 5)
        puts("@@@@@");
} else {
puts("#####");
puts("$$$$$");
}
puts("&&&&&");


puts("\nd) x = 5 and y = 7");
x = 5, y = 7;
if (y == 8) {
    if (x == 5)
        puts("@@@@@");
} else {
puts("#####");
puts("$$$$$");
puts("&&&&&");
}



}
