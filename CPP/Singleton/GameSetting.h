#ifndef SINGLETON_GAMESETTING_H
#define SINGLETON_GAMESETTING_H
class GameSetting{
    static GameSetting* _instance;
    int _brightness;
    int _width;
    int _height;
    GameSetting() : _width(786), _height(1300), _brightness(75){}
    // all constructors should be private or public(iff you want to allow inheritance)

public:
    static GameSetting* getInstace() {
        if(_instance == NULL)
            _instance = new GameSetting();
        return _instance;
    }
    void setWidth(int width) {_width = width;}
    void setHeight(int height) {_height = height;}
    void setBrighness(int brightness) {_brightness = brightness;}

    int getWidth() {return _width;}
    int getHeight() {return _height;}
    int getBrightness() {return _brightness;}
    void displaySetting() {
        std::cout << "brightness: " << _brightness << std::endl;
        std::cout << "height: " << _height << std::endl;
        std::cout << "width: " << _width << std::endl << std::endl;
    }
};
#endif //SINGLETON_GAMESETTING_H
