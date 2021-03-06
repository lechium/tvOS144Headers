/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface MLAppleImageFeatureExtractorObjectPrintParameters : NSObject {

	unsigned long long _objectPrintVersion;
	NSArray* _expectedShapes;
	NSArray* _expectedKeys;

}

@property (readonly) unsigned long long objectPrintVersion;              //@synthesize objectPrintVersion=_objectPrintVersion - In the implementation block
@property (readonly) NSArray * expectedShapes;                           //@synthesize expectedShapes=_expectedShapes - In the implementation block
@property (readonly) NSArray * expectedKeys;                             //@synthesize expectedKeys=_expectedKeys - In the implementation block
-(id)initObjectPrintParameters:(unsigned long long)arg1 expectedShapes:(id)arg2 expectedKeys:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)objectPrintVersion;
-(NSArray *)expectedShapes;
-(NSArray *)expectedKeys;
@end

