/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct CGPath* CGPathRef;

typedef struct __CTFont* CTFontRef;

typedef struct {
	CGSize field1;
} SCD_Struct_CC2;

typedef struct {
	CGSize field1;
	CGSize field2;
	double field3;
	double field4;
	double field5;
} SCD_Struct_CC3;

typedef struct CGColor* CGColorRef;

typedef struct CGContext* CGContextRef;

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

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct {
	double field1;
	double field2;
	BOOL field3;
} SCD_Struct_CC10;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
	BOOL field5;
} SCD_Struct_CC11;

typedef struct _compressed_pair<unsigned long, std::__1::allocator<CCVegaAccessibilityHelperState> > {
	unsigned long long __value_;
} compressed_pair<unsigned long, std::__1::allocator<CCVegaAccessibilityHelperState> >;

typedef struct _compressed_pair<CCVegaAccessibilityHelperState **, std::__1::allocator<CCVegaAccessibilityHelperState *> > {
	/*function pointer*/void* __value_;
} compressed_pair<CCVegaAccessibilityHelperState **, std::__1::allocator<CCVegaAccessibilityHelperState *> >;

typedef struct _split_buffer<CCVegaAccessibilityHelperState *, std::__1::allocator<CCVegaAccessibilityHelperState *> > {
	/*function pointer*/void* __first_;
	/*function pointer*/void* __begin_;
	/*function pointer*/void* __end_;
	compressed_pair<CCVegaAccessibilityHelperState **, std::__1::allocator<CCVegaAccessibilityHelperState *> > __end_cap_;
} split_buffer<CCVegaAccessibilityHelperState *, std::__1::allocator<CCVegaAccessibilityHelperState *> >;

typedef struct deque<CCVegaAccessibilityHelperState, std::__1::allocator<CCVegaAccessibilityHelperState> > {
	split_buffer<CCVegaAccessibilityHelperState *, std::__1::allocator<CCVegaAccessibilityHelperState *> > __map_;
	unsigned long long __start_;
	compressed_pair<unsigned long, std::__1::allocator<CCVegaAccessibilityHelperState> > __size_;
} deque<CCVegaAccessibilityHelperState, std::__1::allocator<CCVegaAccessibilityHelperState> >;

typedef struct stack<CCVegaAccessibilityHelperState, std::__1::deque<CCVegaAccessibilityHelperState, std::__1::allocator<CCVegaAccessibilityHelperState> > > {
	deque<CCVegaAccessibilityHelperState, std::__1::allocator<CCVegaAccessibilityHelperState> > c;
} stack<CCVegaAccessibilityHelperState, std::__1::deque<CCVegaAccessibilityHelperState, std::__1::allocator<CCVegaAccessibilityHelperState> > >;

typedef struct {
	CGPoint origin;
	BOOL ariaHidden;
} SCD_Struct_CC17;

typedef struct CGImage* CGImageRef;

typedef struct {
	double field1;
	double field2;
	double field3;
	int field4;
	int field5;
} SCD_Struct_CC19;

