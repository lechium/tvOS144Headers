/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:41 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSDate, NSDictionary;


@protocol PGGraphIngestPerson <NSObject>
@property (nonatomic,readonly) NSString * fullName; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,readonly) NSString * contactID; 
@property (nonatomic,readonly) BOOL isFavorite; 
@property (nonatomic,readonly) BOOL isUserCreated; 
@property (nonatomic,readonly) BOOL isMe; 
@property (nonatomic,readonly) NSDate * birthdayDate; 
@property (nonatomic,readonly) NSDate * potentialBirthdayDate; 
@property (nonatomic,readonly) NSDate * anniversaryDate; 
@property (nonatomic,readonly) unsigned long long relationship; 
@property (nonatomic,readonly) unsigned long long ageCategory; 
@property (nonatomic,readonly) unsigned long long sex; 
@property (nonatomic,readonly) NSDictionary * locationsByAddressTypes; 
@required
-(NSString *)UUID;
-(unsigned long long)relationship;
-(NSString *)contactID;
-(NSString *)fullName;
-(BOOL)isMe;
-(BOOL)isFavorite;
-(BOOL)isUserCreated;
-(unsigned long long)ageCategory;
-(unsigned long long)sex;
-(NSDate *)birthdayDate;
-(NSDate *)potentialBirthdayDate;
-(NSDate *)anniversaryDate;
-(NSDictionary *)locationsByAddressTypes;

@end

