/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:27 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSArray, SAMPPlaylist;

@interface SAMPAddMediaItemsToPlaylist : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * influencedUserSharedUserId; 
@property (nonatomic,copy) NSString * insertLocation; 
@property (nonatomic,copy) NSArray * mediaItems; 
@property (nonatomic,retain) SAMPPlaylist * playlist; 
+(id)addMediaItemsToPlaylist;
+(id)addMediaItemsToPlaylistWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)mediaItems;
-(void)setMediaItems:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)influencedUserSharedUserId;
-(void)setInfluencedUserSharedUserId:(NSString *)arg1 ;
-(SAMPPlaylist *)playlist;
-(NSString *)insertLocation;
-(void)setInsertLocation:(NSString *)arg1 ;
-(void)setPlaylist:(SAMPPlaylist *)arg1 ;
@end
