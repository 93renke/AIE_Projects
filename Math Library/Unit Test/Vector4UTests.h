///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// File:			Vector4UTests.h
// Author:			Ian Rich
// Date Created:	2013
// Brief:			Test vector4 functions
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//guards
#ifndef _VECTOR4UTESTS_H_
#define _VECTOR4UTESTS_H_

#include "UnitTest.h"
#include "Vector4.h"
#include "CommonFunctions.h"

// tests vector equality, returns bool -------------------------------------------------------------
class V4EqualTest : public UnitTest
{
	public:
		void SetData(Vector4 a_oV1, Vector4 a_oV2, bool a_bExpResult);		
		virtual bool DoTest(); 
	
	private:
		Vector4 m_oVector1;
		Vector4 m_oVector2;
		bool m_bResult;
};


// returns magnitude of vector -------------------------------------------------------------
class V4MagnitudeTest : public UnitTest
{
	public:
		void SetData(Vector4 a_oVector, float a_fExpResult);
		virtual bool DoTest(); 
	
	private:
		Vector4 m_oVector;
		float m_fResult;
};

// normalize a vector -------------------------------------------------------------
class V4NormalizeTest : public UnitTest
{
	public:
		void SetData(Vector4 a_oVector, Vector4 a_oExpResult);
		virtual bool DoTest(); 
	
	private:
		Vector4 m_oVector;
		Vector4 m_oResult;
};

// returns a normalized version of vector -------------------------------------------------------------
class V4RetNormalizedTest : public UnitTest
{
	public:
		void SetData(Vector4 a_oVector, Vector4 a_oExpResult);
		virtual bool DoTest(); 
	
	private:
		Vector4 m_oVector;
		Vector4 m_oResult;
};

// converts rgb values to values ranging from 0 to 1 -------------------------------------------------------------
class V4RGBToFloatTest : public UnitTest
{
	public:
		void SetData(Vector4& a_rV, Vector4 a_oExpResult);
		virtual bool DoTest(); 
	
	private:
		Vector4 m_oVec, m_oResult;
};



#endif