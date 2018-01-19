# ifndef CHECHBOX_HPP
# define CHECHBOX_HPP


# include "component.hpp"



class CheckBox : public Component {
    private:
        bool pressed;
        static DinString typeName;

    public:

        CheckBox () {
            X = 0;
            Y = 0;
            pressed = false;
        }

        CheckBox (double pX, double pY, bool pPressed) {
            X = pX;
            Y = pY;
            pressed = pPressed;
        }

        DinString getTypeName () const {
            return typeName;
        }

        void printComponent () const {
            Component::printComponent();
            cout << "Pressed je tenutno " << ((pressed) ? ("Pritisnut") : ("Pusten")) << endl;
        }

        void setPressed (bool b) {
            pressed = b;
        }

        bool getPressed () const {
            return pressed;
        }
};


# endif // CHECHBOC_HPP
