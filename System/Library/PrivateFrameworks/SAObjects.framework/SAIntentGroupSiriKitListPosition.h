/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAIntentGroupSiriKitListPosition : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long offset; 
@property (nonatomic,copy) NSString * position; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)siriKitListPosition;
+(id)siriKitListPositionWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)position;
-(id)groupIdentifier;
-(void)setPosition:(NSString *)arg1 ;
-(long long)offset;
-(void)setOffset:(long long)arg1 ;
-(id)encodedClassName;
@end

