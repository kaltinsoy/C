#include <stdio.h>
#define SIZE 12

int main(void) {
    char maze[SIZE][SIZE];
    
    // Initialize all rows
    char *maze_data[SIZE] = {
        "############", 
        "#...#......#", 
        "..#.#......#", 
        "###.#....#.#", 
        "#....###.#.#", 
        "#####.#.#.#.",
        "#..#.#.#.#.#", 
        "##.#.#.#.#.#", 
        "#........#.#", 
        "######.###.#", 
        "#......#...#", 
        "############"  
    };
    
    // Copy the maze data (more efficient than individual assignments)
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            maze[i][j] = maze_data[i][j];
        }
    }
    
    // Print the entire maze
    printf("12x12 Maze:\n");
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf("%c", maze[i][j]);
        }
        printf("\n");
    }

    return 0;
}
