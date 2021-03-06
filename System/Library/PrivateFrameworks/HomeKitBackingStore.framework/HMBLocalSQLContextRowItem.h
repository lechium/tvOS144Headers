/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>

@class NSData;

@interface HMBLocalSQLContextRowItem : HMFObject {

	unsigned long long _itemRow;
	NSData* _modelData;
	unsigned long long _modelEncoding;
	NSData* _externalID;
	NSData* _externalData;

}

@property (nonatomic,readonly) unsigned long long itemRow;                    //@synthesize itemRow=_itemRow - In the implementation block
@property (nonatomic,readonly) NSData * externalID;                           //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,readonly) NSData * externalData;                         //@synthesize externalData=_externalData - In the implementation block
@property (nonatomic,readonly) NSData * modelData;                            //@synthesize modelData=_modelData - In the implementation block
@property (nonatomic,readonly) unsigned long long modelEncoding;              //@synthesize modelEncoding=_modelEncoding - In the implementation block
-(id)description;
-(NSData *)externalID;
-(NSData *)externalData;
-(NSData *)modelData;
-(id)initWithItemRow:(unsigned long long)arg1 externalID:(id)arg2 externalData:(id)arg3 modelEncoding:(unsigned long long)arg4 modelData:(id)arg5 ;
-(unsigned long long)itemRow;
-(unsigned long long)modelEncoding;
-(id)initWithStatement:(sqlite3_stmtRef)arg1 returning:(unsigned long long)arg2 ;
@end

