#ifndef STATE_STATE_H
#define STATE_STATE_H
/**
 * The base State class declares methods that all Concrete State should
 * implement and also provides a backreference to the locContext object, associated
 * with the State. This backreference can be used by States to transition the
 * locContext to another State.
 */
class locContext;
class State {
    /**
     * @var locContext
     */
protected:
    locContext *context_;

public:
    virtual ~State() {
    }

    void set_context(locContext *context) {
        this->context_ = context;
    }

    virtual void Handle1() = 0;
    virtual void Handle2() = 0;
};


#endif //STATE_STATE_H
