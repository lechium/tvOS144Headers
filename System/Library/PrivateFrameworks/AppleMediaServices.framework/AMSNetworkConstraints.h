/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AMSBagConsumer_Project.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@class NSMutableDictionary, NSString;

@interface AMSNetworkConstraints : NSObject <AMSBagConsumer_Project, AMSBagConsumer> {

	NSMutableDictionary* _sizeLimits;

}

@property (nonatomic,retain) NSMutableDictionary * sizeLimits;                               //@synthesize sizeLimits=_sizeLimits - In the implementation block
@property (getter=isAnyNetworkTypeEnabled,readonly) BOOL anyNetworkTypeEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(id)bagKeySet;
+(id)createBagForSubProfile;
+(void)addRequiredBagKeysToAggregator:(id)arg1 ;
+(id)_networkConstraintsForMediaType:(id)arg1 withArray:(id)arg2 ;
+(id)networkConstraintsForMediaType:(id)arg1 withBag:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(void)_setSizeLimit:(long long)arg1 forNetworkType:(id)arg2 ;
-(long long)_sizeLimitForNetworkType:(id)arg1 ;
-(void)_disableAllNetworkTypes;
-(BOOL)hasSizeLimitForNetworkType:(id)arg1 ;
-(BOOL)isAnyNetworkTypeEnabled;
-(long long)sizeLimitForNetworkType:(id)arg1 ;
-(BOOL)isEqualToConstraints:(id)arg1 ;
-(NSMutableDictionary *)sizeLimits;
-(id)_initWithStoreConstraintDictionary:(id)arg1 ;
-(void)setSizeLimits:(NSMutableDictionary *)arg1 ;
@end

