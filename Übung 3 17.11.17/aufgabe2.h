//aufgabe2.h
//Übung 3 Aufgabe 2 GIP a und b
//Felix Fleisch Gruppe Die. 14-18 170945

#include <stdio.h>

#define begin {
#define end }
#define then
#define do

int main(void)
	begin
		int x, y, z;
		scanf("%d", &x);
		scanf("%d", &y);
		z = 0;
		while (x > 0) do
			begin
				if (x % 2 != 0) then
					begin
						z = z + y;
					end
				x = x / 2;
				y = y * 2;
			end
		printf("%d\n", z);
		return 0;
	end