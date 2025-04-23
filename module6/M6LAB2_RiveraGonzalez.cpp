// CSC 134
// M6LAB2
// Luis Rivera Gonzalez
// 4/23/25
// changing map/rooms to jungle

#include <iostream>
#include <string>
using namespace std;

// Define constants for directions
enum Direction {
    NORTH = 0,
    EAST = 1,
    SOUTH = 2,
    WEST = 3,
    NUM_DIRECTIONS = 4
};

// Direction names
const string DIRECTION_NAMES[NUM_DIRECTIONS] = {
    "north", "east", "south", "west"
};

// Define constants for rooms
enum Room {
    CAMPSITE = 0,
    RIVERBANK,
    ANCIENT_TEMPLE,
    WATERFALL,
    CAVE_ENTRANCE,
    TREEHOUSE,
    SWAMP,
    JUNGLE_RUINS,
    NUM_ROOMS
};

int main() {
    // Room names
    string roomNames[NUM_ROOMS] = {
        "Jungle Campsite",
        "Riverbank",
        "Ancient Temple",
        "Waterfall",
        "Cave Entrance",
        "Treehouse",
        "Swamp",
        "Jungle Ruins"
    };

    // Room descriptions
    string roomDescriptions[NUM_ROOMS] = {
        "A small clearing in the jungle with a flickering campfire and supplies.",
        "A flowing river teeming with life, surrounded by lush jungle.",
        "Vines and moss cover the ancient stones of a forgotten civilization.",
        "A roaring waterfall cascades into a misty pool below.",
        "A cold, dark cave mouth carved into a cliffside.",
        "A wooden treehouse high above the jungle floor, offering a broad view.",
        "A murky swamp buzzing with insects and strange sounds.",
        "Crumbled walls and statues hint at a long-lost jungle city."
    };

    // Connections array
    int connections[NUM_ROOMS][NUM_DIRECTIONS];

    // Initialize all connections to -1
    for (int i = 0; i < NUM_ROOMS; i++) {
        for (int j = 0; j < NUM_DIRECTIONS; j++) {
            connections[i][j] = -1;
        }
    }

    // Define room connections
    connections[CAMPSITE][NORTH] = RIVERBANK;
    connections[CAMPSITE][EAST] = ANCIENT_TEMPLE;
    connections[CAMPSITE][WEST] = WATERFALL;

    connections[RIVERBANK][SOUTH] = CAMPSITE;
    connections[RIVERBANK][NORTH] = TREEHOUSE;

    connections[ANCIENT_TEMPLE][WEST] = CAMPSITE;
    connections[ANCIENT_TEMPLE][SOUTH] = CAVE_ENTRANCE;
    connections[ANCIENT_TEMPLE][EAST] = JUNGLE_RUINS;

    connections[WATERFALL][EAST] = CAMPSITE;

    connections[CAVE_ENTRANCE][NORTH] = ANCIENT_TEMPLE;

    connections[TREEHOUSE][SOUTH] = RIVERBANK;
    connections[TREEHOUSE][EAST] = SWAMP;

    connections[SWAMP][WEST] = TREEHOUSE;

    connections[JUNGLE_RUINS][WEST] = ANCIENT_TEMPLE;

    // Game state
    int currentRoom = CAMPSITE;
    bool gameRunning = true;

    // Game loop
    while (gameRunning) {
        cout << "\nYou are at the " << roomNames[currentRoom] << "." << endl;
        cout << roomDescriptions[currentRoom] << endl;

        // Show available exits
        cout << "Paths: ";
        bool hasExits = false;
        for (int dir = 0; dir < NUM_DIRECTIONS; dir++) {
            if (connections[currentRoom][dir] != -1) {
                cout << DIRECTION_NAMES[dir] << " ";
                hasExits = true;
            }
        }
        if (!hasExits) cout << "none";
        cout << endl;

        // Get player input
        string command;
        cout << "\nWhere do you want to go? ";
        cin >> command;

        // Movement logic
        if (command == "north" || command == "n") {
            if (connections[currentRoom][NORTH] != -1) {
                currentRoom = connections[currentRoom][NORTH];
            } else {
                cout << "You can’t go that way." << endl;
            }
        } else if (command == "east" || command == "e") {
            if (connections[currentRoom][EAST] != -1) {
                currentRoom = connections[currentRoom][EAST];
            } else {
                cout << "You can’t go that way." << endl;
            }
        } else if (command == "south" || command == "s") {
            if (connections[currentRoom][SOUTH] != -1) {
                currentRoom = connections[currentRoom][SOUTH];
            } else {
                cout << "You can’t go that way." << endl;
            }
        } else if (command == "west" || command == "w") {
            if (connections[currentRoom][WEST] != -1) {
                currentRoom = connections[currentRoom][WEST];
            } else {
                cout << "You can’t go that way." << endl;
            }
        } else if (command == "quit" || command == "q") {
            gameRunning = false;
        } else {
            cout << "I don't understand that command." << endl;
        }
    }

    cout << "Thanks for exploring the jungle!" << endl;
    return 0;
}
