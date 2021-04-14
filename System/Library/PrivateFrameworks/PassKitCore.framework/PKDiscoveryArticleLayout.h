/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PKDiscoveryCard, NSArray, PKDiscoveryCallToAction;

@interface PKDiscoveryArticleLayout : NSObject <NSSecureCoding> {

	BOOL _requestedBadge;
	NSString* _itemIdentifier;
	long long _version;
	long long _variant;
	PKDiscoveryCard* _card;
	NSArray* _shelves;
	PKDiscoveryCallToAction* _footerLockup;
	long long _priority;
	/*^block*/id _actionOnDismiss;

}

@property (nonatomic,retain) NSString * itemIdentifier;                                   //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign,nonatomic) long long priority;                                          //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) long long version;                                         //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) long long variant;                                         //@synthesize variant=_variant - In the implementation block
@property (nonatomic,readonly) PKDiscoveryCard * card;                                    //@synthesize card=_card - In the implementation block
@property (nonatomic,readonly) NSArray * shelves;                                         //@synthesize shelves=_shelves - In the implementation block
@property (nonatomic,readonly) PKDiscoveryCallToAction * footerLockup;                    //@synthesize footerLockup=_footerLockup - In the implementation block
@property (nonatomic,copy) id actionOnDismiss;                                            //@synthesize actionOnDismiss=_actionOnDismiss - In the implementation block
@property (getter=hasRequestedBadge,nonatomic,readonly) BOOL requestedBadge;              //@synthesize requestedBadge=_requestedBadge - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(long long)priority;
-(long long)version;
-(void)setPriority:(long long)arg1 ;
-(NSString *)itemIdentifier;
-(long long)variant;
-(PKDiscoveryCard *)card;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(NSArray *)shelves;
-(void)setActionOnDismiss:(id)arg1 ;
-(void)localizeWithBundle:(id)arg1 ;
-(void)localizeWithBundle:(id)arg1 table:(id)arg2 ;
-(BOOL)isEqualForUI:(id)arg1 ;
-(void)setForItem:(id)arg1 ;
-(PKDiscoveryCallToAction *)footerLockup;
-(id)actionOnDismiss;
-(BOOL)hasRequestedBadge;
@end

