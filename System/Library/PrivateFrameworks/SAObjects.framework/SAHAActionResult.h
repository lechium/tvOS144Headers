/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:28 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class SAHAEntity, NSString, NSArray, SAHAAttributeValue;

@interface SAHAActionResult : SADomainObject

@property (nonatomic,retain) SAHAEntity * entity; 
@property (nonatomic,copy) NSString * outcome; 
@property (nonatomic,copy) NSArray * relatedEntityIds; 
@property (nonatomic,copy) NSString * requestActionId; 
@property (nonatomic,copy) NSString * resultAttribute; 
@property (nonatomic,retain) SAHAAttributeValue * resultValue; 
+(id)actionResult;
+(id)actionResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)outcome;
-(void)setOutcome:(NSString *)arg1 ;
-(SAHAEntity *)entity;
-(void)setEntity:(SAHAEntity *)arg1 ;
-(id)encodedClassName;
-(NSArray *)relatedEntityIds;
-(void)setRelatedEntityIds:(NSArray *)arg1 ;
-(NSString *)requestActionId;
-(void)setRequestActionId:(NSString *)arg1 ;
-(NSString *)resultAttribute;
-(void)setResultAttribute:(NSString *)arg1 ;
-(SAHAAttributeValue *)resultValue;
-(void)setResultValue:(SAHAAttributeValue *)arg1 ;
@end

