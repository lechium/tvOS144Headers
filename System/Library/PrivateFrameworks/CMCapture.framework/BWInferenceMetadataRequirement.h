/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWInferenceDataRequirement.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface BWInferenceMetadataRequirement : BWInferenceDataRequirement <NSCopying> {

	short _mappingOption;
	NSArray* _metadataKeys;

}

@property (nonatomic,copy,readonly) NSArray * metadataKeys;              //@synthesize metadataKeys=_metadataKeys - In the implementation block
@property (nonatomic,readonly) short mappingOption;                      //@synthesize mappingOption=_mappingOption - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(NSArray *)metadataKeys;
-(short)mappingOption;
-(id)initWithMetadataKeys:(id)arg1 mappingOption:(short)arg2 ;
-(id)initWithMetadataRequirement:(id)arg1 ;
-(id)initWithMetadataKeys:(id)arg1 ;
@end

