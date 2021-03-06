/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseAceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SADialogConfiguration : SABaseAceObject <SAAceSerializable>

@property (nonatomic,retain) id<SAAceSerializable> context; 
@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * languageCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)languageCode;
-(NSString *)gender;
-(void)setGender:(NSString *)arg1 ;
-(id<SAAceSerializable>)context;
-(id)groupIdentifier;
-(void)setContext:(id<SAAceSerializable>)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(id)encodedClassName;
@end

