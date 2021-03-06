/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainCommand.h>

@class NSURL, SALocation, NSDate, NSString, SAEmail, NSNumber, SAPhone;

@interface SAABPersonSearch : SADomainCommand

@property (nonatomic,copy) NSURL * accountIdentifier; 
@property (nonatomic,retain) SALocation * address; 
@property (nonatomic,copy) NSDate * birthday; 
@property (nonatomic,copy) NSString * company; 
@property (nonatomic,retain) SAEmail * email; 
@property (nonatomic,copy) NSNumber * me; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SAPhone * phone; 
@property (nonatomic,copy) NSString * relationship; 
@property (nonatomic,copy) NSString * scope; 
+(id)personSearch;
+(id)personSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(SALocation *)address;
-(id)groupIdentifier;
-(NSString *)scope;
-(void)setScope:(NSString *)arg1 ;
-(NSString *)relationship;
-(void)setAddress:(SALocation *)arg1 ;
-(SAEmail *)email;
-(void)setEmail:(SAEmail *)arg1 ;
-(void)setAccountIdentifier:(NSURL *)arg1 ;
-(NSURL *)accountIdentifier;
-(SAPhone *)phone;
-(void)setPhone:(SAPhone *)arg1 ;
-(NSString *)company;
-(void)setCompany:(NSString *)arg1 ;
-(void)setRelationship:(NSString *)arg1 ;
-(NSDate *)birthday;
-(void)setBirthday:(NSDate *)arg1 ;
-(NSNumber *)me;
-(void)setMe:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
@end

