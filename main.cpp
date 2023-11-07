//1. Создайте класс "Фигура" (Shape), который содержит методы для расчета площади и периметра фигуры.

class Shape {
public:
    virtual double calculateArea() = 0;
    virtual double calculatePerimeter() = 0;
};

//2. Создайте класс "Прямоугольник" (Rectangle), наследующийся от класса "Фигура".
//Добавьте методы для расчета диагонали и проверки, является ли прямоугольник квадратом.

class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double calculateArea() {
        return width * height;
    }

    double calculatePerimeter() {
        return 2 * (width + height);
    }

    double calculateDiagonal() {
        return sqrt(width * width + height * height);
    }

    bool isSquare() {
        return width == height;
    }
};

//3. Создайте класс "Треугольник" (Triangle), наследующийся от класса "Фигура". Добавьте метод для расчета высоты треугольника.

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double calculateArea() {
        return 0.5 * base * height;
    }

    double calculatePerimeter() {
        return 3 * base;
    }

    double calculateHeight() {
        return 2*Area/base;
    }
};

//4. Создайте класс "Круг" (Circle), наследующийся от класса "Фигура". Добавьте метод для расчета длины окружности.

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() {
        return 3.14 * radius * radius;
    }

    double calculatePerimeter() {
        return 2 * 3.14 * radius;
    }

    double calculateCircumference() {
        return 2 * 3.14 * radius;
    }
};

//5. Создайте класс "Цветная фигура" (ColoredShape), наследующийся от класса "Фигура". Добавьте поле для хранения цвета и методы для получения и установки цвета.

class ColoredShape : public Shape {
private:
    std::string color;

public:
    void setColor(std::string c) {
        color = c;
    }

    std::string getColor() {
        return color;
    }
};

//6. Создайте класс "Цветной прямоугольник" (ColoredRectangle), наследующийся от класса "Прямоугольник" и "Цветной фигуры".
//Проверьте, можно ли унаследовать классы "Прямоугольник" и "Цветной фигуры" одновременно.

class ColoredRectangle : public Rectangle, public ColoredShape {
public:
    ColoredRectangle(double w, double h) : Rectangle(w, h) {}
};

//одновременное наследование возможно

//7. Создайте класс "Студент" (Student) с полями "имя", "возраст" и "средний балл". Создайте класс "Студент-отличник" (HonorStudent),
//наследующийся от класса "Студент". Добавьте метод для проверки, является ли студент-отличником.

class Student {
private:
    std::string name;
    int age;
    float averageGrade;

public:
    Student(std::string n, int a, float g)
        : name(n), age(a), averageGrade(g) {}

};

class HonorStudent : public Student {
public:
    HonorStudent(std::string n, int a, float g)
        : Student(n, a, g) {}

     bool isHonorStudent() {
        return averageGrade = 5;
    }
};

//8. Создайте класс "Сотрудник" (Employee) с полями "имя" и "зарплата". Создайте класс "Менеджер" (Manager),
//наследующийся от класса "Сотрудник". Добавьте метод для расчета премии менеджера.

class Employee {
private:
    std::string name;
    double salary;

public:
    Employee(std::string n, double s) : name(n), salary(s) {}

    std::string getName() {
        return name;
    }

    double getSalary() {
        return salary;
    }
};

class Manager : public Employee {
public:
    Manager(std::string n, double s) : Employee(n, s) {}

std::string getName() {
        return name;
    }

    double getSalary() {
        return salary;
    }

    double calculateBonus() {
        return 0.3 * getSalary(); // Assume 30% bonus
    }
};


//9. Создайте класс "Фрукт" (Fruit) с полем "название". Создайте класс "Яблоко" (Apple), наследующийся от класса "Фрукт".
//Добавьте метод для проверки, является ли яблоко красным.

class Fruit {
protected:
    std::string name;

public:
    Fruit(const std::string& name) : name(name) {}

    const std::string& getName() const { return name; }
};

class Apple : public Fruit {
public:
    Apple(const std::string& name) : Fruit(name) {}

    bool isRed() const {
        return name == "Красное яблоко";
    }
};

//10. Создайте класс "Транспортное средство" (Vehicle) с полем "максимальная скорость". Создайте класс "Автомобиль" (Car),
//наследующийся от класса "Транспортное средство". Добавьте метод для проверки, является ли автомобиль спортивным.

class Vehicle {
protected:
    int maxSpeed;

public:
    Vehicle(int maxSpeed) : maxSpeed(maxSpeed) {}

    int getMaxSpeed() const { return maxSpeed; }
};

class Car : public Vehicle {
public:
    Car(int maxSpeed) : Vehicle(maxSpeed) {}

    bool isSport() const {
        return maxSpeed > 300;
    }
};
