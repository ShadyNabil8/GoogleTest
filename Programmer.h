#ifndef PROGRAMMER_H
#define PROGRAMMER_H

#pragma once
#include <iostream>
#include <gtest/gtest.h>
#include "Student.h"
class Programmer : public testing::Test
{
public:
    Student s1;
    Programmer();
    ~Programmer();
    // Sets up the test fixture.
    // These virtual function are virtual, so the should be overrided
    void SetUp() override
    {
        s1.score = 100;
        s1.name = "Shady";
    }
    // Tears down the test fixture.
    void TearDown() override
    {
    }

private:
};

#endif