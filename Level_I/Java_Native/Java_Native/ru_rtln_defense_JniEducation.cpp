#pragma once
#include <iostream>
#include <string>
#include "ru_rtln_defense_JniEducation.h"


JNIEXPORT void JNICALL Java_ru_rtln_defense_HelloWorld_print(JNIEnv* env , jobject obj)
{
	std::cout << "Hello World!\n";
	return;
}

JNIEXPORT jstring JNICALL Java_ru_rtln_defense_JniEducation_getLine(JNIEnv* env, jobject obj, jstring prmt)
{
	std::string buf;
	const char* str;
	str = env->GetStringUTFChars(prmt, NULL);
	if (str == NULL)
	{
		return NULL; /* OutOfMemoryError already thrown */
	}
	std::cout << str;
	env->ReleaseStringUTFChars(prmt, str);
	/* We assume here that the user does not type more than
	* 127 characters */
	getline(std::cin, buf);
	return env->NewStringUTF(buf.c_str());
}