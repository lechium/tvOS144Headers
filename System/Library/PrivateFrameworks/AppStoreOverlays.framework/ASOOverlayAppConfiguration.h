/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreOverlays.framework/AppStoreOverlays
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreOverlays/AppStoreOverlays-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ASOOverlayConfiguration.h>

@class NSMutableDictionary, NSString;

@interface ASOOverlayAppConfiguration : NSObject <NSSecureCoding, ASOOverlayConfiguration> {

	NSMutableDictionary* _storage;

}

@property (nonatomic,retain,readonly) NSMutableDictionary * storage;              //@synthesize storage=_storage - In the implementation block
@property (nonatomic,retain) NSString * appIdentifier; 
@property (nonatomic,retain) NSString * campaignToken; 
@property (nonatomic,retain) NSString * providerToken; 
@property (assign,nonatomic) long long position; 
@property (assign,nonatomic) BOOL userDismissible; 
@property (assign,nonatomic) BOOL userDismissable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(NSMutableDictionary *)storage;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)position;
-(void)setPosition:(long long)arg1 ;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(NSString *)appIdentifier;
-(id)initWithStorage:(id)arg1 ;
-(id)initWithAppIdentifier:(id)arg1 position:(long long)arg2 ;
-(void)setCampaignToken:(NSString *)arg1 ;
-(NSString *)campaignToken;
-(void)setProviderToken:(NSString *)arg1 ;
-(NSString *)providerToken;
-(void)setUserDismissible:(BOOL)arg1 ;
-(BOOL)userDismissible;
-(void)setAdditionalValue:(id)arg1 forKey:(id)arg2 ;
-(id)additionalValueForKey:(id)arg1 ;
-(void)setUserDismissable:(BOOL)arg1 ;
-(BOOL)userDismissable;
@end

