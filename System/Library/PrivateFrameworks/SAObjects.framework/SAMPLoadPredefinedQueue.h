/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSString, NSNumber;

@interface SAMPLoadPredefinedQueue : SADomainCommand

@property (assign,nonatomic) BOOL dryRun; 
@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (assign,nonatomic) int mediaItemType; 
@property (nonatomic,copy) NSString * requesterSharedUserId; 
@property (nonatomic,copy) NSString * sharedUserIdFromPlayableMusicAccount; 
@property (assign,nonatomic) BOOL shouldShuffle; 
@property (nonatomic,copy) NSNumber * startPlaying; 
+(id)loadPredefinedQueue;
+(id)loadPredefinedQueueWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(NSNumber *)startPlaying;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(NSString *)sharedUserIdFromPlayableMusicAccount;
-(void)setSharedUserIdFromPlayableMusicAccount:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(void)setStartPlaying:(NSNumber *)arg1 ;
-(BOOL)dryRun;
-(void)setDryRun:(BOOL)arg1 ;
-(NSString *)requesterSharedUserId;
-(void)setRequesterSharedUserId:(NSString *)arg1 ;
-(BOOL)shouldShuffle;
-(void)setShouldShuffle:(BOOL)arg1 ;
-(int)mediaItemType;
-(void)setMediaItemType:(int)arg1 ;
@end
