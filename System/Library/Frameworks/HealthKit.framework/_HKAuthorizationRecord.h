/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:17 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface _HKAuthorizationRecord : NSObject <NSCopying, NSSecureCoding> {

	long long _status;
	long long _request;
	long long _mode;
	NSDate* _anchorLimitModifiedDate;

}

@property (assign,nonatomic) long long status;                                     //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) long long request;                                  //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) long long mode;                                     //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy,readonly) NSDate * anchorLimitModifiedDate;              //@synthesize anchorLimitModifiedDate=_anchorLimitModifiedDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)recordWithStatus:(long long)arg1 request:(long long)arg2 mode:(long long)arg3 anchorLimitModifiedDate:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)request;
-(long long)status;
-(long long)mode;
-(void)setStatus:(long long)arg1 ;
-(id)_deepCopy;
-(id)initWithAuthorizationStatus:(long long)arg1 authorizationRequest:(long long)arg2 authorizationMode:(long long)arg3 anchorLimitModifiedDate:(id)arg4 ;
-(NSDate *)anchorLimitModifiedDate;
-(BOOL)requestedSharing;
-(BOOL)requestedReading;
-(BOOL)deniedSharing;
-(BOOL)deniedReading;
-(BOOL)sharingEnabled;
-(BOOL)readingEnabled;
-(BOOL)isCompatibleStatus:(long long)arg1 ;
-(id)recordWithReadingDisabled;
-(id)recordWithSharingDisabled;
@end

