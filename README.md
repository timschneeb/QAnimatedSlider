# QAnimatedSlider
Extended slider widget with animation capabilities

See the `QAnimatedSlider.h` for more detailed documentation.

## Example
```c++
QAnimatedSlider s;
s.setDuration(350);
w.setMaximum(100);
w.setMinimum(0);
w.show();

//1000ms after startup: Animate slider movement from 0 to 50
QTimer::singleShot(1000, [&]{
    w.setValue(50,true);
});

//1200ms after startup: Cancel previous animation and animate slider movement to 30
QTimer::singleShot(1200, [&]{
    w.setValue(10,true);
});
```
## Demo
![GIF](demo.gif)

____

Check my other Qt widgets/add-ons out: <https://timschneeberger.me/qt>
