/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class NSData, NSString;

@interface SAAceCorrection : SADomainObject

@property (nonatomic,copy) NSData * correctionEntryData; 
@property (nonatomic,copy) NSString * debugString; 
+(id)aceCorrection;
+(id)aceCorrectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)debugString;
-(void)setDebugString:(NSString *)arg1 ;
-(NSData *)correctionEntryData;
-(void)setCorrectionEntryData:(NSData *)arg1 ;
@end
