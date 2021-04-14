/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGImage* CGImageRef;

typedef struct {
	int field1;
	CGSize field2;
	CGRect field3;
	CGRect field4;
	unsigned field5;
	int field6;
	int field7;
	double field8[4];
	double field9[4];
	unsigned field10;
} SCD_Struct_PL3;

typedef struct _NSZone* NSZoneRef;

typedef struct sqlite3* sqlite3Ref;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct CGContext* CGContextRef;

typedef struct os_unfair_recursive_lock_s {
	os_unfair_lock_s ourl_lock;
	unsigned ourl_count;
} os_unfair_recursive_lock_s;

typedef struct __CFString* CFStringRef;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct CLLocationCoordinate2D {
	double latitude;
	double longitude;
} CLLocationCoordinate2D;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_PL14;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct CGImageMetadata* CGImageMetadataRef;

typedef struct CGImageDestination* CGImageDestinationRef;

typedef struct {
	A field1;
	unsigned field2;
	A field3;
	unsigned field4;
	A field5;
	unsigned field6;
	A field7;
	unsigned field8;
} SCD_Struct_PL18;

typedef const struct __CFArray* CFArrayRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct sqlite3_intarray* sqlite3_intarrayRef;

typedef struct __CFSet* CFSetRef;

typedef struct {
	long long field1;
	long long field2;
} SCD_Struct_PS23;

typedef struct PLPrimaryDataStore_ReferenceFileStrategy_KeyStruct_V1 {
	unsigned strategy : 8;
	unsigned version : 2;
	unsigned resourceType : 5;
} PLPrimaryDataStore_ReferenceFileStrategy_KeyStruct_V1;

typedef struct atomic_flag {
	AB _Value;
} atomic_flag;

typedef struct __CFStringTokenizer* CFStringTokenizerRef;

typedef struct {
	_ field1;
	_ field2;
	CFString field3;
	long long field4;
	t field5;
	o field6;
	k field7;
	e field8;
	n field9;
	O field10;
	u field11;
	t field12;
	p field13;
	u field14;
	t field15;
	_ field16;
	t field17;
	unsigned short field18;
	unsigned short field19;
	long long field20;
} SCD_Struct_PS27;

typedef struct {
	long long location;
	long long length;
} SCD_Struct_PS28;

typedef struct {
	int field1;
	int field2;
} SCD_Struct_PL29;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct _FigCascadeContext* FigCascadeContextRef;

typedef struct {
	unsigned val[8];
} SCD_Struct_PL32;

typedef struct PLPrimaryDataStoreKeyStrategy_FilePath_KeyStruct_V1 {
	unsigned strategy : 8;
	unsigned version : 2;
	unsigned relation : 3;
} PLPrimaryDataStoreKeyStrategy_FilePath_KeyStruct_V1;

typedef struct PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1 {
	unsigned strategy : 8;
	unsigned version : 2;
	unsigned resourceVersion : 2;
	unsigned resourceType : 5;
	unsigned recipeClass : 4;
	unsigned recipeVariationID : 15;
	unsigned isDerivative : 1;
	unsigned extensionCasing : 2;
	unsigned fileType : 8;
} PLPrimaryDataStore_UniformFileStrategy_KeyStruct_V1;

typedef struct fsid {
	int val[2];
} fsid;

typedef struct FigPhotoDecompressionContainer* FigPhotoDecompressionContainerRef;

typedef struct UDateIntervalFormat* UDateIntervalFormatRef;

typedef struct __CFLocale* CFLocaleRef;

typedef struct {
	char* field1;
	int field2;
} SCD_Struct_PL39;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_PF40;

typedef struct {
	SCD_Struct_PL14 field1;
	SCD_Struct_PL14 field2;
} SCD_Struct_PL41;

typedef struct {
	AI imageCacheHitCount;
	AI imageCacheMissCount;
	AI videoComplementCacheHitCount;
	AI videoComplementCacheMissCount;
} SCD_Struct_PL42;

typedef struct PLThumbnailDataStoreKeyStruct_V1 {
	unsigned version : 2;
	unsigned type : 3;
	unsigned isCurated : 1;
	unsigned index : 27;
} PLThumbnailDataStoreKeyStruct_V1;

typedef struct {
	unsigned payloadLength : 1;
	unsigned entryType : 1;
	unsigned payloadCRC : 1;
	unsigned payloadVersion : 1;
} SCD_Struct_PL44;

