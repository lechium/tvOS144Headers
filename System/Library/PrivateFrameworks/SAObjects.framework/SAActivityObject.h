/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:18 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class NSDate, NSDictionary, NSString, SAClientUserActivity;

@interface SAActivityObject : SADomainObject

@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSDictionary * metadata; 
@property (nonatomic,copy) NSDate * startDate; 
@property (nonatomic,copy) NSString * streamType; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,retain) SAClientUserActivity * userActivity; 
@property (nonatomic,copy) NSString * visibility; 
+(id)activityObject;
+(id)activityObjectWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setVisibility:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSString *)visibility;
-(NSDictionary *)metadata;
-(SAClientUserActivity *)userActivity;
-(void)setUserActivity:(SAClientUserActivity *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(id)encodedClassName;
-(NSString *)streamType;
-(void)setStreamType:(NSString *)arg1 ;
@end

