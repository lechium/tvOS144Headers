/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainObject.h>

@class NSNumber, SALCMContent, NSString, NSArray;

@interface SALCMViewingContext : SADomainObject

@property (assign,nonatomic) BOOL commercialPlaying; 
@property (nonatomic,copy) NSNumber * durationInMilliseconds; 
@property (nonatomic,retain) SALCMContent * nowPlaying; 
@property (nonatomic,copy) NSString * nowPlayingAppId; 
@property (assign,nonatomic) BOOL paused; 
@property (nonatomic,copy) NSNumber * playbackPositionInMilliseconds; 
@property (nonatomic,copy) NSArray * viewingHistory; 
+(id)viewingContext;
+(id)viewingContextWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)paused;
-(void)setDurationInMilliseconds:(NSNumber *)arg1 ;
-(NSNumber *)durationInMilliseconds;
-(id)encodedClassName;
-(BOOL)commercialPlaying;
-(void)setCommercialPlaying:(BOOL)arg1 ;
-(SALCMContent *)nowPlaying;
-(void)setNowPlaying:(SALCMContent *)arg1 ;
-(NSString *)nowPlayingAppId;
-(void)setNowPlayingAppId:(NSString *)arg1 ;
-(NSNumber *)playbackPositionInMilliseconds;
-(void)setPlaybackPositionInMilliseconds:(NSNumber *)arg1 ;
-(NSArray *)viewingHistory;
-(void)setViewingHistory:(NSArray *)arg1 ;
@end

