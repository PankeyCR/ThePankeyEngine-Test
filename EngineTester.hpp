#pragma once

#include "TestRegistry.hpp"
#include "DataStructure_PrimitiveArrayRawPointerMap_Testing.hpp"
#include "DataStructure_DefaultSettings_Testing.hpp"
#include "Type_Array_Testing.hpp"

using namespace pankey::Library::Print;
using namespace pankey::Utility::Test;

void Errors(int a_error_code, const CharPointer& a_result){
    println(a_result);
}

void Result(const CharPointer& i_result){
    print("Test result: ");
    println(i_result);
}

void TestRun(){
    println("Test started.");
    TestRegistry& i_test_registry = pankey_test_registry();
    TestRunner i_test_runner;

    i_test_registry.run(i_test_runner);
    i_test_runner.errors(Errors);
    i_test_runner.result(Result);

    println("Test complete.");
}