/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SASyncAppIdentifyingInfo : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * buildNumber; 
@property (nonatomic,copy) NSString * bundleId; 
@property (nonatomic,copy) NSString * clientIdentifier; 
@property (nonatomic,copy) NSString * version; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)appIdentifyingInfo;
+(id)appIdentifyingInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)version;
-(void)setBundleId:(NSString *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)bundleId;
-(NSString *)clientIdentifier;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)buildNumber;
-(void)setBuildNumber:(NSString *)arg1 ;
-(id)encodedClassName;
@end

