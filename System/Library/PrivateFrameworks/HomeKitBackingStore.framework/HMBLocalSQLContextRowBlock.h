/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class NSData;

@interface HMBLocalSQLContextRowBlock : HMFObject {

	unsigned long long _blockRow;
	unsigned long long _type;
	NSData* _optionsData;

}

@property (nonatomic,readonly) unsigned long long blockRow;              //@synthesize blockRow=_blockRow - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSData * optionsData;                     //@synthesize optionsData=_optionsData - In the implementation block
-(unsigned long long)type;
-(NSData *)optionsData;
-(id)attributeDescriptions;
-(unsigned long long)blockRow;
-(id)initWithBlockRow:(unsigned long long)arg1 type:(unsigned long long)arg2 options:(id)arg3 ;
@end

