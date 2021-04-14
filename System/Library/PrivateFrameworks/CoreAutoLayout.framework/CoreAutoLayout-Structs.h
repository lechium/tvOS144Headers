/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSISEngine;

typedef struct {
	unsigned value;
} SCD_Struct_NS0;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	/*function pointer*/void* values;
	int count;
	unsigned capacity;
} SCD_Struct_NS2;

typedef struct {
	SCD_Struct_NS2 heap;
	/*function pointer*/void* values;
	unsigned count;
	unsigned tombstones;
	unsigned size;
	unsigned short grow_shift;
} SCD_Struct_NS3;

typedef struct {
	/*function pointer*/void* values;
	unsigned short count;
	unsigned short capacity;
	unsigned key;
	unsigned heap_position;
} SCD_Struct_NS4;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct {
	/*function pointer*/void* ;
	unsigned long long _data;
	Q) _buckets;
	unsigned _bucketCount;
} SCD_Struct_NS6;

typedef struct {
	/*function pointer*/void* blocks;
	unsigned long long blocksCount;
	unsigned long long blocksCapacity;
	SCD_Struct_NS6 freeIndexes;
} SCD_Struct_NS7;

typedef struct {
	NSISEngine* engine;
	/*function pointer*/void* storage;
} SCD_Struct_NS8;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned field3;
	unsigned field4;
	unsigned field5;
	/*function pointer*/void* field6;
} SCD_Struct_NS9;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_NS10;

typedef struct {
	unsigned long long aligner;
} SCD_Struct_NS11;

typedef struct {
	id stored_extern_marker;
	/*function pointer*/void* slab;
	unsigned long long capacity;
} SCD_Struct_NS12;

typedef struct {
	unsigned short inline_capacity;
	unsigned var_count;
	double constant;
	/*function pointer*/void* data;
	SCD_Struct_NS12 extern_data;
	SCD_Struct_NS11 inline_slab;
	unsigned char padding[48];
} SCD_Struct_NS13;

typedef struct {
	long long field1;
	id field2;
	id field3;
} SCD_Struct_NS14;

