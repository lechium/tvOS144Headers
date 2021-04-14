/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class NSString, NSArray, SAHAAttributeValue;

@interface SAHAAction : SADomainObject

@property (nonatomic,copy) NSString * actionType; 
@property (nonatomic,copy) NSString * attribute; 
@property (nonatomic,copy) NSArray * executionFlags; 
@property (assign,nonatomic) long long executionOrder; 
@property (assign,nonatomic) BOOL includeCompleteInformation; 
@property (nonatomic,retain) SAHAAttributeValue * value; 
+(id)action;
+(id)actionWithDictionary:(id)arg1 context:(id)arg2 ;
-(SAHAAttributeValue *)value;
-(void)setValue:(SAHAAttributeValue *)arg1 ;
-(NSString *)attribute;
-(id)groupIdentifier;
-(void)setActionType:(NSString *)arg1 ;
-(NSString *)actionType;
-(void)setAttribute:(NSString *)arg1 ;
-(id)encodedClassName;
-(long long)executionOrder;
-(void)setExecutionOrder:(long long)arg1 ;
-(NSArray *)executionFlags;
-(void)setExecutionFlags:(NSArray *)arg1 ;
-(BOOL)includeCompleteInformation;
-(void)setIncludeCompleteInformation:(BOOL)arg1 ;
@end

