/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDate, NSString;

@interface SASportsSeasonRange : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSDate * end; 
@property (nonatomic,copy) NSString * seasonType; 
@property (nonatomic,copy) NSDate * start; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)seasonRange;
+(id)seasonRangeWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDate *)start;
-(id)groupIdentifier;
-(NSDate *)end;
-(void)setEnd:(NSDate *)arg1 ;
-(void)setStart:(NSDate *)arg1 ;
-(id)encodedClassName;
-(NSString *)seasonType;
-(void)setSeasonType:(NSString *)arg1 ;
@end
