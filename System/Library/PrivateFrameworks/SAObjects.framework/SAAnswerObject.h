/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString;

@interface SAAnswerObject : SADomainObject

@property (nonatomic,copy) NSArray * lines; 
@property (nonatomic,copy) NSString * title; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSArray *)lines;
-(void)setLines:(NSArray *)arg1 ;
-(id)encodedClassName;
@end

