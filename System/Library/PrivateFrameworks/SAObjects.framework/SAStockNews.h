/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class NSDate, NSString;

@interface SAStockNews : SADomainObject

@property (nonatomic,copy) NSDate * timeStamp; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * url; 
+(id)news;
+(id)newsWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)url;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSDate *)timeStamp;
-(id)encodedClassName;
-(void)setTimeStamp:(NSDate *)arg1 ;
@end

