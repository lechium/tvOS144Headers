/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface SFUnlockState : NSObject <NSSecureCoding> {

	NSNumber* _unlockEnabled;
	NSNumber* _remotePasscodeEnabled;

}

@property (readonly) NSNumber * unlockEnabled;                      //@synthesize unlockEnabled=_unlockEnabled - In the implementation block
@property (readonly) NSNumber * remotePasscodeEnabled;              //@synthesize remotePasscodeEnabled=_remotePasscodeEnabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)unlockEnabled;
-(id)initWithUnlockEnabled:(id)arg1 remotePasscodeEnabled:(id)arg2 ;
-(NSNumber *)remotePasscodeEnabled;
@end

