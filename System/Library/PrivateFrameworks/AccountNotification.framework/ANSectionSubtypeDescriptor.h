/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AccountNotification.framework/AccountNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ANSectionSubtypeDescriptor : NSObject <NSSecureCoding> {

	BOOL _allowsAddingToLockScreenWhenUnlocked;
	NSString* _accountTypeID;
	long long _subtype;
	NSString* _fullUnlockActionLabel;

}

@property (nonatomic,readonly) NSString * accountTypeID;                             //@synthesize accountTypeID=_accountTypeID - In the implementation block
@property (assign,nonatomic) long long subtype;                                      //@synthesize subtype=_subtype - In the implementation block
@property (assign,nonatomic) BOOL allowsAddingToLockScreenWhenUnlocked;              //@synthesize allowsAddingToLockScreenWhenUnlocked=_allowsAddingToLockScreenWhenUnlocked - In the implementation block
@property (nonatomic,copy) NSString * fullUnlockActionLabel;                         //@synthesize fullUnlockActionLabel=_fullUnlockActionLabel - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)subtype;
-(void)setSubtype:(long long)arg1 ;
-(NSString *)fullUnlockActionLabel;
-(BOOL)allowsAddingToLockScreenWhenUnlocked;
-(void)setFullUnlockActionLabel:(NSString *)arg1 ;
-(void)setAllowsAddingToLockScreenWhenUnlocked:(BOOL)arg1 ;
-(NSString *)accountTypeID;
-(id)initForAccountWithType:(id)arg1 ;
@end
