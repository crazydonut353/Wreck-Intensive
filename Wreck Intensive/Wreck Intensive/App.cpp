#include <SFML/Graphics.hpp>

int main()
{
    // Create a window with a size of 800x600 pixels and a title
    sf::RenderWindow window(sf::VideoMode(800, 600), "Wreck Intensive");

    // Create a circle shape to display
    sf::CircleShape shape(50);  // Radius of 50 pixels
    shape.setFillColor(sf::Color::Green);  // Set color to green
    shape.setPosition(375, 275);  // Set initial position of the circle

    // Game loop: keep running the program as long as the window is open
    while (window.isOpen())
    {
        // Event handling
        sf::Event event;
        while (window.pollEvent(event))
        {
            // If the user closes the window, break out of the loop
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear the window with a black color
        window.clear(sf::Color::Black);

        // Draw the circle shape on the window
        window.draw(shape);

        // Display the contents of the window
        window.display();
    }

    return 0;
}
