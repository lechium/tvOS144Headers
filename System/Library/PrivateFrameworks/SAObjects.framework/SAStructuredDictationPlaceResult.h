/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSData;

@interface SAStructuredDictationPlaceResult : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * placeResultType; 
@property (nonatomic,copy) NSData * resultData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)structuredDictationPlaceResult;
+(id)structuredDictationPlaceResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)placeResultType;
-(id)encodedClassName;
-(void)setPlaceResultType:(NSString *)arg1 ;
-(NSData *)resultData;
-(void)setResultData:(NSData *)arg1 ;
@end

