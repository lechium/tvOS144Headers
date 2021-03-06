/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>
#import <SAObjects/SAAceComparable.h>

@class NSString;

@interface SASocialProfile : AceObject <SAAceSerializable, SAAceComparable>

@property (nonatomic,copy) NSString * serviceType; 
@property (nonatomic,copy) NSString * url; 
@property (nonatomic,copy) NSString * userName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)socialProfile;
+(id)socialProfileWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)serviceType;
-(void)setServiceType:(NSString *)arg1 ;
-(NSString *)url;
-(NSString *)userName;
-(id)groupIdentifier;
-(void)setUserName:(NSString *)arg1 ;
-(id)encodedClassName;
@end

