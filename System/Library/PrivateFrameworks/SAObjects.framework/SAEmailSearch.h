/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainCommand.h>

@class NSDate, NSString;

@interface SAEmailSearch : SADomainCommand

@property (nonatomic,copy) NSDate * endDate; 
@property (nonatomic,copy) NSString * fromEmail; 
@property (nonatomic,copy) NSDate * startDate; 
@property (assign,nonatomic) int status; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,copy) NSString * timeZoneId; 
@property (nonatomic,copy) NSString * toEmail; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(int)status;
-(id)groupIdentifier;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStatus:(int)arg1 ;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)timeZoneId;
-(void)setTimeZoneId:(NSString *)arg1 ;
-(NSString *)fromEmail;
-(void)setFromEmail:(NSString *)arg1 ;
-(NSString *)toEmail;
-(void)setToEmail:(NSString *)arg1 ;
@end

