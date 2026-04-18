import std;
enum class Color {
    Red,
    Green,
    Blue
};

const char *ColorToString(Color c) {
    switch (c) {
    case Color::Red:
        return "Red";
    case Color::Green:
        return "Green";
    case Color::Blue:
        return "Blue";
    default:
        return "none";
    }
}

/*

const char* ColorToString(Color c)
{
    switch (c)
    {
    using enum Color;
    case Red: return "Red";
    case Green: return "Green";
    case Blue: return "Blue";
    default:
        return "none";
    }
}

const char* ColorToString(Color c)
{
    switch (c)
    {
    using Color::Red;
    case Red: return "Red";
    case Color::Green: return "Green";
    case Color::Blue: return "Blue";
    default:
        return "none";
    }
}

*/

int main(int argc, char *argv[]) {
    auto color = Color{Color::Red};
    auto s = ColorToString(color);
    std::cout << s << std::endl;
}
