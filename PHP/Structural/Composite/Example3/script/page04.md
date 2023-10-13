[home](./page01.md)

[back](./page03.md)

Output

In the browser at index.php, you should see the text "Christmas Tree Lights: " followed by four asterisks. The asterisks will be colored (red, green, and blue) symbolizing the lights on the tree. Note that the color may not show well on some backgrounds, so you may need to adjust the HTML/CSS for visibility.
Teaching Points

    Single Responsibility Principle: Light only handles properties/behaviors related to a single light, while LightString handles collections/aggregations of lights.

    Composite Pattern: Demonstrated by having LightString able to contain both Light objects and other LightString objects, allowing you to compose nested structures of lights.

    Uniformity: Both Light and LightString have the method shine() enabling them to be used interchangeably in a manner in index.php, showcasing the unified interface usage facilitated by the Composite Pattern.

    Code Organization: By segregating classes into different files and including them as needed, code organization and maintenance become easier.

Feel free to modify the examples for clarity, practicality, and according to the nuances of your teaching style and curriculum. This simplistic example is a good starting point to elaborate on the Composite Design Pattern.



[page 5](./page05.md)
