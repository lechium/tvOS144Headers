/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AuthKit/AuthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AKAuthorizationUpgradeContext : NSObject <NSCopying, NSSecureCoding> {

	NSString* _appName;
	NSString* _appID;
	NSString* _bundleID;
	NSString* _serviceID;
	NSString* _teamID;
	NSString* _nonce;
	NSString* _state;

}

@property (nonatomic,copy) NSString * appName;                //@synthesize appName=_appName - In the implementation block
@property (nonatomic,copy) NSString * appID;                  //@synthesize appID=_appID - In the implementation block
@property (nonatomic,copy) NSString * bundleID;               //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * serviceID;              //@synthesize serviceID=_serviceID - In the implementation block
@property (nonatomic,copy) NSString * teamID;                 //@synthesize teamID=_teamID - In the implementation block
@property (nonatomic,copy) NSString * nonce;                  //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,copy) NSString * state;                  //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)teamID;
-(NSString *)nonce;
-(void)setNonce:(NSString *)arg1 ;
-(void)setTeamID:(NSString *)arg1 ;
-(NSString *)appName;
-(void)setAppName:(NSString *)arg1 ;
-(NSString *)appID;
-(void)setAppID:(NSString *)arg1 ;
-(NSString *)serviceID;
-(void)setServiceID:(NSString *)arg1 ;
@end

