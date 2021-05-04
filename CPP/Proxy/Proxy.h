//
// Created by ray on 8/25/20.
//

#ifndef PROXY_PROXY_H
#define PROXY_PROXY_H
#include "RealSubject.h"

class Proxy : public Subject {
    /**
     * @var RealSubject
     */
private:
    RealSubject *real_subject_;

    bool CheckAccess() const {
        // Some real checks should go here.
        std::cout << "Checking access prior to firing a real request.\n";
        return true;
    }
    void LogAccess() const {
        std::cout << "Logging the time of request.\n";
    }

    /**
     * The Proxy maintains a reference to an object of the RealSubject class. It
     * can be either lazy-loaded or passed to the Proxy by the client.
     */
public:
    Proxy(RealSubject *real_subject) : real_subject_(new RealSubject(*real_subject)) {
    }

    ~Proxy() {
        delete real_subject_;
    }
    /**
     * The most common applications of the Proxy pattern are lazy loading,
     * caching, controlling the access, logging, etc. A Proxy can perform one of
     * these things and then, depending on the result, pass the execution to the
     * same method in a linked RealSubject object.
     */
    void Request() const override {
        if (this->CheckAccess()) {
            this->real_subject_->Request();
            this->LogAccess();
        }
    }
};


#endif //PROXY_PROXY_H
