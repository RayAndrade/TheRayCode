<?php

/**
 * PHP has a couple of built-in interfaces related to the Observer pattern.
 *
 * Here's what the Subject interface looks like:
 *
 * @link http://php.net/manual/en/class.splsubject.php
 *
 *     interface SplSubject
 *     {
 *         // Attach an observer to the subject.
 *         public function attach(SplObserver $observer);
 *
 *         // Detach an observer from the subject.
 *         public function detach(SplObserver $observer);
 *
 *         // Notify all observers about an event.
 *         public function notify();
 *     }
 *
 * There's also a built-in interface for Observers:
 *
 * @link http://php.net/manual/en/class.splobserver.php
 *
 *     interface SplObserver
 *     {
 *         public function update(SplSubject $subject);
 *     }
 */

/**
 * The Subject owns some important state and notifies observers when the state
 * changes.
 */
include_once ('Subject.php');
include_once ('ConcreteObserverA.php');
include_once ('ConcreteObserverB.php');



/**
 * The client code.
 */

$subject = new Subject;

$o1 = new ConcreteObserverA;
$subject->attach($o1);

$o2 = new ConcreteObserverB;
$subject->attach($o2);

$subject->someBusinessLogic();
$subject->someBusinessLogic();

$subject->detach($o2);

$subject->someBusinessLogic();
