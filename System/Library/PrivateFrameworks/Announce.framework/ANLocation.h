/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ANMessage.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSArray, NSNumber, NSString;

@interface ANLocation : NSObject <ANMessage, NSSecureCoding> {

	NSUUID* _homeUUID;
	NSArray* _roomUUIDs;
	NSArray* _zoneUUIDs;
	NSArray* _userUUIDs;
	NSArray* _deviceIDs;
	unsigned long long _flags;
	NSNumber* _homeLocationStatus;

}

@property (nonatomic,retain) NSArray * userUUIDs;                        //@synthesize userUUIDs=_userUUIDs - In the implementation block
@property (nonatomic,retain) NSArray * deviceIDs;                        //@synthesize deviceIDs=_deviceIDs - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                   //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSNumber * homeLocationStatus;              //@synthesize homeLocationStatus=_homeLocationStatus - In the implementation block
@property (nonatomic,copy) NSUUID * homeUUID;                            //@synthesize homeUUID=_homeUUID - In the implementation block
@property (nonatomic,retain) NSArray * roomUUIDs;                        //@synthesize roomUUIDs=_roomUUIDs - In the implementation block
@property (nonatomic,retain) NSArray * zoneUUIDs;                        //@synthesize zoneUUIDs=_zoneUUIDs - In the implementation block
@property (nonatomic,readonly) unsigned long long target; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copy;
-(unsigned long long)flags;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)target;
-(id)message;
-(id)initWithMessage:(id)arg1 ;
-(void)setFlags:(unsigned long long)arg1 ;
-(NSUUID *)homeUUID;
-(void)setDeviceIDs:(NSArray *)arg1 ;
-(NSArray *)deviceIDs;
-(void)setHomeUUID:(NSUUID *)arg1 ;
-(void)setHomeLocationStatus:(NSNumber *)arg1 ;
-(NSNumber *)homeLocationStatus;
-(NSArray *)roomUUIDs;
-(void)setRoomUUIDs:(NSArray *)arg1 ;
-(NSArray *)userUUIDs;
-(NSArray *)zoneUUIDs;
-(BOOL)containsAccessory:(id)arg1 ;
-(id)initWithHomeID:(id)arg1 ;
-(void)setZoneUUIDs:(NSArray *)arg1 ;
-(void)setUserUUIDs:(NSArray *)arg1 ;
@end

