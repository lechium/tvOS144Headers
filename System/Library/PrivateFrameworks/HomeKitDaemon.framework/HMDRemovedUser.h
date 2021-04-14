/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDUser, NSDate;

@interface HMDRemovedUser : HMFObject <NSSecureCoding> {

	BOOL _removalInProgress;
	HMDUser* _user;
	NSDate* _expirationDate;

}

@property (nonatomic,readonly) HMDUser * user;                              //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                     //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isRemovalInProgress) BOOL removalInProgress;              //@synthesize removalInProgress=_removalInProgress - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)removedUserWithUser:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMDUser *)user;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(BOOL)isEqualToUser:(id)arg1 ;
-(void)setRemovalInProgress:(BOOL)arg1 ;
-(id)initWithUser:(id)arg1 expiration:(id)arg2 ;
-(BOOL)isEqualToUserID:(id)arg1 ;
-(BOOL)isRemovalInProgress;
@end

