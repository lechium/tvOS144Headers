/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SALocalSearchPeriod.h>

@class NSString;

@interface SALocalSearchNamedPeriod : AceObject <SALocalSearchPeriod>

@property (nonatomic,copy) NSString * value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)namedPeriod;
+(id)namedPeriodWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
@end
