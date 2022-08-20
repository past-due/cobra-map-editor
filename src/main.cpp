#include <stdio.h>

#include "raylib.h"

int main() {
	InitWindow(800, 450, "raylib [core] example - basic window");
	SetTargetFPS(85);
	SetWindowMonitor(0);

	while(!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(RAYWHITE);
		DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
		EndDrawing();
	}

	CloseWindow();

	return 0;
}