//A union is a special data type available in C that allows to store different data types in the same memory location. 
//You can define a union with many members, but only one member can contain a value at any given time. 
//Unions provide an efficient way of using the same memory location for multiple-purpose.

union Data {
   int i;
   float f;
   char str[20];
} data;
