/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSDictionary;

@interface ASDRepairOptions : NSObject <NSCopying, NSSecureCoding> {

	BOOL _forceRevoke;
	BOOL _forceUpsell;
	int _fairplayStatus;
	NSString* _bundleID;
	NSString* _bundlePath;
	NSNumber* _accountDSID;
	long long _claimStyle;
	unsigned long long _exitReason;
	NSDictionary* _relaunchOptions;

}

@property (assign,nonatomic) BOOL forceRevoke;                           //@synthesize forceRevoke=_forceRevoke - In the implementation block
@property (assign,nonatomic) BOOL forceUpsell;                           //@synthesize forceUpsell=_forceUpsell - In the implementation block
@property (nonatomic,readonly) NSString * bundleID;                      //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSString * bundlePath;                    //@synthesize bundlePath=_bundlePath - In the implementation block
@property (nonatomic,readonly) NSNumber * accountDSID;                   //@synthesize accountDSID=_accountDSID - In the implementation block
@property (nonatomic,readonly) long long claimStyle;                     //@synthesize claimStyle=_claimStyle - In the implementation block
@property (assign,nonatomic) unsigned long long exitReason;              //@synthesize exitReason=_exitReason - In the implementation block
@property (assign,nonatomic) int fairplayStatus;                         //@synthesize fairplayStatus=_fairplayStatus - In the implementation block
@property (nonatomic,copy) NSDictionary * relaunchOptions;               //@synthesize relaunchOptions=_relaunchOptions - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleID;
-(NSString *)bundlePath;
-(unsigned long long)exitReason;
-(id)initWithBundleID:(id)arg1 accountIdentifier:(id)arg2 claimStyle:(long long)arg3 ;
-(NSNumber *)accountDSID;
-(long long)claimStyle;
-(id)initWithBundleID:(id)arg1 ;
-(void)setExitReason:(unsigned long long)arg1 ;
-(int)fairplayStatus;
-(BOOL)forceRevoke;
-(BOOL)forceUpsell;
-(NSDictionary *)relaunchOptions;
-(id)initWithBundlePath:(id)arg1 ;
-(id)copyUserInfoDictionary;
-(void)setFairplayStatus:(int)arg1 ;
-(void)setRelaunchOptions:(NSDictionary *)arg1 ;
-(void)setForceRevoke:(BOOL)arg1 ;
-(void)setForceUpsell:(BOOL)arg1 ;
@end

