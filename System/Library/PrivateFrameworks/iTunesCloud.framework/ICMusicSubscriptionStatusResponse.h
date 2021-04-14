/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICMusicSubscriptionStatus, NSDate, NSDictionary;

@interface ICMusicSubscriptionStatusResponse : NSObject <NSCopying, NSSecureCoding> {

	BOOL _finalResponse;
	BOOL _needsReload;
	ICMusicSubscriptionStatus* _subscriptionStatus;
	NSDate* _expirationDate;

}

@property (assign,getter=isFinalResponse,nonatomic) BOOL finalResponse;                     //@synthesize finalResponse=_finalResponse - In the implementation block
@property (assign,nonatomic) BOOL needsReload;                                              //@synthesize needsReload=_needsReload - In the implementation block
@property (nonatomic,copy) ICMusicSubscriptionStatus * subscriptionStatus;                  //@synthesize subscriptionStatus=_subscriptionStatus - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * propertyListRepresentation; 
@property (nonatomic,copy,readonly) NSDate * expirationDate;                                //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
+(BOOL)supportsSecureCoding;
+(BOOL)isValidSubscriptionStatusPropertyListRepresentation:(id)arg1 error:(id*)arg2 ;
+(BOOL)isValidSubscriptionStatusResponseDictionary:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(ICMusicSubscriptionStatus *)subscriptionStatus;
-(void)setSubscriptionStatus:(ICMusicSubscriptionStatus *)arg1 ;
-(BOOL)needsReload;
-(void)setNeedsReload:(BOOL)arg1 ;
-(NSDictionary *)propertyListRepresentation;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(BOOL)isFinalResponse;
-(id)initWithResponseDictionary:(id)arg1 expirationDate:(id)arg2 ;
-(void)setFinalResponse:(BOOL)arg1 ;
@end

