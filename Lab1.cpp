#include <vector>

// Перечисление направлений движений
enum Direction {
    UP,
    DOWN,
    LEFT,
    RIGHT
};

// Координаты на игровом поле
struct Coordinate {
    int x;
    int y;
};

// Для создания ячеек
struct GameCell {
    Coordinate position;
    bool isOccupied; // будет проверяться занята ячейка или нет
    
};

// Структура для представления змейки
struct Snake {
    std::vector<Coordinate> body; // Данамичесий вектор координат для тела змейки
    Direction direction; // Направление движения змейки
    int length;
};

// Игровое поле
struct GameBoard {
    int width;
    int height;
    std::vector<GameCell> cells; // Вектор ячеек игрового поля
    Snake snake;
};

int main() {

    return 0;
}
