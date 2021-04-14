/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NRDeviceCollectionDiff, NRDeviceCollectionHistory, NRMutableDeviceCollection, NRPBDeviceCollectionHistoryEntry;

@interface NRDeviceCollectionHistoryEntry : NSObject <NSSecureCoding, NSCopying> {

	unsigned _switchIndex;
	unsigned long long _index;
	NSDate* _date;
	NRDeviceCollectionDiff* _diff;
	NRDeviceCollectionHistory* _historyManager;

}

@property (nonatomic,readonly) unsigned long long index; 
@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) NRDeviceCollectionDiff * diff; 
@property (nonatomic,readonly) NRMutableDeviceCollection * state; 
@property (nonatomic,readonly) unsigned switchIndex; 
@property (nonatomic,readonly) NRPBDeviceCollectionHistoryEntry * protobuf; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(NRMutableDeviceCollection *)state;
-(unsigned long long)index;
-(NRDeviceCollectionDiff *)diff;
-(NRPBDeviceCollectionHistoryEntry *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(unsigned)switchIndex;
-(id)initWithHistory:(id)arg1 index:(unsigned long long)arg2 date:(id)arg3 diff:(id)arg4 switchIndex:(unsigned)arg5 ;
@end

