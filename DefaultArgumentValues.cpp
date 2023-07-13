#include <iostream>
using namespace std;
//functtion prototypes
void print_grocery_list(int apples = 3, int oranges = 7, int mangos = 13); // DEFAULT VALUES
void modify_grocery_list();

int main()
{
    modify_grocery_list();
}


void modify_grocery_list() {


    print_grocery_list(); // WILL PRINT OUT THE DEFAULT VALUES
    print_grocery_list(5); //5 APPLES, 7 ORANGES, 13 MANGOS
    print_grocery_list(7, 11); //7 APPLES, 11 ORANGES, 13 MANGOS

}

void print_grocery_list(int apples, int oranges, int mangos) {
    cout << apples << " apples" << "\n" << oranges << " oranges" << "\n" << mangos << " mangos" << "\n\n";
}
