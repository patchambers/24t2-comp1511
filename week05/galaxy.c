// part1_galaxy.c
//
// Pat Chambers (z5264801), 24/6/24
//
// This program is a simple game that allows the user to build a galaxy. 
// The user can place stars, planets, and nebulae in the galaxy.

#include <stdio.h>

#define SIZE 5
#define NEBULA_POINTS -10

enum entity {
    STAR,
    PLANET,
    NEBULA,
    SPACESHIP,
    EMPTY,
};

struct celestial_body {
    enum entity entity;
    int points;
};

void print_map(struct celestial_body galaxy[SIZE][SIZE]);
void initialise_galaxy(struct celestial_body galaxy[SIZE][SIZE]);
void scan_planets_nebulae(struct celestial_body galaxy[SIZE][SIZE]);
void scan_player_position(struct celestial_body galaxy[SIZE][SIZE]);
void scan_stars(struct celestial_body galaxy[SIZE][SIZE]);

int main(void) {
    struct celestial_body galaxy[SIZE][SIZE];

    // Initialize the galaxy
    initialise_galaxy(galaxy);


    // Place the planets and nebulae in the galaxy
    scan_planets_nebulae(galaxy);

    // Place the player in the galaxy
    scan_player_position(galaxy);

    // Place the stars in the galaxy
    scan_stars(galaxy);

    // Print the map
    print_map(galaxy);

    return 0;
}

// Function prints the map of the galaxy
// 
// Parameters:
// - galaxy: the 2D array representing the galaxy
//
// returns: nothing
void print_map(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("\n---------------------\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("|");
            if (galaxy[i][j].entity == SPACESHIP) {
                printf(" X ");
            } else if (galaxy[i][j].entity == EMPTY) {
                printf("   ");
            } else if (galaxy[i][j].entity == STAR) {
                printf(" * ");
            } else if (galaxy[i][j].entity == PLANET) {
                printf(" o ");
            } else if (galaxy[i][j].entity == NEBULA) {
                printf(" # ");
            }
        }
        printf("|\n");
        printf("---------------------\n");
    }
}


void initialise_galaxy(struct celestial_body galaxy[SIZE][SIZE]) {

    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            galaxy[row][col].entity = EMPTY;
            galaxy[row][col].points = NEBULA_POINTS;
        }
    }
}


void scan_planets_nebulae(struct celestial_body galaxy[SIZE][SIZE]) {

    printf("Enter planets and nebulae:\n");
    char input;
    scanf(" %c", &input);
    while (input != 'q') {
        if (input == 'p') {
            // Scan planet details and add to galaxy
            int row;
            int col;
            int points;
            scanf("%d %d %d", &row, &col, &points);
            galaxy[row][col].entity = PLANET;
            galaxy[row][col].points = points;
        } else if (input == 'n') {
            // Scan nebula details and add to galaxy
            int row;
            int col;
            scanf("%d %d", &row, &col);
            galaxy[row][col].entity = NEBULA;
        }

        scanf(" %c", &input);
    }
}

void scan_player_position(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("Enter the starting position of the player: ");
    int row;
    int col;
    scanf("%d %d", &row, &col);
    if (galaxy[row][col].entity != EMPTY) {
        printf("Invalid starting position!\n");
        printf("Re-enter starting position: \n");
        // Rescan starting coordinates
        scanf("%d %d", &row, &col);
    }
    galaxy[row][col].entity = SPACESHIP;
}


void scan_stars(struct celestial_body galaxy[SIZE][SIZE]) {
    printf("Enter the position and points of the star(s):\n");
    int star_row;
    int star_col; 
    int points;
    while (scanf("%d %d %d", &star_row, &star_col, &points) == 3) {
        galaxy[star_row][star_col].entity = STAR;
        galaxy[star_row][star_col].points = points;
    }
}