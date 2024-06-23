#include <stdio.h>
#include <cs50.h>

void draw_triangle(int n);
void draw_triangle_reverse(int n);

int main(void)
{
    int n = get_int("Height: ");
    draw_triangle(n);
}

void draw_triangle(int n)
{
    if(n <= 0) return;

    draw_triangle(n - 1); 

    for(int i=0; i < n; i++){
        printf("#");
    }
    printf("\n");
}

void draw_triangle_reverse(int n)
{
    if(n <= 0) return;
    
    for(int i=0; i < n; i++){
        printf("#");
    }
    printf("\n");
    
    draw_triangle(n - 1); 
}