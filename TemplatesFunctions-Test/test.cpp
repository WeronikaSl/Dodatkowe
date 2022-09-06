#include "pch.h"
#include "../TemplatesFunctions/Functions.hpp"

TEST(PushToVec, Push_IsVariableAdded_ReturnSizeOfVec)
{
	EXPECT_EQ(1, (pushToVec(1)).size());
}

TEST(PushToVec, Push_IsStringAdded_ReturnSizeOfVec)
{
	EXPECT_EQ(1, (pushToVec("hi")).size());
}