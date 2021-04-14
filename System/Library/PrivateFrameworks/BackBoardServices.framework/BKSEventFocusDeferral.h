/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class BKSEventFocusDeferralProperties;

@interface BKSEventFocusDeferral : NSObject <NSSecureCoding> {

	int _priority;
	BKSEventFocusDeferralProperties* _properties;
	BKSEventFocusDeferralProperties* _deferredProperties;

}

@property (nonatomic,readonly) BKSEventFocusDeferralProperties * properties;                      //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) BKSEventFocusDeferralProperties * deferredProperties;              //@synthesize deferredProperties=_deferredProperties - In the implementation block
@property (nonatomic,readonly) int priority;                                                      //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) BOOL isCycle; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)priority;
-(BKSEventFocusDeferralProperties *)properties;
-(id)conciseDescription;
-(id)initWithProperties:(id)arg1 deferredProperties:(id)arg2 ;
-(id)initWithProperties:(id)arg1 deferredProperties:(id)arg2 withPriority:(int)arg3 ;
-(BOOL)defersProperties:(id)arg1 ;
-(id)deferredPropertiesForProperties:(id)arg1 ;
-(BOOL)isCycle;
-(BKSEventFocusDeferralProperties *)deferredProperties;
@end
