#pragma once
#include <string>

/**
 * Custom exception to note when shared memory is not initialized and can not be used by a getter.
 */
class SharedMemoryHandlerUnintializedException : public std::exception {
   public:
    SharedMemoryHandlerUnintializedException(std::string s) : s_(s){};
    std::string what() { return "Shared handler data uninitialized: " + s_; }

   private:
    std::string s_;
};

/**
 * Custom exception to note a goal has not been reached.
 */
class GoalNotReachedException : public std::exception {
   public:
    GoalNotReachedException(std::string s) : s_(s){};
    std::string what() { return "Goal not reached: " + s_; }

   private:
    std::string s_;
};