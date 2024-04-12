

#include <raylib.h>
#include <stdio.h>
#include <unistd.h>

int main(void) {
	InitWindow(700, 700, "test");
    int x = 0;
    Color c;
    c.a = 255;
    c.r = 0;
    c.g = 0;
    c.b = 255;
	while (!WindowShouldClose())
    {
        usleep(1000);
        BeginDrawing();
        if (x >= 700) {
            x = 0;
            ClearBackground(RAYWHITE);
        }
        x++;
        printf("%d\n", x);
        DrawPixel(x, 700 / 2, c);
        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
        if (IsKeyPressed(KEY_ESCAPE))
            break ;
        EndDrawing();
    }

    CloseWindow();
	return (0);
}
//make PLATFORM=PLATFORM_DESKTOP RAYLIB_LIBTYPE=SHARED
