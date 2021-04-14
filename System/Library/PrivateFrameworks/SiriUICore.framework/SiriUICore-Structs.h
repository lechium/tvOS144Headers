/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct CATransform3D {
	double m11;
	double m12;
	double m13;
	double m14;
	double m21;
	double m22;
	double m23;
	double m24;
	double m31;
	double m32;
	double m33;
	double m34;
	double m41;
	double m42;
	double m43;
	double m44;
} CATransform3D;

typedef struct CGImage* CGImageRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct {
	long long x;
	long long y;
	long long z;
} SCD_Struct_SU6;

typedef struct {
	[4 columns];
} SCD_Struct_SU7;

typedef struct {
	SCD_Struct_SU7 projectionMatrix;
	 offsets;
	float sphereScale;
} SCD_Struct_SU8;

typedef struct {
	float value;
	float curVelocity;
	float maxAcceleration;
	float springAmount;
} SCD_Struct_SU9;

typedef struct {
	double imageHeight;
	double imageWidth;
	int frameCount;
	int fps;
	BOOL color;
	char* fileName;
} SCD_Struct_SU10;

