/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDuet/CoreDuet-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HomeControlAnalysisPETCoreBehaviorAnalysisEvent : PBCodable <NSCopying> {

	double _timestamp;
	NSString* _accessoryUUID;
	NSString* _associatedAccessoryUUIDs;
	NSString* _characteristicType;
	NSString* _eventStreamTitle;
	unsigned _homeOccupancy;
	NSString* _homeUUID;
	NSString* _homekitSource;
	NSString* _microlocation;
	NSString* _sceneUUID;
	NSString* _serviceType;
	NSString* _serviceUUID;
	NSString* _value;
	SCD_Struct_DK5 _has;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
@end

